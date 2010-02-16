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
	
	string a;
	if (argc > 1) {
		a = argv[1];
	}
	
	cout << a << endl;
	
// Get Tree for mlp 
	TFile * f = new TFile(string("../root/combo" + a +".root").c_str());
	TTree * t = (TTree*)f->Get("combotree");

	
//run mlp
	MlpSetup mlp(t, a, TMultiLayerPerceptron::kSteepestDescent); 
	
	
	mlp.runsetup();
	
//wait, so graphs are shown
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}