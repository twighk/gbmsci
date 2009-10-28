#ifndef __eventviewer__
#define __eventviewer__

#include <vector>
#include <iostream>

#include <TTree.h>
#include <TBranch.h>
#include <TClonesArray.h> // Nessary for SetBranchAddress
#include <TLorentzVector.h>
#include <Rtypes.h> // for Long_64 though not necessary if long_64 spelt with `L'

class eventviewer{
private:
//Temparary storage of leafs : Start
	Float_t				numElectrons,
						numJets,
						numMuons, 
						numTaus,
						triggerHLTIsoEle15,
						triggerHLTIsoMu11,
						triggerHLTMu15;
	std::vector<double>	*electronCharge,
						*electronCombinedIso,
						*electronESuperOverP,
						*electronEcalIso,
						*electronFBrem,
						*electronHOverE,
						*electronHcalIso,
						*electronSigmaIEtaIEta,
						*electronSuperEta,
						*electronTrackIso,
						*jetBTagCombinedSecondary,
						*jetBTagSimpleSecondary,
						*jetBTagTrackCountHighEff,
						*jetBTagTrackCountHighPurity,
						*muonCaloCompatibility,
						*muonCharge,
						*muonEcalIso,
						*muonHcalIso,
						*muonSegCompatibility,
						*muonTrackIso,
						*tauCharge,
						*tauECALIso,
						*tauElectron,
						*tauLeadTrk,
						*tauMuon,
						*tauTrackIso,
						*tauTracks;
	TClonesArray		*lv_electron,
						*lv_genbjet,
						*lv_genelectron,
						*lv_genmet,
						*lv_genmuon,
						*lv_gentau,
						*lv_gentaujet,
						*lv_jet,
						*lv_met,
						*lv_muon,
						*lv_pfmet,
						*lv_tau,
						*lv_tcmet;
//Temparary storage of leafs : End
	
	
	// List of branches
	TBranch			*b_numElectrons,
					*b_numJets,
					*b_numMuons,   
					*b_numTaus,   
					*b_triggerHLTIsoEle15,   
					*b_triggerHLTIsoMu11,   
					*b_triggerHLTMu15,   
					*b_electronCharge,  
					*b_electronCombinedIso,  
					*b_electronESuperOverP,   
					*b_electronEcalIso,   
					*b_electronFBrem,   
					*b_electronHOverE,   
					*b_electronHcalIso,   
					*b_electronSigmaIEtaIEta,   
					*b_electronSuperEta,   
					*b_electronTrackIso,   
					*b_jetBTagCombinedSecondary,   
					*b_jetBTagSimpleSecondary,   
					*b_jetBTagTrackCountHighEff,   
					*b_jetBTagTrackCountHighPurity,   
					*b_muonCaloCompatibility,   
					*b_muonCharge,   
					*b_muonEcalIso,   
					*b_muonHcalIso,   
					*b_muonSegCompatibility,   
					*b_muonTrackIso,   
					*b_tauCharge,   
					*b_tauECALIso,   
					*b_tauElectron,   
					*b_tauLeadTrk,   
					*b_tauMuon,   
					*b_tauTrackIso,   
					*b_tauTracks,   
					*b_lv_electron,   
					*b_lv_genbjet,   
					*b_lv_genelectron,   
					*b_lv_genmet,  
					*b_lv_genmuon,   
					*b_lv_gentau,  
					*b_lv_gentaujet,   
					*b_lv_jet,   
					*b_lv_met,   
					*b_lv_muon,   
					*b_lv_pfmet,   
					*b_lv_tau,   
					*b_lv_tcmet;   
	
    eventviewer();
    TTree *tree;
	
protected:
	void BindBranches();


public:
	Float_t * GetnumElectrons() { return &numElectrons; }
	Float_t * GetnumJets() { return &numJets; }
	Float_t * GetnumMuons() { return &numMuons ; }
	Float_t * GetnumTaus() { return &numTaus; }
	Float_t * GettriggerHLTIsoEle15() { return &triggerHLTIsoEle15; }
	Float_t * GettriggerHLTIsoMu11() { return &triggerHLTIsoMu11; }
	Float_t * GettriggerHLTMu15() { return &triggerHLTMu15; }
	
	std::vector<double> * GetelectronCharge() { return electronCharge;}
	std::vector<double> * GetelectronCombinedIso() { return electronCombinedIso;}
	std::vector<double> * GetelectronESuperOverP() { return electronESuperOverP;}
	std::vector<double> * GetelectronEcalIso() { return electronEcalIso;}
	std::vector<double> * GetelectronFBrem() { return electronFBrem;}
	std::vector<double> * GetelectronHOverE() { return electronHOverE;}
	std::vector<double> * GetelectronHcalIso() { return electronHcalIso;}
	std::vector<double> * GetelectronSigmaIEtaIEta() { return electronSigmaIEtaIEta;}
	std::vector<double> * GetelectronSuperEta() { return electronSuperEta;}
	std::vector<double> * GetelectronTrackIso() { return electronTrackIso;}
	std::vector<double> * GetjetBTagCombinedSecondary() { return jetBTagCombinedSecondary;}
	std::vector<double> * GetjetBTagSimpleSecondary() { return jetBTagSimpleSecondary;}
	std::vector<double> * GetjetBTagTrackCountHighEff() { return jetBTagTrackCountHighEff;}
	std::vector<double> * GetjetBTagTrackCountHighPurity() { return jetBTagTrackCountHighPurity;}
	std::vector<double> * GetmuonCaloCompatibility() { return muonCaloCompatibility;}
	std::vector<double> * GetmuonCharge() { return muonCharge;}
	std::vector<double> * GetmuonEcalIso() { return muonEcalIso;}
	std::vector<double> * GetmuonHcalIso() { return muonHcalIso;}
	std::vector<double> * GetmuonSegCompatibility() { return muonSegCompatibility;}
	std::vector<double> * GetmuonTrackIso() { return muonTrackIso;}
	std::vector<double> * GettauCharge() { return tauCharge;}
	std::vector<double> * GettauECALIso() { return tauECALIso;}
	std::vector<double> * GettauElectron() { return tauElectron;}
	std::vector<double> * GettauLeadTrk() { return tauLeadTrk;}
	std::vector<double> * GettauMuon() { return tauMuon;}
	std::vector<double> * GettauTrackIso() { return tauTrackIso;}
	std::vector<double> * GettauTracks() { return tauTracks;}
	
	TClonesArray * Getlv_electron() { return lv_electron;}
	TClonesArray * Getlv_genbjet() { return lv_genbjet;}
	TClonesArray * Getlv_genelectron() { return lv_genelectron;}
	TClonesArray * Getlv_genmet() { return lv_genmet;}
	TClonesArray * Getlv_genmuon() { return lv_genmuon;}
	TClonesArray * Getlv_gentau() { return lv_gentau;}
	TClonesArray * Getlv_gentaujet() { return lv_gentaujet;}
	TClonesArray * Getlv_jet() { return lv_jet;}
	TClonesArray * Getlv_met() { return lv_met;}
	TClonesArray * Getlv_muon() { return lv_muon;}
	TClonesArray * Getlv_pfmet() { return lv_pfmet;}
	TClonesArray * Getlv_tau() { return lv_tau;}
	TClonesArray * Getlv_tcmet() { return lv_tcmet;}
	
	
	
	eventviewer(TTree *treein);
	void GetEntry(ULong64_t entry){tree->GetTree()->GetEntry(entry, 0);}
	void Show();
	void ShowTClonesArray(std::string, TClonesArray *);
	void ShowVectorDouble(std::string, std::vector<double> *);
	

};



#endif