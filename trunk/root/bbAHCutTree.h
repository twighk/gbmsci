//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Oct 27 13:48:37 2009 by ROOT version 5.24/00
// from TTree bbAHCutTree/
// found on file: /Users/twig/gbmsci/root/AH115.root
//////////////////////////////////////////////////////////

#ifndef bbAHCutTree_h
#define bbAHCutTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

class bbAHCutTree : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   Float_t         numElectrons;
   Float_t         numJets;
   Float_t         numMuons;
   Float_t         numTaus;
   Float_t         triggerHLTIsoEle15;
   Float_t         triggerHLTIsoMu11;
   Float_t         triggerHLTMu15;
   vector<double>  *electronCharge;
   vector<double>  *electronCombinedIso;
   vector<double>  *electronESuperOverP;
   vector<double>  *electronEcalIso;
   vector<double>  *electronFBrem;
   vector<double>  *electronHOverE;
   vector<double>  *electronHcalIso;
   vector<double>  *electronSigmaIEtaIEta;
   vector<double>  *electronSuperEta;
   vector<double>  *electronTrackIso;
   vector<double>  *jetBTagCombinedSecondary;
   vector<double>  *jetBTagSimpleSecondary;
   vector<double>  *jetBTagTrackCountHighEff;
   vector<double>  *jetBTagTrackCountHighPurity;
   vector<double>  *muonCaloCompatibility;
   vector<double>  *muonCharge;
   vector<double>  *muonEcalIso;
   vector<double>  *muonHcalIso;
   vector<double>  *muonSegCompatibility;
   vector<double>  *muonTrackIso;
   vector<double>  *tauCharge;
   vector<double>  *tauECALIso;
   vector<double>  *tauElectron;
   vector<double>  *tauLeadTrk;
   vector<double>  *tauMuon;
   vector<double>  *tauTrackIso;
   vector<double>  *tauTracks;
   TClonesArray    *lv_electron;
   TClonesArray    *lv_genbjet;
   TClonesArray    *lv_genelectron;
   TClonesArray    *lv_genmet;
   TClonesArray    *lv_genmuon;
   TClonesArray    *lv_gentau;
   TClonesArray    *lv_gentaujet;
   TClonesArray    *lv_jet;
   TClonesArray    *lv_met;
   TClonesArray    *lv_muon;
   TClonesArray    *lv_pfmet;
   TClonesArray    *lv_tau;
   TClonesArray    *lv_tcmet;

   // List of branches
   TBranch        *b_numElectrons;   //!
   TBranch        *b_numJets;   //!
   TBranch        *b_numMuons;   //!
   TBranch        *b_numTaus;   //!
   TBranch        *b_triggerHLTIsoEle15;   //!
   TBranch        *b_triggerHLTIsoMu11;   //!
   TBranch        *b_triggerHLTMu15;   //!
   TBranch        *b_electronCharge;   //!
   TBranch        *b_electronCombinedIso;   //!
   TBranch        *b_electronESuperOverP;   //!
   TBranch        *b_electronEcalIso;   //!
   TBranch        *b_electronFBrem;   //!
   TBranch        *b_electronHOverE;   //!
   TBranch        *b_electronHcalIso;   //!
   TBranch        *b_electronSigmaIEtaIEta;   //!
   TBranch        *b_electronSuperEta;   //!
   TBranch        *b_electronTrackIso;   //!
   TBranch        *b_jetBTagCombinedSecondary;   //!
   TBranch        *b_jetBTagSimpleSecondary;   //!
   TBranch        *b_jetBTagTrackCountHighEff;   //!
   TBranch        *b_jetBTagTrackCountHighPurity;   //!
   TBranch        *b_muonCaloCompatibility;   //!
   TBranch        *b_muonCharge;   //!
   TBranch        *b_muonEcalIso;   //!
   TBranch        *b_muonHcalIso;   //!
   TBranch        *b_muonSegCompatibility;   //!
   TBranch        *b_muonTrackIso;   //!
   TBranch        *b_tauCharge;   //!
   TBranch        *b_tauECALIso;   //!
   TBranch        *b_tauElectron;   //!
   TBranch        *b_tauLeadTrk;   //!
   TBranch        *b_tauMuon;   //!
   TBranch        *b_tauTrackIso;   //!
   TBranch        *b_tauTracks;   //!
   TBranch        *b_lv_electron;   //!
   TBranch        *b_lv_genbjet;   //!
   TBranch        *b_lv_genelectron;   //!
   TBranch        *b_lv_genmet;   //!
   TBranch        *b_lv_genmuon;   //!
   TBranch        *b_lv_gentau;   //!
   TBranch        *b_lv_gentaujet;   //!
   TBranch        *b_lv_jet;   //!
   TBranch        *b_lv_met;   //!
   TBranch        *b_lv_muon;   //!
   TBranch        *b_lv_pfmet;   //!
   TBranch        *b_lv_tau;   //!
   TBranch        *b_lv_tcmet;   //!

   bbAHCutTree(TTree * /*tree*/ =0) { }
   virtual ~bbAHCutTree() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(bbAHCutTree,0);
};

