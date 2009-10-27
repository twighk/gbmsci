#include "eventviewer.h"

using namespace std;

eventviewer::eventviewer(TTree *_tree){
	tree = _tree;
	
	// make em null
	electronCharge = NULL;
	electronCombinedIso = NULL;
	electronESuperOverP = NULL;
	electronEcalIso = NULL;
	electronFBrem = NULL;
	electronHOverE = NULL;
	electronHcalIso = NULL;
	electronSigmaIEtaIEta = NULL;
	electronSuperEta = NULL;
	electronTrackIso = NULL;
	jetBTagCombinedSecondary = NULL;
	jetBTagSimpleSecondary = NULL;
	jetBTagTrackCountHighEff = NULL;
	jetBTagTrackCountHighPurity = NULL;
	muonCaloCompatibility = NULL;
	muonCharge = NULL;
	muonEcalIso = NULL;
	muonHcalIso = NULL;
	muonSegCompatibility = NULL;
	muonTrackIso = NULL;
	tauCharge = NULL;
	tauECALIso = NULL;
	tauElectron = NULL;
	tauLeadTrk = NULL;
	tauMuon = NULL;
	tauTrackIso = NULL;
	tauTracks= NULL;
	lv_electron = NULL;
	lv_genbjet = NULL;
	lv_genelectron = NULL;
	lv_genmet = NULL;
	lv_genmuon = NULL;
	lv_gentau = NULL;
	lv_gentaujet = NULL;
	lv_jet = NULL;
	lv_met = NULL;
	lv_muon = NULL;
	lv_pfmet = NULL;
	lv_tau = NULL;
	lv_tcmet= NULL;
	
	
	BindBranches();
	
}

void eventviewer::BindBranches(){
	tree->SetBranchAddress("numElectrons", &numElectrons, &b_numElectrons);
	tree->SetBranchAddress("numJets", &numJets, &b_numJets);
	tree->SetBranchAddress("numMuons", &numMuons, &b_numMuons);
	tree->SetBranchAddress("numTaus", &numTaus, &b_numTaus);
	tree->SetBranchAddress("triggerHLTIsoEle15", &triggerHLTIsoEle15, &b_triggerHLTIsoEle15);
	tree->SetBranchAddress("triggerHLTIsoMu11", &triggerHLTIsoMu11, &b_triggerHLTIsoMu11);
	tree->SetBranchAddress("triggerHLTMu15", &triggerHLTMu15, &b_triggerHLTMu15);
	tree->SetBranchAddress("electronCharge", &electronCharge, &b_electronCharge);
	tree->SetBranchAddress("electronCombinedIso", &electronCombinedIso, &b_electronCombinedIso);
	tree->SetBranchAddress("electronESuperOverP", &electronESuperOverP, &b_electronESuperOverP);
	tree->SetBranchAddress("electronEcalIso", &electronEcalIso, &b_electronEcalIso);
	tree->SetBranchAddress("electronFBrem", &electronFBrem, &b_electronFBrem);
	tree->SetBranchAddress("electronHOverE", &electronHOverE, &b_electronHOverE);
	tree->SetBranchAddress("electronHcalIso", &electronHcalIso, &b_electronHcalIso);
	tree->SetBranchAddress("electronSigmaIEtaIEta", &electronSigmaIEtaIEta, &b_electronSigmaIEtaIEta);
	tree->SetBranchAddress("electronSuperEta", &electronSuperEta, &b_electronSuperEta);
	tree->SetBranchAddress("electronTrackIso", &electronTrackIso, &b_electronTrackIso);
	tree->SetBranchAddress("jetBTagCombinedSecondary", &jetBTagCombinedSecondary, &b_jetBTagCombinedSecondary);
	tree->SetBranchAddress("jetBTagSimpleSecondary", &jetBTagSimpleSecondary, &b_jetBTagSimpleSecondary);
	tree->SetBranchAddress("jetBTagTrackCountHighEff", &jetBTagTrackCountHighEff, &b_jetBTagTrackCountHighEff);
	tree->SetBranchAddress("jetBTagTrackCountHighPurity", &jetBTagTrackCountHighPurity, &b_jetBTagTrackCountHighPurity);
	tree->SetBranchAddress("muonCaloCompatibility", &muonCaloCompatibility, &b_muonCaloCompatibility);
	tree->SetBranchAddress("muonCharge", &muonCharge, &b_muonCharge);
	tree->SetBranchAddress("muonEcalIso", &muonEcalIso, &b_muonEcalIso);
	tree->SetBranchAddress("muonHcalIso", &muonHcalIso, &b_muonHcalIso);
	tree->SetBranchAddress("muonSegCompatibility", &muonSegCompatibility, &b_muonSegCompatibility);
	tree->SetBranchAddress("muonTrackIso", &muonTrackIso, &b_muonTrackIso);
	tree->SetBranchAddress("tauCharge", &tauCharge, &b_tauCharge);
	tree->SetBranchAddress("tauECALIso", &tauECALIso, &b_tauECALIso);
	tree->SetBranchAddress("tauElectron", &tauElectron, &b_tauElectron);
	tree->SetBranchAddress("tauLeadTrk", &tauLeadTrk, &b_tauLeadTrk);
	tree->SetBranchAddress("tauMuon", &tauMuon, &b_tauMuon);
	tree->SetBranchAddress("tauTrackIso", &tauTrackIso, &b_tauTrackIso);
	tree->SetBranchAddress("tauTracks", &tauTracks, &b_tauTracks);
	tree->SetBranchAddress("lv_electron", &lv_electron, &b_lv_electron);
	tree->SetBranchAddress("lv_genbjet", &lv_genbjet, &b_lv_genbjet);
	tree->SetBranchAddress("lv_genelectron", &lv_genelectron, &b_lv_genelectron);
	tree->SetBranchAddress("lv_genmet", &lv_genmet, &b_lv_genmet);
	tree->SetBranchAddress("lv_genmuon", &lv_genmuon, &b_lv_genmuon);
	tree->SetBranchAddress("lv_gentau", &lv_gentau, &b_lv_gentau);
	tree->SetBranchAddress("lv_gentaujet", &lv_gentaujet, &b_lv_gentaujet);
	tree->SetBranchAddress("lv_jet", &lv_jet, &b_lv_jet);
	tree->SetBranchAddress("lv_met", &lv_met, &b_lv_met);
	tree->SetBranchAddress("lv_muon", &lv_muon, &b_lv_muon);
	tree->SetBranchAddress("lv_pfmet", &lv_pfmet, &b_lv_pfmet);
	tree->SetBranchAddress("lv_tau", &lv_tau, &b_lv_tau);
	tree->SetBranchAddress("lv_tcmet", &lv_tcmet, &b_lv_tcmet);
}

