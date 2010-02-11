#ifndef __histostack__
#define __histostack__

#include <vector>

#include <THStack.h>
#include <TCanvas.h>
#include <TROOT.h>
#include <TStyle.h>
#include <TLegend.h>

#include "histogram.h"


class Histostack {
private:
	static int count;//just keep track of the number of histostacks
	static int canvas;//just keep track of the number of histostacks
	THStack* histstack;
	std::vector <Histogram *> histlist;
	
public:
	Histostack(const char * name){
		std::ostringstream str (std::ostringstream::out);
		str << "histstackh" << count++ ; 
		histstack = new THStack(str.str().c_str(),name);
		gROOT->SetStyle("Plain");
		gROOT->ForceStyle(); 
		gStyle->SetOptStat(kFALSE);
	}
	
	void add(Histogram & h){
		histlist.push_back(&h);
		histstack->Add(h.gethist());
	}

	
	void draw(const char * legendname =""){
		std::ostringstream str (std::ostringstream::out);
		str << "histstackc" << canvas++ ; 
		/*TCanvas* my_canvas =*/ new TCanvas(str.str().c_str(),"test" ,200,10,600,400); 
		
		TLegend *legend = new TLegend(0.6,0.7,1.0f,1.0,legendname); //X:left -> right, Y:bottom -> top 
		legend->SetTextSize(0.03);
		for (unsigned int i = 0; i != histlist.size(); ++i) {
			legend -> AddEntry(histlist[i]->gethist(),"","f");
		}
		
		histstack->Draw();
		legend->Draw(); // must be after other draws to draw on top	
	}
};
int Histostack::count = 0;
int Histostack::canvas = 0;




#endif