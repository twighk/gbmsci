#include <iostream>
#include <string>
#include <vector>

#include <TFile.h>
#include <TTree.h>
#include <TObjArray.h>
#include <TBranch.h>

#include "mlp.h"

using namespace std;

int main( int argc, char ** argv){
	TFile* file = new TFile("../root/combo.root");
	TTree* tree = (TTree *) file->Get("combotree");
	
	vector <string> branchnames;
	vector <string> types;
	
	TObjArray* lob = tree->GetListOfBranches();
	for (Int_t i = 0; i < lob->GetEntriesFast(); ++i) {
		TBranch * branch = (TBranch *)lob->At(i);
		string bname = string(branch -> GetName());
		if(string(bname).compare(0,4,"type")){
			branchnames.push_back(bname);
		}else {
			types.push_back(bname);
		}

	}
	
	vector <Double_t> leafs;
	vector <TBranch *> branches;
	leafs.resize(branchnames.size());
	branches.resize(branchnames.size());
	for (unsigned int i = 0; i < branchnames.size(); ++i){
		branches[i] = tree->GetBranch(branchnames[i].c_str());
		branches[i] -> SetAddress(&leafs[i]);
	}
	
	
	vector <Double_t> outs;
	outs.resize(types.size());
	mlp tester;
	for(int i = 0; i<100/*tree->GetEntries()*/; ++i){
		cout << "Event: " << i << endl;
		tree->GetEntry(i);
		for (unsigned int j = 0; j < outs.size(); ++j) {
			outs[j] = tester.Value(j,&leafs[0]);
			cout << "type" << j+1 << ": " << outs[j] << endl;
		}
		Double_t sum = 0;
		for (unsigned int j = 0; j < outs.size(); ++j) {
			sum += outs[j];
		}
		cout << "Sum: " << sum << endl << endl;

		
	}
	
	
	return 0;
}