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
#include <ostream>
#include <fstream>

#include "../header/strvecextractor.h"

/***************************************************
 * WARNING This line will prevent use of std::cout *
 * #define cout (*coutp)                           *
 * it IS defined below (in scope)                  *
 * it is undefined at the end of this file         *
 ***************************************************/


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
	std::string								exportsuffix;
	TMultiLayerPerceptron::ELearningMethod	method;
	UInt_t									epochs;
	std::vector<Int_t>						hidden_layers;
	bool									normalise_inputs;
	bool									normalise_outputs;
	bool									alt_output_nodes;
	bool									use_weights;
	bool									textoutput;
	std::vector<std::string>				input_variables;
	std::vector<std::string>				types;
    TMultiLayerPerceptron*                  network;
	ostream*								coutp;
	
	
	Double_t serrtest,serrtrain,eerrtest,eerrtrain;
	
    
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
		exportsuffix				= std::string("");
		textoutput					= true;
		coutp						= &std::cout;
		
	}

	
	/***************************************************/
	/* WARNING This line will prevent use of std::cout */
					#define cout (*coutp)
	/* see notes above.                                */
	/***************************************************/

    
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
	
	void SetExportSuffix(std::string _exportsuffix) {
        exportsuffix = _exportsuffix;    
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
	
	void SetTextOutputOff(std::string output = "/dev/null"){
		textoutput = false;
			// send all the output to the great bitbucket in the sky
			coutp = new fstream (output.c_str(), fstream::out);
		//new fstream ("/dev/null",fstream::out); 
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
        cout << "Input Nodes (" << input_variables.size() << "):" << std::endl;
        for (unsigned int i = 0; i < input_variables.size(); ++i) {
            cout << "  " << input_variables[i] << std::endl;
        }
        
        cout << "Output Nodes (" << types.size() << "):" << std::endl;
        for (unsigned int i = 0; i < types.size(); ++i) {
            cout << "  " << types[i] << std::endl;
        }
        
        cout << "Hidden Layer Structure:   :";
        for (unsigned int i = 0; i < hidden_layers.size(); ++i) {
            cout << hidden_layers[i] << ":";
        }
		cout << std::endl;
        
        cout << "Learning Method:          " << GetMethodString() << std::endl;
        cout << "Epochs:                   " << epochs << std::endl;
        cout << "Normalised Inputs:        " << normalise_inputs << std::endl;
        cout << "Normalised Outputs:       " << normalise_outputs << std::endl;
        cout << "Alternative Output Nodes: " << alt_output_nodes << std::endl;
        cout << "Use Weights Branch:       " << use_weights << std::endl;
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


        
        
        cout << struct_argument << std::endl;
        

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
        cout << network->GetTau() << "\t" << network->GetReset() << std::endl;
        
		
		std::ostringstream traintext(std::ostringstream::out); // string for training
		if( textoutput == true){
			traintext << "text,";
		}
		traintext << "graph,update=10";
		
		serrtest  = GetErrorTest();
		serrtrain = GetErrorTrain();
		
		network->Train(epochs, traintext.str().c_str()); // train
		network->Export(std::string("mlp" + higgs_mass + exportsuffix).c_str(),"C++"); // save data
        
		eerrtest  = GetErrorTest();
		eerrtrain = GetErrorTrain();
		
	}
	
	Double_t Getserrtest(){
		return serrtest;
	}
	
	Double_t Geteerrtest(){
		return eerrtest;
	}
	
	Double_t Getserrtrain(){
		return serrtrain;
	}
	
	Double_t Geteerrtrain(){
		return eerrtrain;
	}
	
	void Export(std::string filename) {
		network->Export(std::string("mlp" + filename).c_str(),"C++"); // save data
	}
	
	Double_t GetErrorTrain(){
		return 	TMath::Sqrt(network->GetError(TMultiLayerPerceptron::kTraining) / ceil(tree->GetEntries() / 2.0));
		
	}
	Double_t GetErrorTest(){
		return 	TMath::Sqrt(network->GetError(TMultiLayerPerceptron::kTest) / floor(tree->GetEntries() / 2.0));
	}
	
};

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


#undef cout
#endif