from ROOT import *
import glob
import sys

files = [TFile.Open(f) for f in glob.glob('%s/*'%sys.argv[1])]
trees = [f.Get("ntupleProducer/bbAHCutTree") for f in files]


        

l = TList()
map(l.Add,trees)

f = TFile('%s.root'%sys.argv[1],'RECREATE')
mt = TTree.MergeTrees(l)

histnames = {}
hists = {}
for k in files[0].GetListOfKeys():
  if not k.GetName()=='ntupleProducer':
    histnames[k.GetName()]='%s/%s'%(k.GetName(),files[0].Get(k.GetName()).GetListOfKeys()[0].GetName())
    hists[k.GetName()]=TH1F(k.GetName(),k.GetName(),1,0,1)
for ff in files:
  for h in hists:
    hists[h].Add(ff.Get(histnames[h]))
    

f.Write()
f.Close()
