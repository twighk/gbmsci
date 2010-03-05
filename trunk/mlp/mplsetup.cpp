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
#include <fstream>

#include "mlpsetup.h"
using namespace std;

int main(int argc, char** argv){
	
//	ofstream null("/dev/null");
//	cerr.rdbuf(null.rdbuf());
	
// Setup X for graph output
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 

// Determine if this will be a 115 or 160 neural net
	string higgs_mass;
	if (argc > 1) {
		higgs_mass = argv[1];
	}
	//cout << "Neural Network for Higgs mass: " << higgs_mass << endl;
	
// Get Tree for mlp 
	TFile * file = new TFile(string("../root/combo" + higgs_mass +".root").c_str());
	TTree * tree = (TTree*)file->Get("combotree");
	
    MlpSetup mlp(tree, higgs_mass); 
	
//    mlp.SetMethod(TMultiLayerPerceptron::kFletcherReeves);
    mlp.SetEpochs(50/*201*/);
//    mlp.SetNormaliseInputs(false);
//    mlp.SetNormaliseOutputs(true);
//    mlp.SetAltOutputNodes(false);
//    mlp.SetUseWeights(false);
	
	if (argc > 2) { // for automation
		mlp.SetExportSuffix(string(argv[2]));
		mlp.SetTextOutputOff();
	}
	
    vector<Int_t> new_struct(1, 10);
    mlp.SetStructure(new_struct);
    mlp.TrainNet();

//
//	cout << mlp.Getserrtest() <<'\t'
//		<< mlp.Getserrtrain() <<'\t'
//		<< mlp.Geteerrtest() <<'\t'
//		<< mlp.Geteerrtrain() << endl;
	
    //Just ouput error fractions
    cout << (mlp.Geteerrtest() / mlp.Getserrtest()) <<'\t'
    <<  (mlp.Geteerrtrain() / mlp.Getserrtrain()) <<'\t'<< endl;
	
//	mlp.RunSetup();
	if (argc <= 2) { // for automation continuation
		//wait, so graphs are shown
		cerr << "Hanging for X11" << endl;
		theApp.Run();
	}
	return 0;
}