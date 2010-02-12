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

class VarJetCount : public Var {
public:
	VarJetCount(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		return (u<TClonesArray>( (*data)["lv_jet"] ))->GetEntriesFast();
	}
};

class VarHighBTag : public Var {
public:
	VarHighBTag(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
        std::vector<Double_t> * btag = u< std::vector<Double_t> >((*data)["jetBTagTrackCountHighEff"]);
        if ( (*indexinfo)["bindex"] == -1  ) {
            return 0.; //Default lowest tab value
        } else {
            return (*btag)[((*indexinfo)["bindex"])];
        }
	}
};

class VarCountValidBTag : public Var {
public:
	VarCountValidBTag(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
        std::vector<Double_t> * btag = u< std::vector<Double_t> >((*data)["jetBTagTrackCountHighEff"]);
        Int_t count = 0;
        for (Int_t i = 0; i < (*btag).size(); ++i) {
            if ( (*btag)[i] > -50. ) count++;
        }
        
        return Double_t(count);
	}
};

class VarHighBTagJetEt : public Var {
public:
	VarHighBTagJetEt(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
        return (uTLV( (*data)["lv_jet"] , (*indexinfo)["bindex"] ))->Et();

	}
};

class VarHiggsMass : public Var {
public:
	VarHiggsMass(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
		
		TLorentzVector* temp_electron	= (uTLV( (*data)["lv_electron"] , (*indexinfo)["eindex"] ));
        TLorentzVector* temp_tau        = (uTLV( (*data)["lv_tau"] , (*indexinfo)["tindex"] ));
        TLorentzVector* temp_met		= (uTLV( (*data)["lv_met"] , 0 ));
		
        Double_t x1 = sin(temp_tau->Theta())*cos(temp_tau->Phi());
		Double_t x2 = sin(temp_electron->Theta())*cos(temp_electron->Phi());
		Double_t y1 = sin(temp_tau->Theta())*sin(temp_tau->Phi());
		Double_t y2 = sin(temp_electron->Theta())*sin(temp_electron->Phi());
		
		Double_t t_ET = ((temp_met->Y())*x2 - (temp_met->X())*y2) / (x2*y1 - x1*y2);
		Double_t t_EL = ((temp_met->Y()) - t_ET*y1) / y2;
        
        if (t_ET > 0. && t_EL > 0.) {
        Double_t higgs_m, higgs_m_2;
        TLorentzVector c_tau0;
        TLorentzVector c_tau1;
        c_tau0.SetE(temp_electron->E() + t_EL);
        c_tau0.SetVect(temp_electron->Vect() + ((temp_electron->Vect()).Unit() * t_EL));
        c_tau1.SetE(temp_tau->E() + t_ET);
        c_tau1.SetVect(temp_tau->Vect() + (temp_tau->Vect().Unit() * t_ET));
        higgs_m_2 = 2. * c_tau0.E() * c_tau1.E() * (1. - cos(c_tau0.Angle(c_tau1.Vect())));
        higgs_m = sqrt(higgs_m_2);
        return higgs_m;	
        } else {
            return 0.;
        }

        
        
        }
};

class VarIntLum : public Var {
public:
	VarIntLum(){};
	virtual Double_t Get(std::map<std::string, brptr> * data, std::map<std::string, Int_t> * indexinfo){
        std::vector<Double_t> * lum = u< std::vector<Double_t> >((*data)["intlum"]);
        return (*lum)[0];
	}
};


#endif