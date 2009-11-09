from ROOT import *
from PLorentzVector import PLorentzVector
import math

class lv_object(object):
  def __init__(self,lv,**kwargs):
    self.lv = PLorentzVector.fromROOT(lv)
    for k,v in kwargs.items():
      setattr(self,k,v)

class pair(object):
  def __init__(self,elec,tau,met):
    self.elec = elec
    self.tau = tau
    self.lv = elec.lv+tau.lv
    self.met = met
    self.dr12 = elec.lv.deltaR(tau.lv)
    self.dphi12 = abs(elec.lv.phi()-tau.lv.phi())
    self.dphi1met = abs(elec.lv.phi()-met.phi())
    
    px = elec.lv.x + met.x
    py = elec.lv.y + met.y
    et = elec.lv.et() + sqrt(met.x*met.x+met.y*met.y)
    mt2 = et*et - (px*px + py*py)
    self.mt1met = sqrt(mt2)
    
      
class event(object):
  def __init__(self,electrons,genelecs,taus,gentaus,jets,genbs,met,pfmet,tcmet,genmet):
    self.electrons = electrons
    self.taus = taus
    self.jets = jets
    self.pairs = []
    self.genelecs = genelecs
    self.gentaus = gentaus
    self.genbs = genbs
    self.met = PLorentzVector.fromROOT(met)
    self.pfmet = PLorentzVector.fromROOT(pfmet)
    self.tcmet = PLorentzVector.fromROOT(tcmet)
    self.genmet = PLorentzVector.fromROOT(genmet)
                    
def makeclass(tree):
  
  electrons_star = MakeNullPointer('TClonesArray')
  taus_star = MakeNullPointer('TClonesArray')
  jets_star = MakeNullPointer('TClonesArray')
  genelecs_star = MakeNullPointer('TClonesArray')
  gentaus_star = MakeNullPointer('TClonesArray')
  genbs_star = MakeNullPointer('TClonesArray')  
  met_star = MakeNullPointer('TClonesArray')
  pfmet_star = MakeNullPointer('TClonesArray')
  tcmet_star = MakeNullPointer('TClonesArray')
  genmet_star = MakeNullPointer('TClonesArray')
  
  tree.SetBranchAddress('lv_electron',electrons_star)
  tree.SetBranchAddress('lv_tau',taus_star)
  tree.SetBranchAddress('lv_jet',jets_star)
  tree.SetBranchAddress('lv_genelectron',genelecs_star)
  tree.SetBranchAddress('lv_gentaujet',gentaus_star)
  tree.SetBranchAddress('lv_genbjet',genbs_star)
  tree.SetBranchAddress('lv_genmet',genmet_star)
  tree.SetBranchAddress('lv_met',met_star)
  tree.SetBranchAddress('lv_pfmet',pfmet_star)
  tree.SetBranchAddress('lv_tcmet',tcmet_star)
  
  tree.LoadTree(0)
  tree.GetEntry(0)
  branch_names = [b.GetName() for b in tree.GetListOfBranches()]
  electron_branches = [b for b in branch_names if b.startswith('electron')]
  tau_branches = [b for b in branch_names if b.startswith('tau')]
  jet_branches = [b for b in branch_names if b.startswith('jet')]
  
  for i in range(tree.GetEntriesFast()):
    
    bad = False
    tree.LoadTree(i)
    tree.GetEntry(i)
    
    if hasattr(tree,'triggerHLTIsoEle15'):
      if getattr(tree,'triggerHLTIsoEle15')<0.5:
        continue
    
    electrons = []
    genelecs = [lv_object(g) for g in genelecs_star]
    taus = []
    gentaus = [lv_object(g) for g in gentaus_star]
    jets = []
    genbs = [lv_object(g) for g in genbs_star]
    
    
    for j in range(len(electrons_star)):
      electron_kw = {}
      for b in electron_branches:
          branch = getattr(tree,b)
          if len(branch)==len(electrons_star):
            electron_kw[b] = branch[j]
          else:
            bad = True
      lvo = lv_object(electrons_star[j],**electron_kw)
      if len(genelecs)>0:
        lvo.genmatch = min([lvo.lv.deltaR(o.lv) for o in genelecs])
      else:
        lvo.genmatch = None
      electrons.append(lvo)
    for j in range(len(taus_star)):
      tau_kw = {}
      for b in tau_branches:
          branch = getattr(tree,b)
          if len(branch)==len(taus_star):
            tau_kw[b] = branch[j]
          else:
            bad = True
      lvo = lv_object(taus_star[j],**tau_kw)
      if len(gentaus)>0:
        lvo.genmatch = min([lvo.lv.deltaR(o.lv) for o in gentaus])
      else:
        lvo.genmatch = None
      taus.append(lvo)
    for j in range(len(jets_star)):
      jet_kw = {}
      for b in jet_branches:
          branch = getattr(tree,b)
          if len(branch)==len(jets_star):
            jet_kw[b] = branch[j]
          else:
            bad = True
      lvo = lv_object(jets_star[j],**jet_kw)
      if len(genbs)>0:
        lvo.genmatch = min([lvo.lv.deltaR(o.lv) for o in genbs])
      else:
        lvo.genmatch = None
      jets.append(lvo)
    if not bad:
      yield event(electrons,genelecs,taus,gentaus,jets,genbs,met_star[0],pfmet_star[0],tcmet_star[0],genmet_star[0])
  #return events