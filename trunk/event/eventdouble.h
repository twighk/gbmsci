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
//			std::cout << name << '\n';
			if(name.compare(0,4,"type") != 0
			   && name != "IntLum"
			   && name != "weight"){
//				std::cout << name << '\n';
				Double_t temp = 0.;
				data[name] = temp;
				tree->SetBranchAddress( name.c_str(), &(data[name]) );
			}

		}
		
	}	
	
	TTree * getTree(){
		return tree;
	} 
	
	std::map<std::string, Double_t> * Entry(Int_t i){
		tree->GetEntry(i);
		return &(data);
		
	}
};


#endif