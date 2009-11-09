#ifndef __cuts__
#define __cuts__

#include <string>
#include <vector>
#include <cmath>
#include "../eventviewer/eventviewer.h"
#include "matrix.h"
#include "float2int.h"
#include <TClonesArray.h>
#include <TLorentzVector.h>

class cuts;
typedef std::vector<cuts*> cutvec;

class cuts{
private:
	Int_t position_in_list;
public:
	cuts(cutvec &cutlist){
		cutlist.push_back(this);
		position_in_list = (cutlist.size() - 1);
	}

	Int_t pos(){
		return position_in_list;
	}
		
	virtual std::string name() = 0;
	virtual matrix <Int_t> cut(eventviewer&) = 0;
	
};

class cutelectronEcalIso : public cuts {
private:
	Float_t cutbarrel, 
			cutendcap;
	
public:
	virtual std::string name(){return "electronEcalIso";}
	
	cutelectronEcalIso(cutvec & cutlist, Float_t _cutbarrel, Float_t _cutendcap):cuts(cutlist){
		cutbarrel = _cutbarrel;
		cutendcap = _cutendcap;
	}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.GetelectronEcalIso()).size()); //NEW
		
		for (Int_t i = 0; i < (*evt.GetelectronEcalIso()).size(); i++) {	
			Float_t eta = (*evt.GetelectronSuperEta())[i] ;
			if ( fabs(eta) < 1.560){ 
				if ( ( *evt.GetelectronEcalIso() )[i] < cutbarrel ) {
					result(i) = 1;
				} else {
					result(i) = 0;
				}
			} else { /* endcaps*/
				if ( ( *evt.GetelectronEcalIso() )[i] < cutendcap ) {
					result(i) = 1;
				} else {
					result(i) = 0;
				}

			}
		}
		return result;
	}
};

class cutelectronTrackIso : public cuts {
private:
	Float_t cutbarrel, 
			cutendcap;
	
public:
	virtual std::string name(){return "electronTrackIso";}
	
	cutelectronTrackIso(cutvec & cutlist, Float_t _cutbarrel, Float_t _cutendcap):cuts(cutlist){
		cutbarrel = _cutbarrel;
		cutendcap = _cutendcap;
	}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.GetelectronTrackIso()).size()); //NEW

		for (Int_t i = 0; i < (*evt.GetelectronTrackIso()).size(); i++) {	
			Float_t eta = (*evt.GetelectronSuperEta())[i] ;
			if ( fabs(eta) < 1.560){ 
				if ( ( *evt.GetelectronTrackIso() )[i] < cutbarrel ) {
					result(i) = 1;
				} else {
					result(i) = 0;
				}
			} else { /* endcaps*/
				if ( ( *evt.GetelectronTrackIso() )[i] < cutendcap ) {
					result(i) = 1;
				} else {
					result(i) = 0;
				}
			}
		}
		return result;
	}
};

class cutelectronHcalIso : public cuts {
private:
	Float_t cutbarrel, 
	cutendcap;
	
public:
	virtual std::string name(){return "electronHcalIso";}
	
	cutelectronHcalIso(cutvec & cutlist, Float_t _cutbarrel, Float_t _cutendcap):cuts(cutlist){
		cutbarrel = _cutbarrel;
		cutendcap = _cutendcap;
	}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.GetelectronHcalIso()).size()); //NEW

		for (Int_t i = 0; i < (*evt.GetelectronHcalIso()).size(); i++) {	
			Float_t eta = (*evt.GetelectronSuperEta())[i] ;
			if ( fabs(eta) < 1.560){ 
				if ( ( *evt.GetelectronHcalIso() )[i] < cutbarrel ) {
					result(i) = 1;
				} else {
					result(i) = 0;
				}
			} else { /* endcaps*/
				if ( ( *evt.GetelectronHcalIso() )[i] < cutendcap ) {
					result(i) = 1;
				} else {
					result(i) = 0;
				}
			}
		}
		return result;
	}
};

