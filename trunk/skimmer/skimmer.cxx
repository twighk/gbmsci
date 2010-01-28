#include "skimmer.h"
#include <map>
#include "double2int.h"
#include "../header/varlib.h"

using namespace std;
using namespace dict;


struct VarHandler {                 // Variable Handler struct
	Double_t        value;          // The actual value of the variable
	Var        *    func;           // Pointer to the required variable class
	
	VarHandler(Var * _func) {       // Constructor
		value       =   0;	
		func        =   _func;
	}
	
	VarHandler() {                  //Must implement default constructor if going into a map
		value		=	0;
		func		=	NULL;
	}
};

typedef map<string, VarHandler>					VarHandlerMap;
typedef map<string, VarHandler>::iterator		VarHandlerMapIt;
typedef map<string, brptr>						BranchPtrMap;
typedef map<string, Int_t>						IndexMap;



skimmer::skimmer(std::string _rootpath){
	rootpath	= _rootpath;
	filecombo	= new TFile( (rootpath + "combo.root").c_str(), "RECREATE");
	treecombo	= new TTree("combotree","combotree");
}

void skimmer::AddChannel(std::string instring, std::string _tree, Double_t lum){
	
	infile.push_back(new TFile((rootpath + instring + ".root").c_str()));
	channel.push_back(instring);
	int_lum.push_back(lum);
	if (infile[infile.size() - 1]->IsOpen() == 0){
		cout << "Quitting" << endl;
		exit(1);
	} else {
		cout << "Added Channel " << instring << endl;
	}	
	
	intree.push_back(dynamic_cast<TTree*>(infile[infile.size() - 1]->Get(_tree.c_str())));
	if (dynamic_cast<TTree*>(infile[infile.size() - 1]->Get(_tree.c_str())) == 0){
		cout << "Channel TTree not found \nQuitting" << endl;
		exit(1);
	}
	
	outfile.push_back(new TFile((rootpath + instring + "_skim.root").c_str(), "RECREATE"));
	outtree.push_back(new TTree(_tree.c_str(),_tree.c_str()));
}

void skimmer::GoSkim(){
	
	//STEP 1:Set up the output variables we are interested in (only one line required!)
	VarHandlerMap outmap;
	outmap["TauEt"]				= VarHandler( new VarTauEt() ) ;
	outmap["ElectronEt"]		= VarHandler( new VarElectronEt() ) ;
	outmap["MetEt"]				= VarHandler( new VarMetEt() ) ;	
	outmap["ElectronTauDPhi"]	= VarHandler( new VarElectronTauDPhi() ) ;			
	outmap["ElectronEta"]		= VarHandler( new VarElectronEta() ) ;
	outmap["TauEta"]			= VarHandler( new VarTauEta() ) ;			
	outmap["ElectronEcalIso"]	= VarHandler( new VarElectronEcalIso() ) ;		
	outmap["ElectronHcalIso"]	= VarHandler( new VarElectronHcalIso() ) ;		
	outmap["ElectronTrackIso"]	= VarHandler( new VarElectronTrackIso() ) ;		
	outmap["ElectronCharge"]	= VarHandler( new VarElectronCharge() ) ;		
	outmap["TauCharge"]			= VarHandler( new VarTauCharge() ) ;		
	outmap["ElecTauChargeProd"]	= VarHandler( new VarElecTauChargeProd() ) ;		
//	NB our preselection does tau checks - no point in including these variables for now
//	outmap["TauProng"]			= VarHandler( new VarTauProng() ) ;		
//	outmap["TauLeadTrk"]		= VarHandler( new VarTauLeadTrk() ) ;		
//	outmap["TauEcalIso"]		= VarHandler( new VarTauEcalIso() ) ;		
//	outmap["TauTrackIso"]		= VarHandler( new VarTauTrackIso() ) ;		
//	outmap["TauAntiElectron"]	= VarHandler( new VarTauAntiElectron() ) ;		
	outmap["ElectronMetDPhi"]	= VarHandler( new VarElectronMetDPhi() ) ;		
	outmap["ElectronMetMt"]		= VarHandler( new VarElectronMetMt() ) ;		
	outmap["VisibleMass"]		= VarHandler( new VarVisibleMass() ) ;		
	
	//STEP 2:Register Output Branches
	vector<Int_t> type (infile.size(), 0);							//Vector holds type information
	outtree.push_back(treecombo);									//Add the combotree to our outtree vector
	VarHandlerMapIt pos;  //Iterator for the outmap, so we can loop through
	for (Int_t i = 0; i < outtree.size() ; i++) {					//Loop through output trees
		for (pos = outmap.begin(); pos !=outmap.end(); ++pos) {		//Loop through desired variable branches
			outtree[i]->Branch( (pos->first).c_str(), &((pos->second).value) );
		}
		for (Int_t k = 0; k < type.size(); k++) {					//Make necessary number of type branches
			outtree[i]->Branch(("type" + Int2String(k+1)).c_str(), &type[k]);
		}
	}
	
	//STEP 3:Skimming! - Loop over trees & events
	Int_t eventcounter = 0;											//Keep track of the no. of events we actually skim
	for (Int_t i = 0; i < intree.size() ; i++) {					//Loop through input trees
		cout << "Skimming Channel " << channel[i] << endl;
		beginvec.push_back(eventcounter);							//Record index of first skimmed event in tree
		BranchPtrMap * incoming;									//Pointer to map of input branch addresses
		event evt(intree[i]);										//Make event handler for current tree
		IndexMap preselect;											//Make preselection indicies map
		
		for (Int_t j = 0; j < intree[i]->GetEntries(); j++) {		//Loop through events of current tree
			incoming = evt.Entry(j);								//Get appropriate branch object addresses for current entry
			
			if (DoPreselection(incoming, preselect)) {				//Check to see if we want to skim this event
				eventcounter++;
				//Loop through desired variable functions, filling the outmap double values	
				VarHandlerMapIt posx;								//Iterator for the outmap, so we can loop through
				for (posx = outmap.begin(); posx !=outmap.end(); ++posx) {
					(posx->second).value = ((posx->second).func)->Get(incoming, &preselect);
				}
				//Loop through type variables, writing a '1' for the correct type we're on
				for (Int_t k = 0; k < type.size(); k++) {
					if (i == k) {type[k] = 1;} else {type[k] = 0;}
				}
				outtree[i]->Fill();									//Finally we can fill the skimmed tree
				treecombo->Fill();
			}
			
		}
		endvec.push_back(eventcounter - 1);							//Record index of last skimmed event in tree
	}

	//STEP 4:Write resulting ROOT files
	for (Int_t i = 0; i < outfile.size() ; i++) {
		cout << "Writing " << (rootpath + channel[i] + "_skim.root") << endl;
		outfile[i]->Write();
	}
	cout << "Skimming Complete!" << endl;
}

