#ifndef __cuts__
#define __cuts__

#include <string>
#include <vector>
#include "../eventviewer/eventviewer.h"


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
	Bool_t cutvalue;
	
public:
	virtual std::string name(){return "tauLeadTrack";}
	cuttauLeadTrack(cutvec & cutlist, Bool_t _cutvalue):cuts(cutlist){
		cutvalue = _cutvalue;
	}
	
	virtual Int_t cut(eventviewer& evt){
		return cutvalue;
	}
};



#endif