#ifndef __eventviewer__
#define __eventviewer__

#include <vector>

#include <TTree.h>

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
	
	
    eventviewer();
    TTree *tree;
	
protected:
	void bind() {
		
	}


public:
    eventviewer(TTree *treein){
		tree = treein;
	}

#warning "Testfunction"
	void test(){
		tree->Show(0);
	}
	

};



#endif