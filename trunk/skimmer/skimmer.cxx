#include "skimmer.h"
#include <map>
#include "double2int.h"
#include "../header/varlib.h"
#include <TRandom2.h>
#include "../dict/dict.h"
#include "../header/brptr.h"

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

typedef map<string, VarHandler>                 VarHandlerMap;
typedef map<string, VarHandler>::iterator       VarHandlerMapIt;
typedef map<string, brptr>                      BranchPtrMap;
typedef map<string, Int_t>                      IndexMap;

skimmer::skimmer(std::string _rootpath, std::string _outname){
    rootpath	= _rootpath;
    filecombo	= new TFile( (rootpath + _outname + ".root").c_str(), "RECREATE");
    treecombo	= new TTree("combotree","combotree");
	setstats	= true;
}

void skimmer::AddChannel(std::string instring, std::string _tree){
	    
    infile.push_back(new TFile((rootpath + instring + ".root").c_str()));
    channel.push_back(instring);
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
    
    eventlist.resize(eventlist.size() + 1);
    
    weights.push_back(0.);
}

void skimmer::GoSkim(){
	
    //STEP 1:Set up the output variables we are interested in (only one line required!)
    VarHandlerMap outmap;
    
    outmap["CountBTag"]			= VarHandler( new VarCountValidBTag() ) ;	
    outmap["ElecEcalIso"]		= VarHandler( new VarElectronEcalIso() ) ;		
    outmap["ElecEt"]			= VarHandler( new VarElectronEt() ) ;
    outmap["ElecHcalIso"]		= VarHandler( new VarElectronHcalIso() ) ;		
    outmap["ElecMetDPhi"]		= VarHandler( new VarElectronMetDPhi() ) ;
    outmap["ElecMetMt"]			= VarHandler( new VarElectronMetMt() ) ;		
    outmap["ElecTauDPhi"]		= VarHandler( new VarElectronTauDPhi() ) ;			
    outmap["ElecTauDR"]			= VarHandler( new VarElectronTauDR() ) ;		
    outmap["ElecTrkIso"]		= VarHandler( new VarElectronTrackIso() ) ;	
    outmap["ElectronEta"]       = VarHandler( new VarElectronEta() ) ;
    outmap["ElectronTauMt"]     = VarHandler( new VarElectronTauMt() ) ;
    outmap["ETCharProd"]		= VarHandler( new VarElecTauChargeProd() ) ;		
    outmap["HighBTag"]          = VarHandler( new VarHighBTag() ) ;	
    outmap["JetCount"]          = VarHandler( new VarJetCount() ) ;	//Very good for TTplusjets	
    outmap["JetCountEtCut"]     = VarHandler( new VarJetCountEtCut() ) ;
    outmap["LeptonCount"]       = VarHandler( new VarLeptonCount() ) ;
    outmap["MeanBTag"]          = VarHandler( new VarMeanBTag() ) ;	
    outmap["MetEt"]             = VarHandler( new VarMetEt() ) ;	
    outmap["MuonCount"]         = VarHandler( new VarMuonCount() ) ;
    outmap["SumBtagHighEff"]    = VarHandler( new VarSumBtagHighEff() ) ;
    outmap["SumElecTauEt"]      = VarHandler( new VarSumElecTauEt() ) ;
    outmap["SumJetEt"]          = VarHandler( new VarSumJetEt() ) ;
    outmap["TauEt"]             = VarHandler( new VarTauEt() ) ;
    outmap["TauEta"]            = VarHandler( new VarTauEta() ) ;	//Doesn't make linear combinations!!!		
    outmap["TauM2"]             = VarHandler( new VarTauM2() ) ;
    outmap["TauMetDPhi"]		= VarHandler( new VarTauMetDPhi() ) ;
    outmap["VisibleMass"]       = VarHandler( new VarVisibleMass() ) ;	
    outmap["VisibleMassDev90"]  = VarHandler( new VarVisibleMassDev90() ) ;
    outmap["IntLum"]            = VarHandler( new VarIntLum() ) ;	
    
//    outmap["ElectronCharge"]  = VarHandler( new VarElectronCharge() ) ;		
//    outmap["TauCharge"]       = VarHandler( new VarTauCharge() ) ;		
//    outmap["TauProng"]		= VarHandler( new VarTauProng() ) ;		
//    outmap["TauLeadTrk"]		= VarHandler( new VarTauLeadTrk() ) ;		
//	  outmap["TauEcalIso"]		= VarHandler( new VarTauEcalIso() ) ;		
//	  outmap["TauTrackIso"]		= VarHandler( new VarTauTrackIso() ) ;		
//	  outmap["TauAntiElectron"]	= VarHandler( new VarTauAntiElectron() ) ;		
//    outmap["JetCountEtaCut"]  = VarHandler( new VarJetCountEtaCut() ) ;
//    outmap["TauPhi"]          = VarHandler( new VarTauPhi() ) ;		
//    outmap["ElectronPhi"]     = VarHandler( new VarElectronPhi() ) ;		
//    outmap["MetPhi"]          = VarHandler( new VarMetPhi() ) ;		
//    outmap["HighBTagJetEt"]   = VarHandler( new VarHighBTagJetEt() ) ;	//Didn't help very much
//    outmap["HiggsMass"]       = VarHandler( new VarHiggsMass() ) ;	
//    outmap["IntTest"]			= VarHandler( new VarIntTest() ) ;	
//    outmap["IntTest2"]        = VarHandler( new VarIntTest() ) ;	
//    outmap["ElecTauEtDiff"]   = VarHandler( new VarElecTauEtDiff() ) ;

//    Double_t rndnum;
//    Double_t rndnum2;
//
//    TRandom2 rndgen(345);
//	TRandom2 rndgen2(12);

    //STEP 2:Register Output Branches
    Double_t theweight = 0.;
    vector<Int_t> type (infile.size(), 0);                          //Vector holds type information
    outtree.push_back(treecombo);                                   //Add the combotree to our outtree vector
    VarHandlerMapIt pos;                                            //Iterator for the outmap, so we can loop through
    cout << "\nUsing variables:" << endl;
    for (UInt_t i = 0; i < outtree.size() ; i++) {                   //Loop through output trees
        for (pos = outmap.begin(); pos !=outmap.end(); ++pos) {     //Loop through desired variable branches
            if (i == 0) {
                cout << " " << (pos->first) << endl;
            }
            outtree[i]->Branch( (pos->first).c_str(), &((pos->second).value) );
        }
        for (UInt_t k = 0; k < type.size(); k++) {                   //Make necessary number of type branches
            outtree[i]->Branch(("type" + Int2String(k+1)).c_str(), &type[k]);
        }
        outtree[i]->Branch("weight", &theweight);
//        outtree[i]->Branch("RndTest", &rndnum);
		//outtree[i]->Branch("RndTest2", &rndnum2);

    }
	
    //STEP 3a: Couting - Work out how many events will pass selection for weight branch
    
    cout << "\nPreselection:\n >0 electrons\n >0 taus\n Highest Et electron\n 1 Tau with 1/3 tracks, leadtrk, ECALiso, trackiso, antielectron" << endl; 
    cout << " Highest b-tag Jet (default to -13. if no valid b-tag found)" << endl; 
    cout << "\nPreselection Counts:"<< endl;

    for (UInt_t i = 0; i < intree.size() ; i++) {                    //Loop through input trees
        BranchPtrMap * incoming;                                    //Pointer to map of input branch addresses
        event evt(intree[i]);                                       //Make event handler for current tree
        IndexMap preselect;                                         //Make preselection indicies map
		Int_t passcounter = 0;
        for (Int_t j = 0; j < intree[i]->GetEntries(); j++) {       //Loop through events of current tree
            incoming = evt.Entry(j);   
            if (DoPreselection(incoming, preselect)) {              //Check to see if we want to skim this event
                passcounter++;
                (eventlist[i]).push_back(j);
				CalcStats(i, incoming, &preselect);
			}

        }
        weights[i] = Double_t(passcounter);
        cout << " " << channel[i] << "\n " << weights[i] << "\t / \t" << (intree[i]->GetEntries()) << endl;
    }
    
    //STEP 3b:Skimming! - Loop over trees & events
    Int_t eventcounter = 0;                                         //Keep track of the no. of events we actually skim
    
    
    //Random Stuff Here
    cout << "\nSkimming Channels " << endl;
    for (UInt_t i = 0; i < intree.size() ; i++) {                    //Loop through input trees
        cout << " " << channel[i] << endl;
        beginvec.push_back(eventcounter);                           //Record index of first skimmed event in tree
        BranchPtrMap * incoming;                                    //Pointer to map of input branch addresses
        event evt(intree[i]);                                       //Make event handler for current tree
        IndexMap preselect;                                         //Make preselection indicies map
		theweight = 1. / (weights[i]);

        for (UInt_t j = 0; j < (eventlist[i]).size() ; j++) {
        
 //           rndnum2 = rndgen2.Rndm();
//            rndnum = Double_t(i) + rndgen.Gaus(0.0 , 0.1);
			incoming = evt.Entry(eventlist[i][j]);                  //Get appropriate branch object addresses for current entry
//          theweight = 1. / (*(u< vector<Double_t> >((*incoming)["intlum"])))[0];
			DoPreselection(incoming, preselect);
			preselect["magic"] = i;
			eventcounter++;
                //Loop through desired variable functions, filling the outmap double values	
			VarHandlerMapIt posx;                               //Iterator for the outmap, so we can loop through
                for (posx = outmap.begin(); posx !=outmap.end(); ++posx) {
                    (posx->second).value = ((posx->second).func)->Get(incoming, &preselect);
                }
                //Loop through type variables, writing a '1' for the correct type we're on
                for (UInt_t k = 0; k < type.size(); k++) {
                    if (i == k) {type[k] = 1;} else {type[k] = 0;}
                }
                outtree[i]->Fill();                                 //Finally we can fill the skimmed tree
                treecombo->Fill();
			
        }
        endvec.push_back(eventcounter - 1);                         //Record index of last skimmed event in tree
    }
    
    //STEP 4:Write resulting ROOT files
    cout << "\nWriting Skimmed ROOT Files: " << endl;

    for (UInt_t i = 0; i < outfile.size() ; i++) {
        cout << " " << (rootpath + channel[i] + "_skim.root") << endl;
        outfile[i]->Write();
    }
	
//	cout << "Stats:" << endl;
//	PrintStats();
    cout << "\nSkimming Complete!" << endl;
}

