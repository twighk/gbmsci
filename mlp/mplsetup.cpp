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

void mlpsetup(TTree *tree, Int_t ntrain=151){
	cout << "ntrain: " << ntrain << endl;
	if (!gROOT->GetClass("TMultiLayerPerceptron")) {
		gSystem->Load("libMLP");
	}
	
	vector <string> branchnames; //List of branch names (but not types)
	vector <string> types; // List of type names (type1, type2, etc.)
	
	TObjArray* lob = tree->GetListOfBranches();
	for (Int_t i = 0; i < lob->GetEntriesFast(); ++i) {
		TBranch * branch = (TBranch *)lob->At(i);
		string bname = string(branch -> GetName());
		if(string(bname).compare(0,4,"type")){
			branchnames.push_back(bname);
		} else {
			types.push_back(bname);
		}
	}// get list of all branches, and separate out types

	
//generate mlp stting in outstrem
	ostringstream outstrm(ostringstream::out);
	for (unsigned int i = 0; i < branchnames.size(); ++i) {
		outstrm << "@" << branchnames[i];
		if (i != branchnames.size()-1) {
			outstrm << ",";
		}
	} // list branch names
	
	outstrm << ":" << branchnames.size() << ":";// Neural net structure
		
	
	for (unsigned int i = 0; i < types.size(); ++i) {
		outstrm << types[i];
		if (i != types.size()-1) {
			outstrm << ",";
		}
	}// output vars
	
	cout << outstrm.str() << endl; // print it out, to see what went in

	TMultiLayerPerceptron *mlp = 
	new TMultiLayerPerceptron(outstrm.str().c_str(),
							  tree,
							  "Entry$%2",
							  "(Entry$+1)%2"); // set up neural net
	
	mlp->SetLearningMethod(TMultiLayerPerceptron::kBFGS); // choose learning method
	
	mlp->Train(ntrain, "text,graph,update=10"); // train
	mlp->Export("mlp","C++"); // save data
}

int main(int argc, char** argv){
// Setup X for graph output
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	
// Get Tree for mlp 
	TFile * f = new TFile("../root/combo.root");
	TTree * t = (TTree*)f->Get("combotree");

//run mlp
	mlpsetup(t); 
	
//wait, so graphs are shown
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}