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
    eventviewer(TTree *treein);
	
	void GetEntry(ULong64_t entry){tree->GetTree()->GetEntry(entry, 0);}
	

};



#endif