void eventviewer::Show(){
	cout << "Electrons: " << Getlv_electron()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_electron()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_electron()->At(i))->E()
				  << ","  << dynamic_cast<TLorentzVector*>(Getlv_electron()->At(i))->Px()
				  << ","  << dynamic_cast<TLorentzVector*>(Getlv_electron()->At(i))->Py()
		          << ","  << dynamic_cast<TLorentzVector*>(Getlv_electron()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_electron()->At(i))->Et() << endl;
	}
		
	cout << "Muons: " << Getlv_muon()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_muon()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_muon()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_muon()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_muon()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_muon()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_muon()->At(i))->Et() << endl;
	}
	
	cout << "Jets: " << Getlv_jet()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_jet()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_jet()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_jet()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_jet()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_jet()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_jet()->At(i))->Et() << endl;
	}
		
	cout << "Taus: " << Getlv_tau()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_tau()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_tau()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_tau()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_tau()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_tau()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_tau()->At(i))->Et() << endl;
	}
	
	cout << "MET: " << Getlv_met()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_met()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_met()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_met()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_met()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_met()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_met()->At(i))->Et() << endl;
	}
	
	cout << "pfMET: " << Getlv_pfmet()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_pfmet()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_pfmet()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_pfmet()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_pfmet()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_pfmet()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_pfmet()->At(i))->Et() << endl;
	}
	
	cout << "tcMET: " << Getlv_tcmet()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_tcmet()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_tcmet()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_tcmet()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_tcmet()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_tcmet()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_tcmet()->At(i))->Et() << endl;
	}
	
	cout << "GenElectron: " << Getlv_genelectron()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_genelectron()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_genelectron()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genelectron()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genelectron()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genelectron()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_genelectron()->At(i))->Et() << endl;
	}
	
	cout << "GenMuon: " << Getlv_genmuon()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_genmuon()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_genmuon()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genmuon()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genmuon()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genmuon()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_genmuon()->At(i))->Et() << endl;
	}
	
	cout << "GenTauJet: " << Getlv_gentaujet()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_gentaujet()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_gentaujet()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_gentaujet()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_gentaujet()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_gentaujet()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_gentaujet()->At(i))->Et() << endl;
	}
	
	cout << "GenTau: " << Getlv_gentau()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_gentau()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_gentau()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_gentau()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_gentau()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_gentau()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_gentau()->At(i))->Et() << endl;
	}
	
	cout << "GenMET: " << Getlv_genmet()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_genmet()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_genmet()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genmet()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genmet()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genmet()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_genmet()->At(i))->Et() << endl;
	}
	
	cout << "Genbjet: " << Getlv_genbjet()->GetEntriesFast() << endl;
	for (Int_t i=0; i<Getlv_genbjet()->GetEntriesFast(); i++){
		cout << i << " (" << dynamic_cast<TLorentzVector*>(Getlv_genbjet()->At(i))->E()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genbjet()->At(i))->Px()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genbjet()->At(i))->Py()
		<< ","  << dynamic_cast<TLorentzVector*>(Getlv_genbjet()->At(i))->Pz()
		<< ") Et = " << dynamic_cast<TLorentzVector*>(Getlv_genbjet()->At(i))->Et() << endl;
	}

}