class cuttauTracks : public cuts {
private:
	
public:
	virtual std::string name(){return "tauTracks";}
	
	cuttauTracks(cutvec & cutlist):cuts(cutlist){}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.GettauTracks()).size()); //NEW

		for (Int_t i = 0; i < (*evt.GettauTracks()).size(); i++) {	
			Int_t numoftrack = float2int((*evt.GettauTracks())[i]);
			//std::cout << numoftrack << std::endl;
			if ((numoftrack == 1) || (numoftrack == 3)) {
				result(i) = 1;
			} else {
				result(i) = 0;
			}
		}
		return result;
	}
};

class cuttauLeadTrk : public cuts {
private:
	
public:
	virtual std::string name(){return "tauLeadTrk";}
	
	cuttauLeadTrk(cutvec & cutlist):cuts(cutlist){}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.GettauLeadTrk()).size()); //NEW

		for (Int_t i = 0; i < (*evt.GettauLeadTrk()).size(); i++) {	
			Int_t leadtrack = float2int((*evt.GettauLeadTrk())[i]);
			//std::cout << numoftrack << std::endl;
			if (leadtrack == 1) {
				result(i) = 1;;
			} else {
				result(i) = 0;
			}
		}
		return result;
	}
};

class cuttauECALIso : public cuts {
private:
	
public:
	virtual std::string name(){return "tauECALIso";}
	
	cuttauECALIso(cutvec & cutlist):cuts(cutlist){}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.GettauECALIso()).size()); //NEW
		
		for (Int_t i = 0; i < (*evt.GettauECALIso()).size(); i++) {	
			Int_t ecaliso = float2int((*evt.GettauECALIso())[i]);
			//std::cout << numoftrack << std::endl;
			if (ecaliso == 1) {
				result(i) = 1;;
			} else {
				result(i) = 0;
			}
		}
		return result;
	}
};

class cuttauTrackIso : public cuts {
private:
	
public:
	virtual std::string name(){return "tauTrackIso";}
	
	cuttauTrackIso(cutvec & cutlist):cuts(cutlist){}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.GettauTrackIso()).size()); //NEW
		
		for (Int_t i = 0; i < (*evt.GettauTrackIso()).size(); i++) {	
			Int_t ecaliso = float2int((*evt.GettauTrackIso())[i]);
			//std::cout << numoftrack << std::endl;
			if (ecaliso == 1) {
				result(i) = 1;;
			} else {
				result(i) = 0;
			}
		}
		return result;
	}
};

class cuttauElectron : public cuts {
private:
	
public:
	virtual std::string name(){return "tauElectron";}
	
	cuttauElectron(cutvec & cutlist):cuts(cutlist){}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.GettauElectron()).size()); //NEW
		
		for (Int_t i = 0; i < (*evt.GettauElectron()).size(); i++) {	
			Int_t ecaliso = float2int((*evt.GettauElectron())[i]);
			//std::cout << numoftrack << std::endl;
			if (ecaliso == 1) {
				result(i) = 1;;
			} else {
				result(i) = 0;
			}
		}
		return result;
	}
};


class cutoppositecharge : public cuts {
private:
	
public:
	virtual std::string name(){return "oppositecharge";}
	
	cutoppositecharge(cutvec & cutlist):cuts(cutlist){}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.GetelectronCharge()).size(), (*evt.GettauCharge()).size()); //NEW
		
		for (int i = 0; i != (*evt.GetelectronCharge()).size(); i++) {
			Int_t elec = float2int((*evt.GetelectronCharge())[i]);
			for (int j = 0; j != (*evt.GettauCharge()).size(); j++) {
				Int_t tau = float2int((*evt.GettauCharge())[j]);
				if(elec * tau == -1) {
					result(i,j) = 1;
				} else {
					result(i,j) = 0; 
				};
			}
		}
		return result;
	}
	

};

class cutdphielectau : public cuts {
private:
	Float_t anginrad;

public:
	virtual std::string name(){return "dphielectau";}
	
