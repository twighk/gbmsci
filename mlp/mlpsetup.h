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

	
//	struct ChannelMeta {
//		Int_t begin;
//		Int_t end;
//	};
//	TTree *tree; // tree 
//	std::string file; // file suffix .root
//	Int_t ntrain; // number of training epochs (-1)
//	TMultiLayerPerceptron::ELearningMethod method;
//	
//	std::string netstructure; 
	
	TTree*									tree;
	std::string								higgs_mass;
	TMultiLayerPerceptron::ELearningMethod	method;
	UInt_t									epochs;
	std::vector<Int_t>						hidden_layers;
	bool									normalise_inputs;
	bool									normalise_outputs;
	bool									alt_output_nodes;
	bool									use_weights;
	std::vector<std::string>				input_variables;
	std::vector<std::string>				types;
    TMultiLayerPerceptron*                  network;
    
    std::string Int2String(Int_t num){
        std::stringstream out;
        out << num;
        return out.str();
    }
	
	
public:

    

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

    
    void SetMethod(TMultiLayerPerceptron::ELearningMethod _method) {
        method = _method;
    } /*Available methods are: kStochastic, kBatch,
    kSteepestDescent, kRibierePolak, kFletcherReeves and kBFGS.*/
    
    void SetStructure(std::vector<Int_t> _hidden_layers) {
        hidden_layers = _hidden_layers;    
    } 
    
    void SetEpochs(UInt_t _epochs) {
        epochs = _epochs;    
    } 
    
    void SetNormaliseInputs(bool _normalise_inputs) {
        normalise_inputs = _normalise_inputs;    
    } 
    
    void SetNormaliseOutputs(bool _normalise_outputs) {
        normalise_outputs = _normalise_outputs;    
    } 
    
    void SetAltOutputNodes(bool _alt_output_nodes) {
        alt_output_nodes = _alt_output_nodes;    
    } 
    
    void SetUseWeights(bool _use_weights) {
        use_weights = _use_weights;    
    } 
    
    
    std::string GetMethodString() {
        std::string result = "ERROR: NO METHOD FOUND";
        switch (method) {
            case TMultiLayerPerceptron::kStochastic:
                result = "Stochastic";
                break;
            case TMultiLayerPerceptron::kBatch:
                result = "Batch";
                break;    
            case TMultiLayerPerceptron::kSteepestDescent:
                result = "SteepestDescent";
                break;   
            case TMultiLayerPerceptron::kRibierePolak:
                result = "RibierePolak";
                break;   
            case TMultiLayerPerceptron::kFletcherReeves:
                result = "FletcherReeves";
                break;   
            case TMultiLayerPerceptron::kBFGS:
                result = "BFGS";
                break;   
            default:
                break;
        }   
        return result;
    }
    
    void PrintDetails() {
        std::cout << "Input Nodes (" << input_variables.size() << "):" << std::endl;
        for (unsigned int i = 0; i < input_variables.size(); ++i) {
            std::cout << "  " << input_variables[i] << std::endl;
        }
        
        std::cout << "Output Nodes (" << types.size() << "):" << std::endl;
        for (unsigned int i = 0; i < types.size(); ++i) {
            std::cout << "  " << types[i] << std::endl;
        }
        
        std::cout << "Hidden Layer Structure:   :";
        for (unsigned int i = 0; i < hidden_layers.size(); ++i) {
            std::cout << hidden_layers[i] << ":";
        }
        std::cout << std::endl;
        
        std::cout << "Learning Method:          " << GetMethodString() << std::endl;
        std::cout << "Epochs:                   " << epochs << std::endl;
        std::cout << "Normalised Inputs:        " << normalise_inputs << std::endl;
        std::cout << "Normalised Outputs:       " << normalise_outputs << std::endl;
        std::cout << "Alternative Output Nodes: " << alt_output_nodes << std::endl;
        std::cout << "Use Weights Branch:       " << use_weights << std::endl;
    }
    
    void TrainNet(){
        PrintDetails();
        
        std::string struct_argument;
        
        for (unsigned int i = 0; i < input_variables.size(); ++i) {
            if (normalise_inputs == true) {
                struct_argument += "@";
            }
            struct_argument += input_variables[i];
            if (i != (input_variables.size() - 1)) {
                struct_argument += ",";
            }
        }
        struct_argument += ":";
        for (unsigned int i = 0; i < hidden_layers.size(); ++i) {
            struct_argument += (Int2String(hidden_layers[i]) + ":");
        }
        for (unsigned int i = 0; i < types.size(); ++i) {
            if (normalise_outputs == true) {
                struct_argument += "@";
            }
            struct_argument += types[i];
            if (i != (types.size() - 1)) {
                struct_argument += ",";
            }
        }
        if (alt_output_nodes == true) {
            struct_argument += "!";
        }


        
        
        std::cout << struct_argument << std::endl;
        

        network = new TMultiLayerPerceptron(struct_argument.c_str(),
								  tree,
								  "Entry$%2==0",
								  "(Entry$+1)%2==0"); // set up neural net
//		
        if (use_weights == true) {
            network->SetEventWeight("weight");
        }
        
        network->SetLearningMethod(method); // choose learning method
        
        network->SetReset(50);
        network->SetTau(2.0);
        std::cout << network->GetTau() << "\t" << network->GetReset() << std::endl;
        
		network->Train(epochs, "text,graph,update=10"); // train
//		mlp->Export(std::string("mlp" +file).c_str(),"C++"); // save data
        
        
		
	}
	
