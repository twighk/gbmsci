#include "skimmer.h"
#include "double2int.h"

using namespace std;

skimmer::skimmer(){
	cout << "Skimmer instance created" << endl;
	rootpath = "";
	bElectronEt = false;
	bTauEt = false;
	bMetEt = false;
	bElectronTauDPhi = false;
	bElectronEta = false;
	bTauEta = false;
	bElectronEcalIso = false;
	bElectronHcalIso = false;
	bElectronTrackIso = false;
	bElectronCharge = false;
	bTauCharge = false;
	bElecTauChargeProd = false;
	bTauProng = false;
	bTauLeadTrk = false;
	bTauEcalIso = false;
	bTauTrackIso = false;
	bTauAntiElectron = false;
	bElectronMetDPhi = false;
	bElectronMetMt = false;
	
	filecombo = 0;
	treecombo = 0;
}

void skimmer::AddChannel(std::string instring, std::string _tree, Double_t lum){
	
	if (rootpath == ""){ // Make sure we have set the filepath for the root files
	cout << "Cannot add channel, input ROOT file path not set \nQuitting" << endl;
		exit(1);
	}
	
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

void skimmer::SetRootPath(std::string _rootpath){
	rootpath = _rootpath;
	cout << "Input ROOT file path set to " << rootpath << endl;
	filecombo = new TFile( (rootpath + "combo.root").c_str(), "RECREATE");
	treecombo = new TTree("combotree","combotree");
	
	
}

void skimmer::GoSkim(){
	
	outtree.push_back(treecombo);

	Double_t ElectronEt = 0;
	Double_t TauEt = 0;
	Double_t MetEt = 0;
	Double_t ElectronTauDPhi = 0;
	Double_t ElectronEta = 0;
	Double_t TauEta = 0;
	Double_t ElectronEcalIso = 0;
	Double_t ElectronHcalIso = 0;
	Double_t ElectronTrackIso = 0;
	Double_t ElectronCharge = 0;
	Double_t TauCharge = 0;
	Double_t ElecTauChargeProd = 0;
	Double_t TauProng = 0;
	Double_t TauLeadTrk = 0;
	Double_t TauEcalIso = 0;
	Double_t TauTrackIso = 0;
	Double_t TauAntiElectron = 0;
	Double_t ElectronMetDPhi = 0;
	Double_t ElectronMetMt = 0;
	Double_t VisibleMass = 0;
	vector<Int_t> type (infile.size(), 0);
	
	//Register Output Branches
	for (Int_t i = 0; i < outtree.size() ; i++) {
		if (bElectronEt) outtree[i]->Branch("ElectronEt", &ElectronEt);
		if (bTauEt) outtree[i]->Branch("TauEt", &TauEt);
		if (bMetEt) outtree[i]->Branch("MetEt", &MetEt);
		if (bElectronTauDPhi) outtree[i]->Branch("ElectronTauDPhi", &ElectronTauDPhi);
		if (bElectronEta) outtree[i]->Branch("ElectronEta", &ElectronEta);
		if (bTauEta) outtree[i]->Branch("TauEta", &TauEta);
		if (bElectronEcalIso) outtree[i]->Branch("ElectronEcalIso", &ElectronEcalIso);
		if (bElectronHcalIso) outtree[i]->Branch("ElectronHcalIso", &ElectronHcalIso);
		if (bElectronTrackIso) outtree[i]->Branch("ElectronTrackIso", &ElectronTrackIso);
		if (bElectronCharge) outtree[i]->Branch("ElectronCharge", &ElectronCharge);
		if (bTauCharge) outtree[i]->Branch("TauCharge", &TauCharge);
		if (bElecTauChargeProd) outtree[i]->Branch("ElecTauChargeProd", &ElecTauChargeProd);
		if (bTauProng) outtree[i]->Branch("TauProng", &TauProng);
		if (bTauLeadTrk) outtree[i]->Branch("TauLeadTrk", &TauLeadTrk);
		if (bTauEcalIso) outtree[i]->Branch("TauEcalIso", &TauEcalIso);
		if (bTauTrackIso) outtree[i]->Branch("TauTrackIso", &TauTrackIso);
		if (bTauAntiElectron) outtree[i]->Branch("TauAntiElectron", &TauAntiElectron);
		if (bElectronMetDPhi) outtree[i]->Branch("ElectronMetDPhi", &ElectronMetDPhi);
		if (bElectronMetMt) outtree[i]->Branch("ElectronMetMt", &ElectronMetMt);
		if (bVisibleMass) outtree[i]->Branch("VisibleMass", &VisibleMass);

		
		for (Int_t k = 0; k < type.size(); k++) {
			outtree[i]->Branch(("type" + Int2String(k+1)).c_str(), &type[k]);
		}
	}
	
	
	//Loop over trees & events
	Int_t eventcounter = 0;
	
	for (Int_t i = 0; i < intree.size() ; i++) {
		cout << "Skimming Channel " << channel[i] << endl;
		beginvec.push_back(eventcounter);

		
		for (Int_t j = 0; j < intree[i]->GetEntries(); j++) {
				Int_t eindex = 0;
				Int_t tindex = 0;
			if (DoPreselection(i, j, eindex, tindex)) {
				
				//Preselection
			
				if (bElectronEt) ElectronEt = GetElectronEt(i, j, eindex);
				if (bTauEt) TauEt = GetTauEt(i, j, tindex);
				if (bMetEt) MetEt = GetMetEt(i ,j);
				if (bElectronTauDPhi) ElectronTauDPhi = GetElectronTauDPhi(i, j, eindex, tindex);
				if (bElectronEta) ElectronEta = GetElectronEta(i, j, eindex);
				if (bTauEta) TauEta = GetTauEta(i, j, tindex);
				if (bElectronEcalIso) ElectronEcalIso = GetElectronEcalIso(i, j, eindex);
				if (bElectronHcalIso) ElectronHcalIso = GetElectronHcalIso(i, j, eindex);
				if (bElectronTrackIso) ElectronTrackIso = GetElectronTrackIso(i, j, eindex);
				if (bElectronCharge) ElectronCharge = GetElectronCharge(i, j, eindex);
				if (bTauCharge) TauCharge = GetTauCharge(i, j, tindex);
				if (bElecTauChargeProd) ElecTauChargeProd = GetElecTauChargeProd(i, j, eindex, tindex);
				if (bTauProng) TauProng = GetTauProng(i, j, tindex);
				if (bTauLeadTrk) TauLeadTrk = GetTauLeadTrk(i, j, tindex);
				if (bTauEcalIso) TauEcalIso = GetTauEcalIso(i, j, tindex);
				if (bTauTrackIso) TauTrackIso = GetTauTrackIso(i, j, tindex);
				if (bTauAntiElectron) TauAntiElectron = GetTauAntiElectron(i, j, tindex);
				if (bElectronMetDPhi) ElectronMetDPhi = GetElectronMetDPhi(i, j, eindex);
				if (bElectronMetMt) ElectronMetMt = GetElectronMetMt(i, j, eindex);
				if (bVisibleMass) VisibleMass = GetVisibleMass(i, j, eindex, tindex);

				eventcounter++;
				
				for (Int_t k = 0; k < type.size(); k++) {
					if (i == k) {type[k] = 1;} else {type[k] = 0;}
				}
				outtree[i]->Fill();
				treecombo->Fill();
			}
		}
		
		endvec.push_back(eventcounter - 1);
	}

	//Write resulting ROOT files
	for (Int_t i = 0; i < outfile.size() ; i++) {
		cout << "Writing " << (rootpath + channel[i] + "_skim.root") << endl;
		outfile[i]->Write();
	}

	cout << "Skimming Complete!" << endl;
}

bool skimmer::DoPreselection(Int_t i, Int_t j, Int_t& _eindex, Int_t& _tindex){

	TClonesArray* electron = 0;
	TClonesArray* tau = 0;
	TLorentzVector* temp_electron = 0;
	TLorentzVector* temp_tau = 0;
	vector<Double_t> * tauprong = 0;
	vector<Double_t> * tauleadtrk = 0;
	vector<Double_t> * tauecaliso = 0;
	vector<Double_t> * tautrackiso = 0;
	vector<Double_t> * tauantielectron = 0;
	TBranch *b_tauprong = intree[i]->GetBranch("tauTracks");
	TBranch *b_tauleadtrk = intree[i]->GetBranch("tauLeadTrk");
	TBranch *b_tauecaliso = intree[i]->GetBranch("tauECALIso");
	TBranch *b_tautrackiso = intree[i]->GetBranch("tauTrackIso");
	TBranch *b_tauantielectron = intree[i]->GetBranch("tauElectron");
	TBranch *b_lv_electron = intree[i]->GetBranch("lv_electron");
	TBranch *b_lv_tau = intree[i]->GetBranch("lv_tau");
	b_lv_electron->SetAddress(&electron);	
	b_lv_tau->SetAddress(&tau);	
	b_tauprong->SetAddress(&tauprong);	
	b_tauleadtrk->SetAddress(&tauleadtrk);	
	b_tauecaliso->SetAddress(&tauecaliso);	
	b_tautrackiso->SetAddress(&tautrackiso);	
	b_tauantielectron->SetAddress(&tauantielectron);	
	b_lv_electron->GetEntry(j);
	b_lv_tau->GetEntry(j);
	b_tauprong->GetEntry(j);
	b_tauleadtrk->GetEntry(j);
	b_tauecaliso->GetEntry(j);
	b_tautrackiso->GetEntry(j);
	b_tauantielectron->GetEntry(j);
	//Make sure we actually have electrons and taus first
	if (electron->GetEntriesFast() == 0) return false;
	if (tau->GetEntriesFast() == 0) return false; 
	
	vector <int> tauresult (tau->GetEntriesFast(), 0);
	int resultcount = 0;
	vector <int> tauindex;
	
	for (int k = 0; k < tauresult.size(); k++) {
		cout << i << "\t" << j << "\t" << k << "\t" << double2int((*tauprong)[k]) << "\t" << double2int((*tauleadtrk)[k]) << "\t" << double2int((*tauecaliso)[k]) << "\t" << double2int((*tautrackiso)[k]) << "\t" << double2int((*tauantielectron)[k]) << endl; 
		
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
		_tindex = tauindex[0];
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
		_tindex = best_t_index;
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
	
	_eindex = best_e_index;

	return true;	
}

Double_t skimmer::GetElectronEt(Int_t i, Int_t j, Int_t index){
	TClonesArray* electron = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("lv_electron");
	b_lv_electron->SetAddress(&electron);	
	b_lv_electron->GetEntry(j);
	return ((dynamic_cast<TLorentzVector*>(electron->At(index)))->Et());
}

Double_t skimmer::GetTauEt(Int_t i, Int_t j, Int_t index){
	TClonesArray* tau = 0;
	TBranch *b_lv_tau = intree[i]->GetBranch("lv_tau");
	b_lv_tau->SetAddress(&tau);	
	b_lv_tau->GetEntry(j);
	return ((dynamic_cast<TLorentzVector*>(tau->At(index)))->Et());
}

Double_t skimmer::GetMetEt(Int_t i, Int_t j){
	TClonesArray* met = 0;
	TBranch *b_lv_met = intree[i]->GetBranch("lv_met");
	b_lv_met->SetAddress(&met);	
	b_lv_met->GetEntry(j);
	return ((dynamic_cast<TLorentzVector*>(met->At(0)))->Et());
}

Double_t skimmer::GetElectronTauDPhi(Int_t i, Int_t j, Int_t eindex, Int_t tindex){
	TClonesArray* electron = 0;
	TClonesArray* tau = 0;
	TLorentzVector* temp_electron = 0;
	TLorentzVector* temp_tau = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("lv_electron");
	TBranch *b_lv_tau = intree[i]->GetBranch("lv_tau");
	b_lv_electron->SetAddress(&electron);	
	b_lv_tau->SetAddress(&tau);	
	b_lv_electron->GetEntry(j);
	b_lv_tau->GetEntry(j);
	
	temp_electron = (dynamic_cast<TLorentzVector*>(electron->At(eindex)));
	temp_tau = (dynamic_cast<TLorentzVector*>(tau->At(tindex)));
	

	return fabs(temp_electron->DeltaPhi(*temp_tau));
}

Double_t skimmer::GetElectronEta(Int_t i, Int_t j, Int_t index){
	TClonesArray* electron = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("lv_electron");
	b_lv_electron->SetAddress(&electron);	
	b_lv_electron->GetEntry(j);
	return ((dynamic_cast<TLorentzVector*>(electron->At(index)))->Eta());
}

Double_t skimmer::GetTauEta(Int_t i, Int_t j, Int_t index){
	TClonesArray* tau = 0;
	TBranch *b_lv_tau = intree[i]->GetBranch("lv_tau");
	b_lv_tau->SetAddress(&tau);	
	b_lv_tau->GetEntry(j);
	return ((dynamic_cast<TLorentzVector*>(tau->At(index)))->Eta());
}

Double_t skimmer::GetElectronEcalIso(Int_t i, Int_t j, Int_t index){
	vector<Double_t> * electron = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("electronEcalIso");
	b_lv_electron->SetAddress(&electron);	
	b_lv_electron->GetEntry(j);
	return (*electron)[index];
}

Double_t skimmer::GetElectronHcalIso(Int_t i, Int_t j, Int_t index){
	vector<Double_t> * electron = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("electronHcalIso");
	b_lv_electron->SetAddress(&electron);	
	b_lv_electron->GetEntry(j);
	return (*electron)[index];
}

Double_t skimmer::GetElectronTrackIso(Int_t i, Int_t j, Int_t index){
	vector<Double_t> * electron = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("electronTrackIso");
	b_lv_electron->SetAddress(&electron);	
	b_lv_electron->GetEntry(j);
	return (*electron)[index];
}

Double_t skimmer::GetElectronCharge(Int_t i, Int_t j, Int_t index){
	vector<Double_t> * electron = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("electronCharge");
	b_lv_electron->SetAddress(&electron);	
	b_lv_electron->GetEntry(j);
	return (*electron)[index];
}

Double_t skimmer::GetTauCharge(Int_t i, Int_t j, Int_t index){
	vector<Double_t> * tau = 0;
	TBranch *b_lv_tau = intree[i]->GetBranch("tauCharge");
	b_lv_tau->SetAddress(&tau);	
	b_lv_tau->GetEntry(j);
	return (*tau)[index];
}

Double_t skimmer::GetElecTauChargeProd(Int_t i, Int_t j, Int_t eindex, Int_t tindex){
	vector<Double_t> * electron = 0;
	vector<Double_t> * tau = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("electronCharge");
	TBranch *b_lv_tau = intree[i]->GetBranch("tauCharge");
	b_lv_electron->SetAddress(&electron);	
	b_lv_tau->SetAddress(&tau);
	b_lv_electron->GetEntry(j);
	b_lv_tau->GetEntry(j);
	
	return (((*tau)[tindex]) * ((*electron)[eindex]));
}

Double_t skimmer::GetTauProng(Int_t i, Int_t j, Int_t index){
	vector<Double_t> * tau = 0;
	TBranch *b_lv_tau = intree[i]->GetBranch("tauTracks");
	b_lv_tau->SetAddress(&tau);	
	b_lv_tau->GetEntry(j);
	return (*tau)[index];
}

Double_t skimmer::GetTauLeadTrk(Int_t i, Int_t j, Int_t index){
	vector<Double_t> * tau = 0;
	TBranch *b_lv_tau = intree[i]->GetBranch("tauLeadTrk");
	b_lv_tau->SetAddress(&tau);	
	b_lv_tau->GetEntry(j);
	return (*tau)[index];
}

Double_t skimmer::GetTauEcalIso(Int_t i, Int_t j, Int_t index){
	vector<Double_t> * tau = 0;
	TBranch *b_lv_tau = intree[i]->GetBranch("tauECALIso");
	b_lv_tau->SetAddress(&tau);	
	b_lv_tau->GetEntry(j);
	return (*tau)[index];
}

Double_t skimmer::GetTauTrackIso(Int_t i, Int_t j, Int_t index){
	vector<Double_t> * tau = 0;
	TBranch *b_lv_tau = intree[i]->GetBranch("tauTrackIso");
	b_lv_tau->SetAddress(&tau);	
	b_lv_tau->GetEntry(j);
	return (*tau)[index];
}

Double_t skimmer::GetTauAntiElectron(Int_t i, Int_t j, Int_t index){
	vector<Double_t> * tau = 0;
	TBranch *b_lv_tau = intree[i]->GetBranch("tauElectron");
	b_lv_tau->SetAddress(&tau);	
	b_lv_tau->GetEntry(j);
	return (*tau)[index];
}

Double_t skimmer::GetElectronMetDPhi(Int_t i, Int_t j, Int_t eindex){
	TClonesArray* electron = 0;
	TClonesArray* met = 0;
	TLorentzVector* temp_electron = 0;
	TLorentzVector* temp_met = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("lv_electron");
	TBranch *b_lv_met = intree[i]->GetBranch("lv_met");
	b_lv_electron->SetAddress(&electron);	
	b_lv_met->SetAddress(&met);	
	b_lv_electron->GetEntry(j);
	b_lv_met->GetEntry(j);
	
	temp_electron = (dynamic_cast<TLorentzVector*>(electron->At(eindex)));
	temp_met = (dynamic_cast<TLorentzVector*>(met->At(0)));
	
	return fabs(temp_electron->DeltaPhi(*temp_met));
}

Double_t skimmer::GetElectronMetMt(Int_t i, Int_t j, Int_t eindex){
	TClonesArray* electron = 0;
	TClonesArray* met = 0;
	TLorentzVector* temp_electron = 0;
	TLorentzVector* temp_met = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("lv_electron");
	TBranch *b_lv_met = intree[i]->GetBranch("lv_met");
	b_lv_electron->SetAddress(&electron);	
	b_lv_met->SetAddress(&met);	
	b_lv_electron->GetEntry(j);
	b_lv_met->GetEntry(j);
	temp_electron = (dynamic_cast<TLorentzVector*>(electron->At(eindex)));
	temp_met = (dynamic_cast<TLorentzVector*>(met->At(0)));
	
	Double_t mt = sqrt(  pow(temp_electron->Et() + sqrt(temp_met->Px() * temp_met->Px() + temp_met->Py() * temp_met->Py()),2)
					   - pow(temp_electron->Px() + temp_met->Px(),2) 
					   - pow(temp_electron->Py() + temp_met->Py(),2) 
					   );
	
	return mt;
}

Double_t skimmer::GetVisibleMass(Int_t i, Int_t j, Int_t eindex, Int_t tindex){
	TClonesArray* electron = 0;
	TClonesArray* tau = 0;
	TLorentzVector* temp_electron = 0;
	TLorentzVector* temp_tau = 0;
	TLorentzVector higgs;
	TBranch *b_lv_electron = intree[i]->GetBranch("lv_electron");
	TBranch *b_lv_tau = intree[i]->GetBranch("lv_tau");
	b_lv_electron->SetAddress(&electron);
	b_lv_tau->SetAddress(&tau);
	b_lv_electron->GetEntry(j);
	b_lv_tau->GetEntry(j);
	
	temp_electron = (dynamic_cast<TLorentzVector*>(electron->At(eindex)));
	temp_tau = (dynamic_cast<TLorentzVector*>(tau->At(tindex)));
	higgs = (*temp_electron) + (*temp_tau);
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