	cutdphielectau(cutvec & cutlist, Float_t _anginrad):cuts(cutlist){anginrad = _anginrad;}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.Getlv_electron()).GetSize(), (*evt.Getlv_tau()).GetSize()); //get num of elecs and taus
		
		for (int i = 0; i != (*evt.Getlv_electron()).GetSize(); i++) {
			for (int j = 0; j != (*evt.Getlv_tau()).GetSize(); j++) {
				TLorentzVector* elecvec = dynamic_cast <TLorentzVector*> ((*evt.Getlv_electron()).At(i));
				TLorentzVector* tauvec  = dynamic_cast <TLorentzVector*> ((*evt.Getlv_tau()).At(j));
				
				TVector3 electmp(elecvec->Px(), elecvec->Py(), 0), 
						 tautmp(tauvec->Px(), tauvec->Py(), 0);
				
				float_t dphi = electmp.Angle(tautmp);
				
				
				//float_t dphi = elecvec->DeltaPhi((*tauvec));
				//dphi = fabs(dphi);
				//std::cout << dphi << std::endl;
				
				if(dphi > anginrad ) {
					result(i,j) = 1;
				} else {
					result(i,j) = 0; 
				}
			}
		}
		return result;
	}
};

class cutdphielecmet : public cuts {
private:
	Float_t anginrad;
	
public:
	virtual std::string name(){return "dphielecmet";}
	
	cutdphielecmet(cutvec & cutlist, Float_t _anginrad):cuts(cutlist){anginrad = _anginrad;}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.Getlv_electron()).GetSize(), (*evt.Getlv_tau()).GetSize()); //get num of elecs and taus
		
		for (int i = 0; i != (*evt.Getlv_electron()).GetSize(); i++) {
			for (int j = 0; j != (*evt.Getlv_tau()).GetSize(); j++) {
				TLorentzVector* elecvec = dynamic_cast <TLorentzVector*> ((*evt.Getlv_electron()).At(i));
				TLorentzVector* metvec  = dynamic_cast <TLorentzVector*> ((*evt.Getlv_met()).At(0));
				
				TVector3 electmp(elecvec->Px(), elecvec->Py(), 0), 
				mettmp(metvec->Px(), metvec->Py(), 0);
				
				float_t dphi = electmp.Angle(mettmp);
				
				if(dphi < anginrad ) {
					result(i,j) = 1;
				} else {
					result(i,j) = 0; 
				}
			}
		}
		return result;
	}
};


class cutmtelecmet : public cuts {
private:
	Double_t energy;
	
public:
	virtual std::string name(){return "mtelecmet";}
	
	cutmtelecmet(cutvec & cutlist, Double_t _energy):cuts(cutlist){energy = _energy;}
	
	virtual matrix <Int_t> cut(eventviewer& evt){
		matrix <Int_t> result((*evt.Getlv_electron()).GetSize(), (*evt.Getlv_tau()).GetSize()); //get num of elecs and taus
		
		for (int i = 0; i != (*evt.Getlv_electron()).GetSize(); i++) {
			for (int j = 0; j != (*evt.Getlv_tau()).GetSize(); j++) {
				TLorentzVector* elecvec = dynamic_cast <TLorentzVector*> ((*evt.Getlv_electron()).At(i));
				TLorentzVector* metvec  = dynamic_cast <TLorentzVector*> ((*evt.Getlv_met()).At(0));


				Double_t mt = sqrt(  pow(elecvec->E()  + metvec->E() ,2)
								   - pow(elecvec->Pz() + metvec->Pz(),2) 
								   );
				
				
				if(mt < energy ) {
					result(i,j) = 1;
				} else {
					result(i,j) = 0; 
				}
			}
		}
		
		std::cout << result;
		std::cout << '\n';
		
		return result;
	}
};

/*
 Float_t eta = (*evt.GetelectronSuperEta())[i] ;
if ( fabs(eta) < 1.560){ 
*/


#endif