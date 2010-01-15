#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>
#include <TROOT.h>
#include <TSystem.h>
#include <TObjArray.h>
#include <TMultiLayerPerceptron.h>
#include <TApplication.h>

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void mlpsetup(TTree *tree, Int_t ntrain=21){
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

	
	
	ostringstream outstrm(ostringstream::out);
	for (unsigned int i = 0; i < branchnames.size(); ++i) {
		outstrm << "@" << branchnames[i];
		if (i != branchnames.size()-1) {
			outstrm << ",";
		}
	}
	
	outstrm << ":" << branchnames.size() << ":";	
		
	
	for (unsigned int i = 0; i < types.size(); ++i) {
		outstrm << types[i];
		if (i != types.size()-1) {
			outstrm << ",";
		}
	}
	
	cout << outstrm.str() << endl;

	TMultiLayerPerceptron *mlp = 
	new TMultiLayerPerceptron(outstrm.str().c_str(),
							  tree,
							  "Entry$%2",
							  "(Entry$+1)%2");
	
	mlp->SetLearningMethod(kBFGS);
	
	mlp->Train(ntrain, "text,graph,update=10");
	mlp->Export("mlp","C++");
}

int main(int argc, char** argv){
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	TFile * f = new TFile("../root/combo.root");
	TTree * t = (TTree*)f->Get("combotree");
	
	mlpsetup(t);
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}