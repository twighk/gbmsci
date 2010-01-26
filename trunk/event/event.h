#ifndef __event__
#define __event__

#include <iostream>
#include <vector>
#include <string>
#include <TFile.h>
#include <TTree.h>
#include <TClonesArray.h>
#include <TLorentzVector.h>
#include <cmath>
#include <sstream>
#include <TString.h>
#include "../header/brptr.h"


class event{

private:
	TTree * tree;
	std::map<std::string, brptr> data;
	
public:

	event(TTree *);

};


#endif