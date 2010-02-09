#ifndef __eventdouble__
#define __eventdouble__

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


class eventdouble{

private:
	TTree * tree;
	std::map<std::string, Double_t> data;
	
public:

	eventdouble(TTree* _tree){
		
		tree = _tree;
		TObjArray * branch_list = tree->GetListOfBranches();
		
		for (int i = 0; i < branch_list->GetEntriesFast(); ++i) {
			std::string name = ((TBranch*)branch_list->At(i))->GetName();
			std::string _classname = ((TBranch*)branch_list->At(i))->GetClassName();
            Double_t temp = 0.;
			data[name] = temp;
			tree->SetBranchAddress( name.c_str(), &(data[name]) );
		}
		
	}	
	
	std::map<std::string, brptr> * Entry(Int_t i){
		tree->GetEntry(i);
		return &(data);
		
	}
};


#endif