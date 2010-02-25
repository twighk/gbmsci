#ifndef __twohist__
#define __twohist__
#include <TH1F.h>
#include <TCanvas.h>
#include <TROOT.h>
#include <TStyle.h>
#include <TLegend.h>
#include <TPaveStats.h>

#include <sstream>

class TwoHist {
private:
    TH1F* hista;
    TH1F* histb;
    std::string title;
    std::string xaxis;
    std::string yaxis;
    
public:
    TwoHist(){
        hista = 0;
        histb = 0;
    }
    
    TwoHist(TH1F* hista, TH1F* histb, 
            std::string title = "", 
            std::string xaxis = "", 
            std::string yaxis = "") : hista(hista),histb(histb),title(title),xaxis(xaxis),yaxis(yaxis){}
    

    
    void Plot(){
        gROOT->SetStyle("Plain");
		gROOT->ForceStyle(); 
		gStyle->SetOptStat(kTRUE);
        TCanvas * canvas = new TCanvas("output","output");
        
        hista->SetFillColor(6);
        hista->SetFillStyle(3002);
        histb->SetFillColor(4);
        histb->SetFillStyle(3003);
        
        TLegend *legend = new TLegend(0.78,0.45,0.98,0.6,"");
        legend -> SetTextSize(0.03);
        legend -> AddEntry(hista,hista->GetTitle(),"f");
        legend -> AddEntry(histb,histb->GetTitle(),"f");

        hista->SetTitle(title.c_str());
        histb->SetTitle(title.c_str());
        hista->SetXTitle(xaxis.c_str());
        histb->SetXTitle(xaxis.c_str());
//        hista->SetXTitle("test");
//        histb->SetXTitle("test");
        hista->SetYTitle(yaxis.c_str());
        histb->SetYTitle(yaxis.c_str());

        Float_t count1, count2;
        count1 = hista->GetBinContent(hista->GetMaximumBin());
        count2 = histb->GetBinContent(histb->GetMaximumBin());
        if (count1 >= count2){
            hista->Draw();
            histb->Draw("sames");
        } else {
            histb->Draw();
            hista->Draw("sames");
        }
        legend->Draw();
        
        canvas->Update();
        
        TPaveStats * st = (TPaveStats *) histb ->FindObject("stats");
        st->SetY2NDC(0.80);
        st->SetY1NDC(0.65);
    
        canvas->Modified();
        
        
    }


};
#endif
