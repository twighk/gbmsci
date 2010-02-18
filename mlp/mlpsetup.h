#ifndef __mlpsetup__
#define __mlpsetup__

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

#include "../header/strvecextractor.h"

class MlpSetup {
private:

	
	struct ChannelMeta {
		Int_t begin;
		Int_t end;
	};
	TTree *tree; // tree 
	std::string file; // file suffix .root
	Int_t ntrain; // number of training epochs (-1)
	TMultiLayerPerceptron::ELearningMethod method;
	
	std::string netstructure; 
	
	/*
	TTree*									tree;
	std::string								higgs_mass;
	TMultiLayerPerceptron::ELearningMethod	method;
	Int_t									epochs;
	std::vector<Int_t>						hidden_layers;
	bool									normalise_inputs;
	bool									normalise_outputs;
	bool									alt_output_nodes;
	bool									use_weights;
	std::vector<std::string>				input_variables;
	std::vector<std::string>				types;
	*/
	
	
public:
	
	
	/*
	MlpSetup(TTree * _tree, std::string _higgs_mass){
		tree						= _tree;
		higgs_mass					= _higgs_mass;
		
		method						= TMultiLayerPerceptron::kBFGS;
		epochs						= 101;
		normalise_inputs			= true;
		normalise_outputs			= false;
		alt_output_nodes			= true;
		use_weights					= true;
		
		input_variables				= strvecextractor::ExtractInputVariables(tree);
		types						= strvecextractor::ExtractTypes(tree);
		
		std::vector<Int_t> temp;
		temp.push_back(input_variables.size());
		hidden_layers				= temp;
		
	}
	*/
	
	
	
	MlpSetup(TTree *tree, std::string file,  std::string netstructure ="", TMultiLayerPerceptron::ELearningMethod method = TMultiLayerPerceptron::kBFGS , Int_t ntrain=101):
	tree(tree),
	file(file),
	ntrain(ntrain),
	netstructure(netstructure),
	method(method)
	{
		
	}
	
	MlpSetup(TTree *tree, std::string file, TMultiLayerPerceptron::ELearningMethod method = TMultiLayerPerceptron::kBFGS, std::string netstructure ="" , Int_t ntrain=101):
	tree(tree),
	file(file),
	ntrain(ntrain),
	netstructure(netstructure),
	method(method)
	{
		
	}
	
	void runsetup(){
		std::cout << "ntrain: " << ntrain << std::endl;
		
		std::vector <std::string> branchnames; //List of branch names (but not types)
		std::vector <std::string> types; // List of type names (type1, type2, etc.)
		
		TObjArray* lob = tree->GetListOfBranches();
		for (Int_t i = 0; i < lob->GetEntriesFast(); ++i) {
			TBranch * branch = (TBranch *)lob->At(i);
			std::string bname = std::string(branch -> GetName());
			if (std::string(bname) == "weight"
				||std::string(bname) == "IntLum"
				) {
				continue;
			} else if(std::string(bname).compare(0,4,"type")){
				branchnames.push_back(bname);
			} else {
				types.push_back(bname);
			}
		}// get list of all branches, and separate out types
		
		
		//generate mlp stting in outstrem
		std::ostringstream outstrm(std::ostringstream::out);
		for (unsigned int i = 0; i < branchnames.size(); ++i) {
			outstrm << "@" << branchnames[i];
			if (i != branchnames.size()-1) {
				outstrm << ",";
			}
		} // list branch names
		
		std::cout  << "Net Structure: " << netstructure << std::endl;
		if (netstructure.length() == 0) {
			std::ostringstream temp;
			temp <<branchnames.size();
			netstructure = temp.str();
		}
		
		outstrm << ":"  << netstructure << ":";// Neural net structure
		
		
		for (unsigned int i = 0; i < types.size(); ++i) {
			outstrm << types[i];
			if (i != types.size()-1) {
				outstrm << ",";
			}
		}// output vars
		

		
		std::cout << outstrm.str() << std::endl; // print it out, to see what went in
		
		TMultiLayerPerceptron *mlp = 
		new TMultiLayerPerceptron(outstrm.str().c_str(),
								  "weight",
								  tree,
								  "Entry$%2==0",
								  "(Entry$+1)%2==0"); // set up neural net
		
		mlp->SetLearningMethod(method); // choose learning method
		
		mlp->Train(ntrain, "text,graph,update=10"); // train
		mlp->Export(std::string("mlp" +file).c_str(),"C++"); // save data
		
		
		
		TMLPAnalyzer ana(mlp);
		// Initialisation
		ana.GatherInformations();
		// output to the console
		ana.CheckNetwork();
		TCanvas* mlpa_canvas1 = new TCanvas("mlpa_canvas","Network analysis");
		// shows how each variable influences the network
		ana.DrawDInputs();
		TCanvas* mlpa_canvas2 = new TCanvas("mlpa_canvas2","Network analysis");
		// shows the network structure
		mlp->Draw();
		TCanvas* mlpa_canvas3 = new TCanvas("mlpa_canvas3","Network analysis");
		// draws the resulting network
		ana.DrawNetwork(0,"type==1","type==0");
		
		
	}
	
};





#endif