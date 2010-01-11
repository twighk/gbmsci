#include "skimmer.h"

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
	
	filecombo = 0;
	treecombo = 0;
}

void skimmer::AddChannel(std::string instring, std::string _tree){
	
	if (rootpath == ""){ // Make sure we have set the filepath for the root files
	cout << "Cannot add channel, input ROOT file path not set \nQuitting" << endl;
		exit(1);
	}
	
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

		
		for (Int_t k = 0; k < type.size(); k++) {
			outtree[i]->Branch(("type" + Int2String(k+1)).c_str(), &type[k]);
		}
	}
	
	//Loop over trees & events
	for (Int_t i = 0; i < intree.size() ; i++) {
		cout << "Skimming Channel " << channel[i] << endl;
		for (Int_t j = 0; j < intree[i]->GetEntries(); j++) {
			if (PassCuts(i, j)) {

				//Preselection
				Int_t eindex;
				Int_t tindex;
				DoPreselection(i, j, eindex, tindex);
				
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

				for (Int_t k = 0; k < type.size(); k++) {
					if (i == k) {type[k] = 1;} else {type[k] = 0;}
				}
				outtree[i]->Fill();
				treecombo->Fill();
			}
		}
	}

	//Write resulting ROOT files
	for (Int_t i = 0; i < outfile.size() ; i++) {
		cout << "Writing " << (rootpath + channel[i] + "_skim.root") << endl;
		outfile[i]->Write();
	}
	filecombo->Write();

	cout << "Skimming Complete!" << endl;
}

bool skimmer::PassCuts(Int_t i, Int_t j){
	TClonesArray* electron = 0;
	TClonesArray* tau = 0;
	TBranch *b_lv_electron = intree[i]->GetBranch("lv_electron");
	TBranch *b_lv_tau = intree[i]->GetBranch("lv_tau");

	b_lv_electron->SetAddress(&electron);	
	b_lv_tau->SetAddress(&tau);	
	b_lv_electron->GetEntry(j);
	b_lv_tau->GetEntry(j);

if (electron->GetEntriesFast() > 0 && tau->GetEntriesFast() > 0) {
		return true;	
	} else {
		return false;
	}
	
}

bool skimmer::DoPreselection(Int_t i, Int_t j, Int_t& _eindex, Int_t& _tindex){

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
	
	Double_t next_e_et;
	Int_t best_e_index = 0;
	Double_t next_t_et;
	Int_t best_t_index = 0;
	
	//Pick the highest Et tau
	
	for (int k = 1; k < tau->GetEntriesFast(); k++) {
		temp_tau = (dynamic_cast<TLorentzVector*>(tau->At(k)));
		next_t_et = temp_tau->Et();
		if (next_t_et > (dynamic_cast<TLorentzVector*>(tau->At(best_t_index)))->Et()) {
			best_t_index = k;
		}
	}
	
	for (int k = 1; k < electron->GetEntriesFast(); k++) {
		temp_electron = (dynamic_cast<TLorentzVector*>(electron->At(k)));
		next_e_et = temp_electron->Et();
		if (next_e_et > (dynamic_cast<TLorentzVector*>(electron->At(best_e_index)))->Et()) {
			best_e_index = k;
		}
	}
	
	_eindex = best_e_index;
	_tindex = best_t_index;

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

string skimmer::Int2String(Int_t num){
	stringstream out;
	out << num;
	return out.str();
}

