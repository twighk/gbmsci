#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>
#include <TROOT.h>
#include <TSystem.h>
#include <TObjArray.h>
#include <TMultiLayerPerceptron.h>
#include <TMLPAnalyzer.h>
#include <TApplication.h>
#include <TCanvas.h>

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "mlpsetup.h"
using namespace std;

int main(int argc, char** argv){
// Setup X for graph output
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 

// Determine if this will be a 115 or 160 neural net
	string higgs_mass;
	if (argc > 1) {
		higgs_mass = argv[1];
	}
	cout << "Neural Network for " << higgs_mass << " Higgs mass" << endl;
	
// Get Tree for mlp 
	TFile * file = new TFile(string("../root/combo" + higgs_mass +".root").c_str());
	TTree * tree = (TTree*)file->Get("combotree");
	
	vector<string> test = strvecextractor::ExtractTypes(tree);

	
	exit(0);
//run mlp
	MlpSetup mlp(tree, higgs_mass, TMultiLayerPerceptron::kSteepestDescent); 
	
	
	mlp.runsetup();
	
//wait, so graphs are shown
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}