bool skimmer::DoPreselection(BranchPtrMap * d, IndexMap &index){
    
    TClonesArray* electron = u<TClonesArray>((*d)["lv_electron"]);
    TClonesArray* tau = u<TClonesArray>((*d)["lv_tau"]);
    TClonesArray* met = u<TClonesArray>((*d)["lv_met"]);
    TLorentzVector* temp_met = (TLorentzVector*)met->At(0);
    TLorentzVector* temp_electron = 0;
    TLorentzVector* temp_tau = 0;
    vector<Double_t> * tauprong = u< vector<Double_t> >((*d)["tauTracks"]);
    vector<Double_t> * tauleadtrk = u< vector<Double_t> >((*d)["tauLeadTrk"]);
    vector<Double_t> * tauecaliso = u< vector<Double_t> >((*d)["tauECALIso"]);
    vector<Double_t> * tautrackiso = u< vector<Double_t> >((*d)["tauTrackIso"]);
    vector<Double_t> * tauantielectron = u < vector<Double_t> >((*d)["tauElectron"]);
    vector<Double_t> * btrackcounthigheff = u< vector<Double_t> > ((*d)["jetBTagTrackCountHighEff"]);
    
	//Make sure we actually have electrons and taus first
    if (electron->GetEntriesFast() == 0) return false;
    if (tau->GetEntriesFast() == 0) return false; 
    if (temp_met->Et() > 500.) {
        return false;
    }
         
    bool foundbtag = false;
    Double_t next_btag;
    Int_t best_btag_index = 0;
    
    // Check we have at least one valid b-tag
    for (unsigned int k = 0; k < (*btrackcounthigheff).size(); k++) {
        if ((*btrackcounthigheff)[k] > -50.) {
            foundbtag = true;
        }
    }

    // Find the highest b-tag index
    
    if (foundbtag == true) {
        for (unsigned int k = 1; k < (*btrackcounthigheff).size(); k++) {
            next_btag = (*btrackcounthigheff)[k];
            if (next_btag > (*btrackcounthigheff)[best_btag_index]) {
                best_btag_index = k;
            }
        }
        index["bindex"] = best_btag_index;
    }
    else {
        index["bindex"] = -1;
    }
    
    
    vector <int> tauresult (tau->GetEntriesFast(), 0);
    int resultcount = 0;
    vector <int> tauindex;
                                                                   
    for (unsigned int k = 0; k < tauresult.size(); k++) {
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
        temp_tau = (dynamic_cast<TLorentzVector*>(tau->At(tauindex[0])));
        if (temp_tau->Et() > 500.) {
            return false;
        }

    }
    if (resultcount >  1) {
        return false;   //Only a small number of events with two good taus
//        Double_t next_t_et;
//        Int_t best_t_index = tauindex[0];
//        for (unsigned int m = 1; m < tauindex.size(); m++) {
//            temp_tau = (dynamic_cast<TLorentzVector*>(tau->At(tauindex[m])));
//            next_t_et = temp_tau->Et();
//            if (next_t_et > (dynamic_cast<TLorentzVector*>(tau->At(best_t_index)))->Et()) {
//                best_t_index = tauindex[m];
//            }
//        }
//        index["tindex"] = best_t_index;
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
    Int_t begin, end;
    TTree* metadata = new TTree("metadata","metadata");
    metadata->Branch("ChannelName",&channelname,256000,0);
    metadata->Branch("BeginIndex",&begin);
    metadata->Branch("EndIndex",&end);
    
    for (unsigned int i = 0; i < infile.size(); i++) {
        channelname = (channel[i]).c_str();
        begin = beginvec[i];
        end = endvec[i];
        metadata->Fill();
    }
    
    filecombo->Write();
}


void skimmer::CalcStats(Int_t chn, BranchPtrMap * d, IndexMap * index){
	if (setstats == true) {
		stats["MeanMuons|>0Elec&&>0Tau"] = vector< vector<Double_t> > (channel.size());
		setstats = false;
	}
	TClonesArray* electron = u<TClonesArray>((*d)["lv_electron"]);
    TClonesArray* tau = u<TClonesArray>((*d)["lv_tau"]);
	TClonesArray* muon = u<TClonesArray>((*d)["lv_muon"]);
	
	if (electron->GetEntriesFast() > 0 && tau->GetEntriesFast()) {
		stats["MeanMuons|>0Elec&&>0Tau"][chn].push_back( Double_t(muon->GetEntriesFast()) );
	}

//    TLorentzVector* temp_electron = 0;
//    TLorentzVector* temp_tau = 0;
	
	
}

void skimmer::PrintStats(){
	map<string, vector< vector<Double_t> > >::iterator posx;                               //Iterator for the outmap, so we can loop through
	for (posx = stats.begin(); posx !=stats.end(); ++posx) {
		
		cout << (posx->first) << endl;
		for (unsigned int i = 0; i < channel.size(); i++) {
			Double_t sum = 0;
			for (unsigned int j =0; j < (posx->second)[i].size(); j++) {
				sum += (posx->second)[i][j];
			}
			sum = sum / (posx->second)[i].size();
			cout << channel[i] << "\t\t" << sum << "\t\t/" << (posx->second)[i].size() << endl;
		}
	}
}



string skimmer::Int2String(Int_t num){
    stringstream out;
    out << num;
    return out.str();
}


