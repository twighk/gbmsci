#ifndef __twohist__
#define __twohist__

#include <TH1F.h>
#include <TCanvas.h>
#include <TROOT.h>
#include <TStyle.h>

#include <sstream>

class TwoHist {
private:
    TH1F* hista;
    TH1F* histb;
    
public:
    TwoHist(){
        hista = 0;
        histb = 0;
    }
    
    TwoHist(TH1F* hista, TH1F* histb) : hista(hista),histb(histb){}
    
    Plot(){
        gROOT->SetStyle("Plain");
		gROOT->ForceStyle(); 
		gStyle->SetOptStat(kTRUE);
        TCanvas * canvas = new TCanvas("output","output");
        hista->Draw();
        histb->Draw("sames");
        
        
    }


};

#endif