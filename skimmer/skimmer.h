#ifndef __skimmer__
#define __skimmer__

#include <iostream>
#include <vector>
#include <string>
#include <map>

#include <TFile.h>
#include <TTree.h>
#include <TClonesArray.h>
#include <TLorentzVector.h>
#include <cmath>
#include <sstream>
#include <TString.h>
#include "../event/event.h"
#include "../dict/dict.h"
#include "../header/brptr.h"

class skimmer{
private:
	std::string rootpath;
	std::vector<std::string> channel;
	std::vector<Double_t> int_lum;
	std::vector<TFile*> infile;
	std::vector<TTree*> intree;
	std::vector<TFile*> outfile;
	std::vector<TTree*> outtree;
	std::vector<Int_t> beginvec;
	std::vector<Int_t> endvec;
	TFile* filecombo;
	TTree* treecombo;

public:

	skimmer(std::string);
	void AddChannel(std::string, std::string, Double_t);
	void WriteCombo();
	void GoSkim();
	bool DoPreselection(std::map<std::string, brptr> *, std::map<std::string, Int_t> &);
	std::string Int2String(Int_t);

};

#endif