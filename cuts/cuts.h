#ifndef __cuts__
#define __cuts__

#include <string>
#include <vector>
#include "../eventviewer/eventviewer.h"

#include "float2int.h"

#define BARREL_ETA 1.479


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
	virtual Int_t cut(eventviewer&) = 0;
	
};

class cuttauLeadTrack : public cuts {
private:
	Int_t cutvalue;
	
public:
	virtual std::string name(){return "tauLeadTrack";}
	cuttauLeadTrack(cutvec & cutlist, Int_t _cutvalue):cuts(cutlist){
		cutvalue = _cutvalue;
	}
	
	virtual Int_t cut(eventviewer& evt){
		for (Int_t i = 0; i < (*evt.GettauLeadTrk()).size(); i++) {	
			if ( float2int((*evt.GettauLeadTrk())[i]) == cutvalue ) {
				return 1;
			}
			
		}
		return 0;
	}
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
	
	virtual Int_t cut(eventviewer& evt){
		for (Int_t i = 0; i < (*evt.GetelectronEcalIso()).size(); i++) {	
			Float_t eta = dynamic_cast<TLorentzVector*> ((*evt.Getlv_electron()).At(i))->Eta()/*eta*/ ;
			if ( fabs(eta)/*eta*/ < BARREL_ETA/*barrel range*/){
				if ( ( *evt.GetelectronEcalIso() )[i] < cutbarrel ) {
					return 1;
				}
			} else { /* endcaps*/
				if ( ( *evt.GetelectronEcalIso() )[i] < cutendcap ) {
					return 1;
				}
			}
		}
		return 0;
	}
};

class cutelectronTrackIso : public cuts {
private:
	Float_t cutbarrel, 
			cutendcap;
	
public:
	virtual std::string name(){return "electronEcalIso";}
	
	cutelectronTrackIso(cutvec & cutlist, Float_t _cutbarrel, Float_t _cutendcap):cuts(cutlist){
		cutbarrel = _cutbarrel;
		cutendcap = _cutendcap;
	}
	
	virtual Int_t cut(eventviewer& evt){
		for (Int_t i = 0; i < (*evt.GetelectronEcalIso()).size(); i++) {	
			Float_t eta = dynamic_cast<TLorentzVector*> ((*evt.Getlv_electron()).At(i))->Eta()/*eta*/ ;
			if ( fabs(eta)/*eta*/ < BARREL_ETA/*barrel range*/){
				if ( ( *evt.GetelectronTrackIso() )[i] < cutbarrel ) {
					return 1;
				}
			} else { /* endcaps*/
				if ( ( *evt.GetelectronTrackIso() )[i] < cutendcap ) {
					return 1;
				}
			}
		}
		return 0;
	}
};





class cutelectronHcalIso : public cuts {
private:
	Float_t cutbarrel, 
	cutendcap;
	
public:
	virtual std::string name(){return "electronEcalIso";}
	
	cutelectronHcalIso(cutvec & cutlist, Float_t _cutbarrel, Float_t _cutendcap):cuts(cutlist){
		cutbarrel = _cutbarrel;
		cutendcap = _cutendcap;
	}
	
	virtual Int_t cut(eventviewer& evt){
		for (Int_t i = 0; i < (*evt.GetelectronHcalIso()).size(); i++) {	
			Float_t eta = dynamic_cast<TLorentzVector*> ((*evt.Getlv_electron()).At(i))->Eta()/*eta*/ ;
			if ( fabs(eta)/*eta*/ < BARREL_ETA/*barrel range*/){
				if ( ( *evt.GetelectronHcalIso() )[i] < cutbarrel ) {
					return 1;
				}
			} else { /* endcaps*/
				if ( ( *evt.GetelectronHcalIso() )[i] < cutendcap ) {
					return 1;
				}
			}
		}
		return 0;
	}
};
#endif