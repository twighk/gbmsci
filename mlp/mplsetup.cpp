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
	cout << "Neural Network for Higgs mass: " << higgs_mass << endl;
	
// Get Tree for mlp 
	TFile * file = new TFile(string("../root/combo" + higgs_mass +".root").c_str());
	TTree * tree = (TTree*)file->Get("combotree");
	
    MlpSetup mlp(tree, higgs_mass); 
//	  mlp.SetMethod(TMultiLayerPerceptron::kRibierePolak);
    mlp.SetEpochs(201);
//    mlp.SetNormaliseInputs(false);
//    mlp.SetNormaliseOutputs(true);
//    mlp.SetAltOutputNodes(false);
//    mlp.SetUseWeights(false);
    vector<Int_t> new_struct(1, 8);
    mlp.SetStructure(new_struct);
    mlp.TrainNet();
//run mlp
	
	
	
//	mlp.RunSetup();
	
//wait, so graphs are shown
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}