bool skimmer::DoPreselection(BranchPtrMap * d, IndexMap &index){

	TClonesArray* electron = u<TClonesArray>((*d)["lv_electron"]);
	TClonesArray* tau = u<TClonesArray>((*d)["lv_tau"]);
	TLorentzVector* temp_electron = 0;
	TLorentzVector* temp_tau = 0;
	vector<Double_t> * tauprong = u< vector<Double_t> >((*d)["tauTracks"]);
	vector<Double_t> * tauleadtrk = u< vector<Double_t> >((*d)["tauLeadTrk"]);
	vector<Double_t> * tauecaliso = u< vector<Double_t> >((*d)["tauECALIso"]);
	vector<Double_t> * tautrackiso = u< vector<Double_t> >((*d)["tauTrackIso"]);
	vector<Double_t> * tauantielectron = u <vector<Double_t> >((*d)["tauElectron"]);

	//Make sure we actually have electrons and taus first
	if (electron->GetEntriesFast() == 0) return false;
	if (tau->GetEntriesFast() == 0) return false; 
	
	vector <int> tauresult (tau->GetEntriesFast(), 0);
	int resultcount = 0;
	vector <int> tauindex;
	
	for (int k = 0; k < tauresult.size(); k++) {
		if (
			(double2int((*tauprong)[k]) == 1 || double2int((*tauprong)[k]) == 3)
		&&	(double2int((*tauleadtrk)[k]) == 1)
		&&  (double2int((*tauecaliso)[k]) == 1)
		&&  (double2int((*tautrackiso)[k]) == 1)
		&&  (double2int((*tauantielectron)[k]) == 1)
			){
			tauresult[k] = 1;
			resultcount++;
			tauindex.push_back(k);
		}
	}
			
	if (resultcount == 0) {
		return false;
	}
	if (resultcount == 1) {
		index["tindex"] = tauindex[0];
	}
	if (resultcount >  1) {
		Double_t next_t_et;
		Int_t best_t_index = tauindex[0];
		for (int m = 1; m < tauindex.size(); m++) {
			temp_tau = (dynamic_cast<TLorentzVector*>(tau->At(tauindex[m])));
			next_t_et = temp_tau->Et();
			
			if (next_t_et > (dynamic_cast<TLorentzVector*>(tau->At(best_t_index)))->Et()) {
				best_t_index = tauindex[m];
			}
		}
		index["tindex"] = best_t_index;
	}
	
	Double_t next_e_et;
	Int_t best_e_index = 0;

	for (int k = 1; k < electron->GetEntriesFast(); k++) {
		temp_electron = (dynamic_cast<TLorentzVector*>(electron->At(k)));
		next_e_et = temp_electron->Et();
		if (next_e_et > (dynamic_cast<TLorentzVector*>(electron->At(best_e_index)))->Et()) {
			best_e_index = k;
		}
	}
	index["eindex"] = best_e_index;
	if (index["eindex"] != 0) {
		cout << index["tindex"] << "\t" << index["eindex"] << endl;

	}
	return true;	
}

void skimmer::WriteCombo(){
	filecombo->cd();	
	TString channelname;
	Double_t lum;
	Int_t begin, end;
	TTree* metadata = new TTree("metadata","metadata");
	metadata->Branch("ChannelName",&channelname,256000,0);
	metadata->Branch("IntLum",&lum);
	metadata->Branch("BeginIndex",&begin);
	metadata->Branch("EndIndex",&end);

	for (int i = 0; i < infile.size(); i++) {
		channelname = (channel[i]).c_str();
		lum = int_lum[i];
		begin = beginvec[i];
		end = endvec[i];
		metadata->Fill();
	}
	
	filecombo->Write();
}

string skimmer::Int2String(Int_t num){
	stringstream out;
	out << num;
	return out.str();
}


