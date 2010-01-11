#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>
#include <TROOT.h>
#include <TSystem.h>
#include <TObjArray.h>
#include <TMultiLayerPerceptron.h>

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void mlpsetup(TTree *tree, Int_t ntrain=100){
	if (!gROOT->GetClass("TMultiLayerPerceptron")) {
		gSystem->Load("libMLP");
	}
	
	vector <string> branchnames;
	vector <string> types;
	
	TObjArray* lob = tree->GetListOfBranches();
	for (Int_t i = 0; i < lob->GetEntriesFast(); ++i) {
		TBranch * branch = (TBranch *)lob->At(i);
		string bname = string(branch -> GetName());
		if(string(bname).compare(0,4,"type")){
			branchnames.push_back(bname);
		} else {
			types.push_back(bname);
		}
	}
	for (int i = 0; i < types.size(); ++i) {
		cout << types[i] << endl;
	}
	
	for (int i = 0; i < branchnames.size(); ++i) {
		cout << branchnames[i] << endl;
	}
	
	exit(0);
	TMultiLayerPerceptron *mlp = 
	new TMultiLayerPerceptron("@types:ntypes-1:type1,type2,type3",
							  tree,
							  "Entry$%2",
							  "(Entry$+1)%2");
	
	mlp->Train(ntrain, "text,graph,update=10");
	mlp->Export("mlp","C++");
}

int main(){
	TFile * f = new TFile("../root/combo.root");
	TTree * t = (TTree*)f->Get("combotree");
	
	mlpsetup(t);
	return 0;
}