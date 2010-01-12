#ifndef __histogram__
#define __histogram__

#include <TH1F.h>
#include <TCanvas.h>
#include <TROOT.h>
#include <TStyle.h>
#include <TLatex.h>

#include <sstream>

class Histogram {
private:
	TH1F* hist;
	static int count;//just keep track of the number of histograms
	int mycount;
	static int canvas;

public:
	Histogram(const char * Title){
		mycount = count;
		std::ostringstream str (std::ostringstream::out);
		str << "h" << count++ ; 
		hist = new TH1F(str.str().c_str(), Title,100,0,350);
		gROOT->SetStyle("Plain");
		gROOT->ForceStyle(); 
		gStyle->SetOptStat(kFALSE);
	}
	
	TH1F* gethist(){ return hist;}
	
	void fill(Float_t x, Float_t weight){
		hist->Fill(x,weight);
	}
	
	void setXLabel(const char * xlabel){
		hist->GetXaxis()->SetTitle(xlabel);

	}
	
	void setYLabel(const char * ylabel){
		hist->GetYaxis()->SetTitle(ylabel);
		
	}
	
	void show(){
		std::ostringstream str (std::ostringstream::out);
		str << "c" << canvas++ ; 
		TCanvas* my_canvas = new TCanvas(str.str().c_str(),hist->GetTitle() ,200,10,600,400); 
		hist->SetFillColor(mycount+1);
		hist->Draw();
	}

};
int Histogram::count = 0;// initialise  
int Histogram::canvas = 0;// initialise 

#endif