//	MlpSetup(TTree *tree, std::string file,  std::string netstructure ="", TMultiLayerPerceptron::ELearningMethod method = TMultiLayerPerceptron::kBFGS , Int_t ntrain=101):
//	tree(tree),
//	file(file),
//	ntrain(ntrain),
//	netstructure(netstructure),
//	method(method)
//	{
//		
//	}
//	
//	MlpSetup(TTree *tree, std::string file, TMultiLayerPerceptron::ELearningMethod method = TMultiLayerPerceptron::kBFGS, std::string netstructure ="" , Int_t ntrain=101):
//	tree(tree),
//	file(file),
//	ntrain(ntrain),
//	netstructure(netstructure),
//	method(method)
//	{
//		
//	}
	
	
    
  //  void RunSetup(){
//		std::cout << "ntrain: " << ntrain << std::endl;
//		
//		std::vector <std::string> branchnames; //List of branch names (but not types)
//		std::vector <std::string> types; // List of type names (type1, type2, etc.)
//		
//		TObjArray* lob = tree->GetListOfBranches();
//		for (Int_t i = 0; i < lob->GetEntriesFast(); ++i) {
//			TBranch * branch = (TBranch *)lob->At(i);
//			std::string bname = std::string(branch -> GetName());
//			if (std::string(bname) == "weight"
//				||std::string(bname) == "IntLum"
//				) {
//				continue;
//			} else if(std::string(bname).compare(0,4,"type")){
//				branchnames.push_back(bname);
//			} else {
//				types.push_back(bname);
//			}
//		}// get list of all branches, and separate out types
//		
//		
//		//generate mlp stting in outstrem
//		std::ostringstream outstrm(std::ostringstream::out);
//		for (unsigned int i = 0; i < branchnames.size(); ++i) {
//			outstrm << "@" << branchnames[i];
//			if (i != branchnames.size()-1) {
//				outstrm << ",";
//			}
//		} // list branch names
//		
//		std::cout  << "Net Structure: " << netstructure << std::endl;
//		if (netstructure.length() == 0) {
//			std::ostringstream temp;
//			temp <<branchnames.size();
//			netstructure = temp.str();
//		}
//		
//		outstrm << ":"  << netstructure << ":";// Neural net structure
//		
//		
//		for (unsigned int i = 0; i < types.size(); ++i) {
//			outstrm << types[i];
//			if (i != types.size()-1) {
//				outstrm << ",";
//			}
//		}// output vars
//		
//
//		
//		std::cout << outstrm.str() << std::endl; // print it out, to see what went in
//		
//		TMultiLayerPerceptron *mlp = 
//		new TMultiLayerPerceptron(outstrm.str().c_str(),
//								  "weight",
//								  tree,
//								  "Entry$%2==0",
//								  "(Entry$+1)%2==0"); // set up neural net
//		
//		mlp->SetLearningMethod(method); // choose learning method
//		
//		mlp->Train(ntrain, "text,graph,update=10"); // train
//		mlp->Export(std::string("mlp" +file).c_str(),"C++"); // save data
//		
//		
//		
//		TMLPAnalyzer ana(mlp);
//		// Initialisation
//		ana.GatherInformations();
//		// output to the console
//		ana.CheckNetwork();
//		TCanvas* mlpa_canvas1 = new TCanvas("mlpa_canvas","Network analysis");
//		// shows how each variable influences the network
//		ana.DrawDInputs();
//		TCanvas* mlpa_canvas2 = new TCanvas("mlpa_canvas2","Network analysis");
//		// shows the network structure
//		mlp->Draw();
//		TCanvas* mlpa_canvas3 = new TCanvas("mlpa_canvas3","Network analysis");
//		// draws the resulting network
//		ana.DrawNetwork(0,"type==1","type==0");
//		
//		
//	}
	
};





#endif