#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <TFile.h>
#include <TTree.h>
#include <TObjArray.h>
#include <TBranch.h>
#include <TString.h>
#include <TApplication.h>

#include "../histogram/histogram.h"
#include "../histogram/histostack.h"
#include "mlp.h"

using namespace std;

const Double_t targetlum = 200.0;

int main( int argc, char ** argv){
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	
	// Open File -> Get trees
	TFile* file = new TFile("../root/combo.root");
	TTree* tree = (TTree *) file->Get("combotree");
	TTree* metatree = (TTree *) file->Get("metadata");
	
	
	// Get Channel names 
	vector <string> channelname;
	vector <Double_t> channellum;
	TString* chnme = NULL; Double_t chlum = NULL;
	TBranch * channelbranch = metatree->GetBranch("ChannelName");
	TBranch * channellumbranch = metatree->GetBranch("IntLum");
	channelbranch->SetAddress(&chnme);
	channellumbranch->SetAddress(&chlum);
	for (Int_t i = 0; i < metatree->GetEntriesFast(); ++i) {
		metatree->GetEntry(i);
		channellum.push_back(chlum);
		channelname.push_back(string(chnme->Data()));
		
		cout << channelname[i] << ": " << channellum[i] << endl;
	}
	
	
	// Get variable and type branch names -> split into vectors
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
	
	//Set up branches => vars
	Double_t *visibleMass; // point to visible mass
	vector <Double_t> vars;
	vector <TBranch *> branches;
	vars.resize(branchnames.size());
	branches.resize(branchnames.size());
	for (unsigned int i = 0; i < branchnames.size(); ++i){
		branches[i] = tree->GetBranch(branchnames[i].c_str());
		branches[i] -> SetAddress(&vars[i]);
		if (branchnames[i] == string("VisibleMass")) {
			visibleMass = &vars[i];
		}
	}
	
	
	// Set up types => vars
	vector <Int_t> vtypes;
	vector <TBranch *> btypes;
	vtypes.resize(types.size());
	btypes.resize(types.size());
	for (unsigned int i = 0; i < types.size(); ++i){
		btypes[i] = tree->GetBranch(types[i].c_str());
		btypes[i] -> SetAddress(&vtypes[i]);
	}
	
	
	
	// get ready for mlp
	vector <Double_t> outs;
	outs.resize(types.size());
	mlp tester;
	
	//make histograms
	vector<Histogram> histograms;
	for (unsigned int i = 0; i != outs.size(); i++) {
		histograms.push_back(
							 Histogram(channelname[i].c_str())
							 );
	}
	
	for (int i = 0; i < tree->GetEntries(); ++i) {
		tree->GetEntry(i);
		//Get output from mlp
		for (unsigned int j = 0; j < outs.size(); ++j) {
			outs[j] = tester.Value(j,&vars[0]/*pointer to array of leafs*/);
			histograms[j].fill( *visibleMass, outs[j] /** targetlum /channellum[j]*/);
		}
		
		
	}
	
	/*
	for(int i = 0; i < tree->GetEntries(); ++i){
		cout << "Event: " << i << endl;
		tree->GetEntry(i);
		for (unsigned int j = 0; j < outs.size(); ++j) {
			outs[j] = tester.Value(j,&leafs[0]);
			cout << "type" << j+1 << ": " << outs[j] << " / " << vtypes[j]  << endl;
		}
		Double_t sum = 0;
		for (unsigned int j = 0; j < outs.size(); ++j) {
			sum += outs[j];
		}
		cout << "Sum: " << sum;
		if (max_element(outs.begin(), outs.end()) - outs.begin() ==
			max_element(vtypes.begin(), vtypes.end())- vtypes.begin()){
			cout << " / " << 1; 
		} else {
			cout << " / " << 0;
		}
		cout<< endl << endl;
		
	}
	*/
	
	
	Histostack hstack("Visible mass");

	//Draw histograms
	for (unsigned int i = 0; i != outs.size(); i++) {
		hstack.add(histograms[i]);
		histograms[i].show();
	}
	hstack.draw();
	
	
	
	
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}