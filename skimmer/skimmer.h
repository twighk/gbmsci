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
    std::vector<Double_t> weights;
    std::vector<TFile*> infile;
    std::vector<TTree*> intree;
    std::vector<TFile*> outfile;
    std::vector<TTree*> outtree;
    std::vector<Int_t> beginvec;
    std::vector<Int_t> endvec;
    std::vector< std::vector<Int_t> > eventlist;
    TFile* filecombo;
    TTree* treecombo;
	std::map<std::string, std::vector< std::vector<Double_t> > > stats;
	bool setstats;
    
public:
    
    skimmer(std::string, std::string);
    void AddChannel(std::string, std::string);
    void WriteCombo();
    void GoSkim();
    bool DoPreselection(std::map<std::string, brptr> *, std::map<std::string, Int_t> &);
    std::string Int2String(Int_t);
	void CalcStats(Int_t, std::map<std::string, brptr> *, std::map<std::string, Int_t> *);
    void PrintStats();
};

#endif
