#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

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

struct ChannelMeta {
	string name;
	Double_t luminocity;
	Int_t begin;
	Int_t end;
};


int main( int argc, char ** argv){
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	
	// Open File -> Get trees
	TFile* file = new TFile("../root/combo.root");
	TTree* tree = (TTree *) file->Get("combotree");
	TTree* metatree = (TTree *) file->Get("metadata");
	
	
	// Get Channel names 
	vector <ChannelMeta> channeldata;
	
	TString* chnme = NULL; Double_t chlum = NULL;
	Int_t temp_begin, temp_end;
	TBranch * channelbranch = metatree->GetBranch("ChannelName");
	TBranch * channellumbranch = metatree->GetBranch("IntLum");
	TBranch * b_begin = metatree->GetBranch("BeginIndex");
	TBranch * b_end = metatree->GetBranch("EndIndex");
	channelbranch->SetAddress(&chnme);
	channellumbranch->SetAddress(&chlum);
	b_begin->SetAddress(&temp_begin);
	b_end->SetAddress(&temp_end);

	channeldata.resize(metatree->GetEntriesFast());
	for (Int_t i = 0; i < metatree->GetEntriesFast(); ++i) {
		metatree->GetEntry(i);
		channeldata[i].name = string(chnme->Data());
		channeldata[i].luminocity = chlum;
		channeldata[i].begin = temp_begin;
		channeldata[i].end = temp_end;

		cout << channeldata[i].name << ": " << "\t" << channeldata[i].luminocity << "\t" << channeldata[i].begin << "\t" << channeldata[i].end << endl;
	} 
	
	exit(0);
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
							 Histogram(channeldata[i].name.c_str())
							 );
	}
	
	vector <Double_t> sum;
	vector <Double_t> sum2;
	sum.resize(outs.size());
	sum2.resize(outs.size());
	for (unsigned int j = 0; j < outs.size(); ++j) {
		sum[j] = 0;
		sum2[j] = 0;
	} // set to 0
	
	int event = 0;
	for (unsigned int x = 0; x < outs.size(); ++x) {
		int num = 0;
		int b = false;

		for (int i = event/*0*/; i < tree->GetEntries(); ++i) {
			tree->GetEntry(i);
			//Get output from mlp
			for (unsigned int j = 0; j < outs.size(); ++j) {
				outs[j] = tester.Value(j,&vars[0]/*pointer to array of leafs*/);
				if (outs[j] > 0){ // posible dodgy line
					histograms[j].fill( *visibleMass, outs[j]/* * targetlum /channeldata[j].luminocity*/);	
				}
				
				
				if(j==x && vtypes[x]){
					num ++;
					b = true;
				} else if (j==x && !vtypes[x]){
					b = false;
				}
				
				if (vtypes[j] == 1){
					sum[j]  += outs[j];
					sum2[j] += outs[j] * outs[j];
				} else {
					sum[j]  += (1 - outs[j]);
					sum2[j] += pow((1 - outs[j]),2);
				}
			}
			
			if (b&& num < 10) {
				cout <<endl << "Event: " << i << endl;
				for (unsigned int j = 0; j < outs.size(); ++j) {
					cout<< "type" << j+1 << ": " << outs[j] << " / " << vtypes[j]  << endl;	
				}
				
			} else if(num >= 100){
				event = i;
				break;
			}
		}
	}
	
	
	for (unsigned int j = 0; j < outs.size(); ++j) {
		cout << channeldata[j].name << ": " << sum[j] / tree->GetEntries() << " "
									   << sum2[j] / tree->GetEntries() - pow(sum[j] / tree->GetEntries(), 2)
									   << endl;
	} // Print out
	
	
	
	
	
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