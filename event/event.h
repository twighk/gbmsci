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

	event(TTree* _tree){
		
		tree = _tree;
		TObjArray * branch_list = tree->GetListOfBranches();
		
		for (int i = 0; i < branch_list->GetEntriesFast(); ++i) {
			std::string name = ((TBranch*)branch_list->At(i))->GetName();
			std::string _classname = ((TBranch*)branch_list->At(i))->GetClassName();
			brptr temp;
			if (_classname == "") {
				_classname = "unknown";
			}
			temp.classname = _classname;
			temp.pointer = NULL;
			data[name] = temp;
			tree->SetBranchAddress(name.c_str(), &(data[name].pointer));
		}
		
	}	
	
	std::map<std::string, brptr> * Entry(Int_t i){
		tree->GetEntry(i);
		return &(data);
		
	}
};


#endif