#endif

#ifdef bbAHCutTree_cxx
void bbAHCutTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   electronCharge = 0;
   electronCombinedIso = 0;
   electronESuperOverP = 0;
   electronEcalIso = 0;
   electronFBrem = 0;
   electronHOverE = 0;
   electronHcalIso = 0;
   electronSigmaIEtaIEta = 0;
   electronSuperEta = 0;
   electronTrackIso = 0;
   jetBTagCombinedSecondary = 0;
   jetBTagSimpleSecondary = 0;
   jetBTagTrackCountHighEff = 0;
   jetBTagTrackCountHighPurity = 0;
   muonCaloCompatibility = 0;
   muonCharge = 0;
   muonEcalIso = 0;
   muonHcalIso = 0;
   muonSegCompatibility = 0;
   muonTrackIso = 0;
   tauCharge = 0;
   tauECALIso = 0;
   tauElectron = 0;
   tauLeadTrk = 0;
   tauMuon = 0;
   tauTrackIso = 0;
   tauTracks = 0;
   lv_electron = 0;
   lv_genbjet = 0;
   lv_genelectron = 0;
   lv_genmet = 0;
   lv_genmuon = 0;
   lv_gentau = 0;
   lv_gentaujet = 0;
   lv_jet = 0;
   lv_met = 0;
   lv_muon = 0;
   lv_pfmet = 0;
   lv_tau = 0;
   lv_tcmet = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("numElectrons", &numElectrons, &b_numElectrons);
   fChain->SetBranchAddress("numJets", &numJets, &b_numJets);
   fChain->SetBranchAddress("numMuons", &numMuons, &b_numMuons);
   fChain->SetBranchAddress("numTaus", &numTaus, &b_numTaus);
   fChain->SetBranchAddress("triggerHLTIsoEle15", &triggerHLTIsoEle15, &b_triggerHLTIsoEle15);
   fChain->SetBranchAddress("triggerHLTIsoMu11", &triggerHLTIsoMu11, &b_triggerHLTIsoMu11);
   fChain->SetBranchAddress("triggerHLTMu15", &triggerHLTMu15, &b_triggerHLTMu15);
   fChain->SetBranchAddress("electronCharge", &electronCharge, &b_electronCharge);
   fChain->SetBranchAddress("electronCombinedIso", &electronCombinedIso, &b_electronCombinedIso);
   fChain->SetBranchAddress("electronESuperOverP", &electronESuperOverP, &b_electronESuperOverP);
   fChain->SetBranchAddress("electronEcalIso", &electronEcalIso, &b_electronEcalIso);
   fChain->SetBranchAddress("electronFBrem", &electronFBrem, &b_electronFBrem);
   fChain->SetBranchAddress("electronHOverE", &electronHOverE, &b_electronHOverE);
   fChain->SetBranchAddress("electronHcalIso", &electronHcalIso, &b_electronHcalIso);
   fChain->SetBranchAddress("electronSigmaIEtaIEta", &electronSigmaIEtaIEta, &b_electronSigmaIEtaIEta);
   fChain->SetBranchAddress("electronSuperEta", &electronSuperEta, &b_electronSuperEta);
   fChain->SetBranchAddress("electronTrackIso", &electronTrackIso, &b_electronTrackIso);
   fChain->SetBranchAddress("jetBTagCombinedSecondary", &jetBTagCombinedSecondary, &b_jetBTagCombinedSecondary);
   fChain->SetBranchAddress("jetBTagSimpleSecondary", &jetBTagSimpleSecondary, &b_jetBTagSimpleSecondary);
   fChain->SetBranchAddress("jetBTagTrackCountHighEff", &jetBTagTrackCountHighEff, &b_jetBTagTrackCountHighEff);
   fChain->SetBranchAddress("jetBTagTrackCountHighPurity", &jetBTagTrackCountHighPurity, &b_jetBTagTrackCountHighPurity);
   fChain->SetBranchAddress("muonCaloCompatibility", &muonCaloCompatibility, &b_muonCaloCompatibility);
   fChain->SetBranchAddress("muonCharge", &muonCharge, &b_muonCharge);
   fChain->SetBranchAddress("muonEcalIso", &muonEcalIso, &b_muonEcalIso);
   fChain->SetBranchAddress("muonHcalIso", &muonHcalIso, &b_muonHcalIso);
   fChain->SetBranchAddress("muonSegCompatibility", &muonSegCompatibility, &b_muonSegCompatibility);
   fChain->SetBranchAddress("muonTrackIso", &muonTrackIso, &b_muonTrackIso);
   fChain->SetBranchAddress("tauCharge", &tauCharge, &b_tauCharge);
   fChain->SetBranchAddress("tauECALIso", &tauECALIso, &b_tauECALIso);
   fChain->SetBranchAddress("tauElectron", &tauElectron, &b_tauElectron);
   fChain->SetBranchAddress("tauLeadTrk", &tauLeadTrk, &b_tauLeadTrk);
   fChain->SetBranchAddress("tauMuon", &tauMuon, &b_tauMuon);
   fChain->SetBranchAddress("tauTrackIso", &tauTrackIso, &b_tauTrackIso);
   fChain->SetBranchAddress("tauTracks", &tauTracks, &b_tauTracks);
   fChain->SetBranchAddress("lv_electron", &lv_electron, &b_lv_electron);
   fChain->SetBranchAddress("lv_genbjet", &lv_genbjet, &b_lv_genbjet);
   fChain->SetBranchAddress("lv_genelectron", &lv_genelectron, &b_lv_genelectron);
   fChain->SetBranchAddress("lv_genmet", &lv_genmet, &b_lv_genmet);
   fChain->SetBranchAddress("lv_genmuon", &lv_genmuon, &b_lv_genmuon);
   fChain->SetBranchAddress("lv_gentau", &lv_gentau, &b_lv_gentau);
   fChain->SetBranchAddress("lv_gentaujet", &lv_gentaujet, &b_lv_gentaujet);
   fChain->SetBranchAddress("lv_jet", &lv_jet, &b_lv_jet);
   fChain->SetBranchAddress("lv_met", &lv_met, &b_lv_met);
   fChain->SetBranchAddress("lv_muon", &lv_muon, &b_lv_muon);
   fChain->SetBranchAddress("lv_pfmet", &lv_pfmet, &b_lv_pfmet);
   fChain->SetBranchAddress("lv_tau", &lv_tau, &b_lv_tau);
   fChain->SetBranchAddress("lv_tcmet", &lv_tcmet, &b_lv_tcmet);
}

Bool_t bbAHCutTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef bbAHCutTree_cxx
