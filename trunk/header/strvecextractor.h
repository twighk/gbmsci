#ifndef __strvecextractor__
#define __strvecextractor__

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


namespace strvecextractor {
	
	static inline std::vector<std::string> ExtractInputVariables(TTree * tree){
		TObjArray* branchlist = tree->GetListOfBranches();
		std::vector<std::string> result;
		
		for (Int_t i = 0; i < branchlist->GetEntriesFast(); ++i) {
			TBranch * branch = (TBranch*)branchlist->At(i);
			std::string bname = std::string(branch->GetName());
			if (std::string(bname) == "weight" || std::string(bname) == "IntLum") {
				continue;
			} else if(std::string(bname).compare(0,4,"type")){
				result.push_back(bname);
			} 
		}
		
		return result;
	}
	
	static inline std::vector<std::string> ExtractTypes(TTree * tree){
		TObjArray* branchlist = tree->GetListOfBranches();
		std::vector<std::string> result;
		
		for (Int_t i = 0; i < branchlist->GetEntriesFast(); ++i) {
			TBranch * branch = (TBranch*)branchlist->At(i);
			std::string bname = std::string(branch->GetName());
			if (std::string(bname) == "weight" || std::string(bname) == "IntLum") {
				continue;
			} else if(std::string(bname).compare(0,4,"type")){
				continue;
			} else {
				result.push_back(bname);
			}
		}
		return result;
	}
	
};


#endif
