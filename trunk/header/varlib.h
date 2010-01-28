#ifndef __varlib__
#define __varlib__

#include <string>
#include <map>
#include <TClonesArray.h>
#include <TLorentzVector.h>
#include "../dict/dict.h"
#include "../header/brptr.h"

using namespace dict;

class Var {
public:
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo) = 0;
};

class VarTauEt : public Var {
public:
	VarTauEt(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		return (uTLV( (*data)["lv_tau"] , (*indexinfo)["tindex"] ))->Et();
	}
};

class VarElectronEt : public Var {
public:
	VarElectronEt(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		return (uTLV( (*data)["lv_electron"] , (*indexinfo)["eindex"] ))->Et();
	}
};

class VarMetEt : public Var {
public:
	VarMetEt(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		return (uTLV( (*data)["lv_met"] , 0 ))->Et();
	}
};

class VarElectronTauDPhi : public Var {
public:
	VarElectronTauDPhi(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		
		TLorentzVector* temp_electron	= (uTLV( (*data)["lv_electron"] , (*indexinfo)["eindex"] ));
		TLorentzVector* temp_tau		= (uTLV( (*data)["lv_tau"] , (*indexinfo)["tindex"] ));
		return fabs(temp_electron->DeltaPhi(*temp_tau));
	}
};

class VarTauEta : public Var {
public:
	VarTauEta(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		return (uTLV( (*data)["lv_tau"] , (*indexinfo)["tindex"] ))->Eta();
	}
};

class VarElectronEta : public Var {
public:
	VarElectronEta(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		return (uTLV( (*data)["lv_electron"] , (*indexinfo)["eindex"] ))->Eta();
	}
};

class VarElectronEcalIso : public Var {
public:
	VarElectronEcalIso(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * electron = u< std::vector<Double_t> >((*data)["electronEcalIso"]);
		return (*electron)[((*indexinfo)["eindex"])];
	}
};

class VarElectronHcalIso : public Var {
public:
	VarElectronHcalIso(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * electron = u< std::vector<Double_t> >((*data)["electronHcalIso"]);
		return (*electron)[((*indexinfo)["eindex"])];
	}
};

class VarElectronTrackIso : public Var {
public:
	VarElectronTrackIso(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * electron = u< std::vector<Double_t> >((*data)["electronTrackIso"]);
		return (*electron)[((*indexinfo)["eindex"])];
	}
};

class VarElectronCharge : public Var {
public:
	VarElectronCharge(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * electron = u< std::vector<Double_t> >((*data)["electronCharge"]);
		return (*electron)[((*indexinfo)["eindex"])];
	}
};

class VarTauCharge : public Var {
public:
	VarTauCharge(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * tau = u< std::vector<Double_t> >((*data)["tauCharge"]);
		return (*tau)[((*indexinfo)["tindex"])];
	}
};

class VarElecTauChargeProd : public Var {
public:
	VarElecTauChargeProd(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * tau			= u< std::vector<Double_t> >((*data)["tauCharge"]);
		std::vector<Double_t> * electron	= u< std::vector<Double_t> >((*data)["electronCharge"]);

		return( ((*tau)[((*indexinfo)["tindex"])])  *  ((*electron)[((*indexinfo)["eindex"])])  );
	}
};

class VarTauProng : public Var {
public:
	VarTauProng(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * tau = u< std::vector<Double_t> >((*data)["tauTracks"]);
		return (*tau)[((*indexinfo)["tindex"])];
	}
};

class VarTauLeadTrk : public Var {
public:
	VarTauLeadTrk(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * tau = u< std::vector<Double_t> >((*data)["tauLeadTrk"]);
		return (*tau)[((*indexinfo)["tindex"])];
	}
};

class VarTauEcalIso : public Var {
public:
	VarTauEcalIso(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * tau = u< std::vector<Double_t> >((*data)["tauECALIso"]);
		return (*tau)[((*indexinfo)["tindex"])];
	}
};

class VarTauTrackIso : public Var {
public:
	VarTauTrackIso(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * tau = u< std::vector<Double_t> >((*data)["tauTrackIso"]);
		return (*tau)[((*indexinfo)["tindex"])];
	}
};

class VarTauAntiElectron : public Var {
public:
	VarTauAntiElectron(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		std::vector<Double_t> * tau = u< std::vector<Double_t> >((*data)["tauElectron"]);
		return (*tau)[((*indexinfo)["tindex"])];
	}
};

class VarElectronMetDPhi : public Var {
public:
	VarElectronMetDPhi(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		
		TLorentzVector* temp_electron	= (uTLV( (*data)["lv_electron"] , (*indexinfo)["eindex"] ));
		TLorentzVector* temp_met		= (uTLV( (*data)["lv_met"] , 0 ));
		return fabs(temp_electron->DeltaPhi(*temp_met));
	}
};

class VarElectronMetMt : public Var {
public:
	VarElectronMetMt(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		
		TLorentzVector* temp_electron	= (uTLV( (*data)["lv_electron"] , (*indexinfo)["eindex"] ));
		TLorentzVector* temp_met		= (uTLV( (*data)["lv_met"] , 0 ));
		Double_t mt = sqrt(  pow(temp_electron->Et() + sqrt(temp_met->Px() * temp_met->Px() + temp_met->Py() * temp_met->Py()),2)
						   - pow(temp_electron->Px() + temp_met->Px(),2) 
						   - pow(temp_electron->Py() + temp_met->Py(),2) 
							   );
		return mt;
	}
};

class VarVisibleMass : public Var {
public:
	VarVisibleMass(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		
		TLorentzVector* temp_electron	= (uTLV( (*data)["lv_electron"] , (*indexinfo)["eindex"] ));
		TLorentzVector* temp_tau		= (uTLV( (*data)["lv_tau"] , (*indexinfo)["tindex"] ));
		TLorentzVector higgs;
		higgs = (*temp_electron) + (*temp_tau);
		return higgs.M();
	}
};

class VarTauPhi : public Var {
public:
	VarTauPhi(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		return (uTLV( (*data)["lv_tau"] , (*indexinfo)["tindex"] ))->Phi();
	}
};

class VarElectronPhi : public Var {
public:
	VarElectronPhi(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		return (uTLV( (*data)["lv_electron"] , (*indexinfo)["eindex"] ))->Phi();
	}
};

class VarMetPhi : public Var {
public:
	VarMetPhi(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		return (uTLV( (*data)["lv_met"] , 0 ))->Phi();
	}
};

class VarElectronTauDR : public Var {
public:
	VarElectronTauDR(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		
		TLorentzVector* temp_electron	= (uTLV( (*data)["lv_electron"] , (*indexinfo)["eindex"] ));
		TLorentzVector* temp_tau		= (uTLV( (*data)["lv_tau"] , (*indexinfo)["tindex"] ));
		return (temp_electron->DeltaR(*temp_tau));
	}
};



#endif