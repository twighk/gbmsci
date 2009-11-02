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
			Float_t eta = (*evt.GetelectronSuperEta())[i] ;
			if ( fabs(eta) < 1.560){ 
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
			Float_t eta = (*evt.GetelectronSuperEta())[i] ;
			if ( fabs(eta) < 1.560){ 
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
			Float_t eta = (*evt.GetelectronSuperEta())[i] ;
			if ( fabs(eta) < 1.560){ 
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

class cuttauTracks : public cuts {
private:
	
public:
	virtual std::string name(){return "electronEcalIso";}
	
	cuttauTracks(cutvec & cutlist):cuts(cutlist){}
	
	virtual Int_t cut(eventviewer& evt){
		for (Int_t i = 0; i < (*evt.GettauTracks()).size(); i++) {	
			Int_t numoftrack = float2int((*evt.GettauTracks())[i]);
			//std::cout << numoftrack << std::endl;
			if ((numoftrack == 1) || (numoftrack == 3)) {
				return 1;
			}
		}
		return 0;
	}
};

class cuttauLeadTrk : public cuts {
private:
	
public:
	virtual std::string name(){return "electronEcalIso";}
	
	cuttauLeadTrk(cutvec & cutlist):cuts(cutlist){}
	
	virtual Int_t cut(eventviewer& evt){
		for (Int_t i = 0; i < (*evt.GettauLeadTrk()).size(); i++) {	
			Int_t leadtrack = float2int((*evt.GettauLeadTrk())[i]);
			//std::cout << numoftrack << std::endl;
			if (leadtrack == 1) {
				return 1;
			}
		}
		return 0;
	}
};


/*
 Float_t eta = (*evt.GetelectronSuperEta())[i] ;
if ( fabs(eta) < 1.560){ 
*/


#endif