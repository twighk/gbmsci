from ROOT import *
from array import array
gROOT.SetStyle("Plain")
import math
import random
import copy


try:
  import psyco
  psyco.profile()
  print "Using Psyco"
except:
  pass
  
#from multiprocessing import Pool

from PLorentzVector import PLorentzVector, colinear_approx
from MakeClass import lv_object, event, makeclass, pair
from cuts import *

import cPickle
import os
  
files = {}
trees = {}

samples = ['AH115bb','AH160bb','TTplusJets','WplusJets','ZplusJets','AH115','AH160','Zcc','Zbb','QCD_EMenriched_Pt20to30','QCD_EMenriched_Pt30to80','QCD_EMenriched_Pt80to170','QCD_BCtoE_Pt20to30','QCD_BCtoE_Pt30to80','QCD_BCtoE_Pt80to170']
s115 = filter(lambda x: '160' not in x, samples)
s160 = filter(lambda x: '115' not in x, samples)
sqcd = filter(lambda x: 'QCD' in x, samples)

xsection = {
  'AH115bb': 53.91,
  'AH160bb': 18.43,
  'AH115': 30.07,
  'AH160': 6.33,
  'WplusJets': 40000.,
  'TTplusJets': 317.,
  'ZplusJets': 3700.,
  'VQQ': 289.,
  'Zbb':45.2, #289.
  'Zcc':75.4, #289.
  'QCD_BCtoE_Pt20to30':1.92e5,
  'QCD_BCtoE_Pt30to80':2.4e5,
  'QCD_BCtoE_Pt80to170':2.28e4,
  'QCD_EMenriched_Pt20to30':3.2e6,
  'QCD_EMenriched_Pt30to80':4.7e6,
  'QCD_EMenriched_Pt80to170':2.85e5,
}

nevents = {
  'AH115bb': 206532,
  'AH160bb': 210120,
  'AH115': 236122,
  'AH160': 233095,
  'WplusJets': 9745661,
  'TTplusJets': 812209,
  'ZplusJets': 1226932,
  'VQQ': 289,
  'Zbb':157442, #1006772
  'Zcc':262611,
  'QCD_BCtoE_Pt20to30':1997072,
  'QCD_BCtoE_Pt30to80':2016487,
  'QCD_BCtoE_Pt80to170':1075822,
  'QCD_EMenriched_Pt20to30':20110260,
  'QCD_EMenriched_Pt30to80':37319530,
  'QCD_EMenriched_Pt80to170':5149520
}

intlumi = {}
weights = {}

targetlumi = 200.

for s in samples:
  intlumi[s] = nevents[s]/xsection[s]
  weights[s] = targetlumi/intlumi[s]
  
print 'samples',samples
print 'intlumi',intlumi
print 'weights',weights


color = {
  'AH115bb':1,
  'AH160bb':1,
  'AH115':2,
  'AH160':2,
  'TTplusJets':3,  
  'WplusJets':4,
  'ZplusJets':5,
  'Zbb':6,
  'Zcc':7,
  'QCD_BCtoE_Pt20to30':8,
  'QCD_BCtoE_Pt30to80':8,
  'QCD_BCtoE_Pt80to170':8,
  'QCD_EMenriched_Pt20to30':9,
  'QCD_EMenriched_Pt30to80':9,
  'QCD_EMenriched_Pt80to170':9
}

fill = {
  'AH115bb':3001,
  'AH160bb':3002,
  'AH115':3004,
  'AH160':3005,
  'TTplusJets':3006,
  'WplusJets':3007,
  'ZplusJets':3016,
  'Zbb':3021,
  'Zcc':3022,
  'QCD_BCtoE_Pt20to30':3008,
  'QCD_BCtoE_Pt30to80':3008,
  'QCD_BCtoE_Pt80to170':3008,
  'QCD_EMenriched_Pt20to30':3009,
  'QCD_EMenriched_Pt30to80':3009,
  'QCD_EMenriched_Pt80to170':3009
}

marker = {
  'AH115bb':20,
  'AH160bb':21,
  'TTplusJets':22,
  'WplusJets':23,
  'ZplusJets':24,
  'AH115':25,
  'AH160':26,
  'sum':3
}

for f in samples:
  files[f] = TFile.Open("%s.root"%f)
for f in files:
  trees[f] = files[f].Get('bbAHCutTree')

def any(iterable):
  for i in iterable:
    if i:
      return True
  return False
  
def all(iterable):
  for i in iterable:
    if not i:
      return False
  return True

def applycuts(sample,cuts):
  keep_events = []
  cut_stats = [{'passed':0,'w_passed':0, 'leaf':c.name, 'elec_purity':0, 'tau_purity':0, 'bjet_purity':0, 'n_elec':0, 'n_taus':0, 'n_jets':0} for c in cuts]
  weight = weights[sample]
  print "Applying cuts for sample %s"%sample
  for e,event in enumerate(makeclass(trees[sample])):
    if e%1000==0:
      print "At event %s"%e
    for i, cut in enumerate(cuts):
      event = cut(event)
      if event:
        cut_stats[i]['passed']+=1
        cut_stats[i]['w_passed']+=weight
        for e in event.electrons:
          cut_stats[i]['n_elec']+=1
          if e.genmatch<0.1:
            cut_stats[i]['elec_purity']+=1
        for e in event.taus:
          cut_stats[i]['n_taus']+=1
          if e.genmatch<0.1:
            cut_stats[i]['tau_purity']+=1
        for e in event.jets:
          cut_stats[i]['n_jets']+=1
          if e.genmatch<0.1:
            cut_stats[i]['bjet_purity']+=1
      else:
        break
    if event:
      keep_events.append(event)
  for cut in cut_stats:
    if cut['n_elec']>0:
      cut['elec_purity'] /= float(cut['n_elec'])
    else:
      cut['elec_purity'] = 0
    if cut['n_taus']>0:
      cut['tau_purity'] /= float(cut['n_taus'])
    else:
      cut['tau_purity'] = 0
    if cut['n_jets']>0:
      cut['bjet_purity'] /= float(cut['n_jets'])
    else:
      cut['bjet_purity'] = 0
  return keep_events,cut_stats  

def stacksigback(events,title,signal):
  hists = {}
  stack = THStack('mass_visible_sigback_'+title,'Visible Mass')
  histsig = TH1F('mass_visible_sigback_signal_'+title,'Visible Mass',20,0,200)
  histback = TH1F('mass_visible_sigback_back_'+title,'Visible Mass',20,0,200)
  histsig.SetFillColor(color[signal])
  histsig.SetFillStyle(1001)
  histback.SetFillColor(30)
  histback.SetFillStyle(1001)
  for s in events.keys():
    if s==signal:
      hist = histsig
    else:
      hist = histback
    for event in events[s]:
      for pair in event.pairs:
        hist.Fill(pair.lv.M(),weights[s])
  stack.Add(histsig)
  stack.Add(histback)
  return stack
  
def stackvisible(events,title):
  hists = {}
  stack = THStack('mass_visible_'+title,'Visible Mass')
  keys = sorted(events.keys())
  key0 = keys[0]
  keys[0] = keys[1]
  keys[1] = key0
  for s in keys:
    hists[s] = TH1F('mass_visible_'+s,'mass_visible_'+s,40,0,200)
    hists[s].SetFillColor(color[s])
    hists[s].SetFillStyle(1001)
    for event in events[s]:
      for pair in event.pairs:
        hists[s].Fill(pair.lv.M())
    hists[s].Scale(weights[s])
    stack.Add(hists[s])
  return stack
  
def plotmass(events,sample):
  mass_colinear_met = TH1F('mass_colinear_met_%s'%sample,'Colinear Mass (tau-corrected CaloMET)',100,0,200)
  mass_colinear_pfmet = TH1F('mass_colinear_pfmet_%s'%sample,'Colinear Mass (PFMET)',100,0,200)
  mass_colinear_tcmet = TH1F('mass_colinear_tcmet_%s'%sample,'Colinear Mass (TcMET)',100,0,200)
  mass_colinear_genmet = TH1F('mass_colinear_genmet_%s'%sample,'Colinear Mass (GenMET)',100,0,200)
  mass_visible = TH1F('mass_visible_%s'%sample,'Visible Mass',100,0,200)
  
  print "Making mass plots for sample %s"%sample
  for event in events:
    for electron in event.electrons:
      for tau in event.taus:
        if any([int(p.lv.M())==int((electron.lv+tau.lv).M()) for p in event.pairs]):
          mc_met = colinear_approx(electron.lv,tau.lv,event.met)
          mc_pfmet = colinear_approx(electron.lv,tau.lv,event.pfmet)
          mc_tcmet = colinear_approx(electron.lv,tau.lv,event.tcmet)
          mc_genmet = colinear_approx(electron.lv,tau.lv,event.genmet)
          mass_visible.Fill((electron.lv+tau.lv).M())
          if mc_met:
            mass_colinear_met.Fill(mc_met.M())
          if mc_pfmet:
            mass_colinear_pfmet.Fill(mc_pfmet.M())
          if mc_tcmet:
            mass_colinear_tcmet.Fill(mc_tcmet.M())
          if mc_genmet:
            mass_colinear_genmet.Fill(mc_genmet.M())
  return mass_visible,mass_colinear_met,mass_colinear_pfmet,mass_colinear_tcmet,mass_colinear_genmet

def print_stats(stats):
  for sample in stats:
    print sample
    print "cut\t\tpassed\t\tw_passed"
    for cut in stats[sample]:
      print "%s\t\t%s\t\t%.2f" % (cut['leaf'],cut['passed'],cut['w_passed'])
      
def stats2csv(stats):
  samples = stats.keys()
  cuts = [cut['leaf'] for cut in stats[samples[0]]]
  result = 'Sample,'+',,,,,'.join(samples)+'\n'
  result += ','+','.join(['Passed,Weighted,ElecPurity,TauPurity,BJetPurity' for s in samples])+'\n'
  result += 'Events,' + ',,,,,'.join([str(nevents[s]) for s in samples])+'\n'
  result += 'Xsection,' + ',,,,,'.join([str(xsection[s]) for s in samples])+'\n'
  result += 'Intlumi,' + ',,,,,'.join([str(intlumi[s]) for s in samples])+'\n'
  result += 'Weight,' + ',,,,,'.join([str(weights[s]) for s in samples])+'\n'
  for i,cut in enumerate(cuts):
    result += cut+',' + ','.join(['%(passed)s,%(w_passed)s,%(elec_purity)s,%(tau_purity)s,%(bjet_purity)s'%stats[s][i] for s in samples])+'\n'
  return result
  
    
def make_mass_plots(cuts,items=None, prefix=''):
  if not items:
    items = samples
  plots = {}
  stats = {}
  
  #pool = Pool()
  #results = {}
  #for item in items:
  #  results[item] = pool.apply_async(applycuts,(item,cuts))
  #pool.close()
  #pool.join()
  
  for item in items: #random.shuffle(copy.copy(items)):
    print item
    result = applycuts(item,cuts)#results[item]
    plots[item] = plotmass(result[0],item)
    stats[item] = result[1]
    for p in plots[item]:
      p.Scale(weights[item])
      p.SetFillColor(color[item])
      p.SetFillStyle(1001)
    
  stacks = []
  
  l = TLegend(0.7,0.7,1.0,1.0)
  for item in items:
    l.AddEntry(plots[item][0],item,"F")
  
  names = ('Visible','Colinear (TauMET)','Colinear (PFMET)','Colinear (TCMET)','Colinear (GenMET)')
  for i in range(5):
    stack = THStack('stack%s'%i,names[i])
    for item in items:
      stack.Add(plots[item][i])
    stacks.append(stack)
    c = TCanvas('mass%s'%i,'mass%s'%i,1024,600)
    stack.Draw()
    l.Draw()
    c.SaveAs('%s_mass%s.png'%(prefix,i))
  
  f = open(prefix+'_stats','w')
  f.write(stats2csv(stats))
  f.close()
  
  return stacks,stats,plots
    

  


def make_distribution_plots(events, bins, mini, maxi, title, extractor):
  hists = {}
  stack = THStack(title,title)
  keys = sorted(events.keys())
  key0 = keys[0]
  keys[0] = keys[1]
  keys[1] = key0
  for s in keys:
    hists[s] = TH1F(s+title,s+title,bins,mini,maxi)
    hists[s].SetFillColor(color[s])
    hists[s].SetFillStyle(1001)
    
    for e in events[s]:
      for val in extractor(e):
        hists[s].Fill(val)
    hists[s].Scale(weights[s])
    stack.Add(hists[s])
  #hists[samples[0]].SetTitle(title)
  #hists[samples[0]].DrawNormalized()
  #for s in samples[1:]:
  #  hists[s].DrawNormalized('same')
  return stack
    
def load_data(cutname):
  f = open('post%s.pkl'%cutname)
  data = cPickle.load(f)
  f.close()
  return data
  
def save_data(cutname,events):
  f = open('post%s.pkl'%cutname,'w')
  cPickle.dump(events,f,2)
  f.close()

  
def cut_events(events, cut):
  new_keep={}
  for s in events:
    new_events = []
    for e in events[s]:
      ee = cut(e)
      if ee:
        new_events.append(ee)
    new_keep[s]=new_events
  return new_keep
      
cuts = [
  min_count_cut('electrons',1),
  min_count_cut('taus',1),
  min_count_cut('jets',1),
  isocut('electronEcalIso',4.2,3.4),
  isocut('electronTrackIso',2.2,1.1),
  isocut('electronHcalIso',2.0,1.3),
  listcut('taus','tauTracks',(1,3)),
  gtcut('taus','tauLeadTrk',0.5),
  gtcut('taus','tauECALIso',0.5),
  gtcut('taus','tauTrackIso',0.5),
  gtcut('taus','tauElectron',0.5),  
  mkpairs(0.7),
  chargecut(),
  gtcut('pairs','dphi12',2.5),
  ltcut('pairs','dphi1met',0.6),
  ltcut('pairs','mt1met',20),
  jet_overlap(),
  max_count_cut('jets',2),
  gtcut('jets','jetBTagTrackCountHighEff',3.5),
  eqcut('jets',1)
]

bgestcuts = [
  min_count_cut('electrons',1),
  min_count_cut('jets',1),
  isocut('electronEcalIso',4.2,3.4),
  isocut('electronTrackIso',2.2,1.1),
  isocut('electronHcalIso',2.0,1.3),
  faketaumaker(),
  mkpairs(0.7),
  gtcut('pairs','dphi12',2.5),
  ltcut('pairs','dphi1met',0.6),
  ltcut('pairs','mt1met',20),
  jet_overlap(),
  max_count_cut('jets',2),
  gtcut('jets','jetBTagTrackCountHighEff',3.5),
  eqcut('jets',1)
]

pre_mkpairs = cuts[0:11]
pre_dphi12cuts = cuts[0:13]

def make_pickles(cuts,name):
  keep = {}
  for s in samples:
    keep[s] = applycuts(s,cuts)[0]
  keep115 = {}
  keep160 = {}
  for s in s115:
    keep115[s] = keep[s]
  for s in s160:
    keep160[s] = keep[s]
  save_data(name+'115',keep115)
  save_data(name+'160',keep160)

  
def make_legend(samples):
  l = TLegend(0.7,0.7,1.0,1.0)
  for s in samples:
    temphist = TH1F('temp_'+s,'temp_'+s,1,0,1)
    temphist.SetFillColor(color[s])
    temphist.SetFillStyle(1001)
    l.AddEntry(temphist,s,'F')
  return l
  
def mksb_canvas(event115,event160,name):
  c = TCanvas(name,name,200,400)
  c.Divide(1,2)
  stack115 = stacksigback(event115,name+'115','AH115bb')
  stack160 = stacksigback(event160,name+'160','AH160bb')
  l115 = TLegend(0.7,0.7,1.0,1.0)
  l160 = TLegend(0.7,0.7,1.0,1.0)
  tempsig = TH1F('temp','temp',1,0,1)
  tempback = TH1F('temp2','temp2',1,0,1)
  tempsig.SetFillColor(1)
  tempsig.SetFillStyle(1001)
  tempback.SetFillColor(30)
  tempback.SetFillStyle(1001)
  l115.AddEntry(tempsig,'%.2f'%(len(event115['AH115bb'])*weights['AH115bb']),'F')
  l115.AddEntry(tempback,'%.2f'%(sum([len(event115[s])*weights[s] for s in event115 if not s=='AH115bb'])),'F')
  l160.AddEntry(tempsig,'%.2f'%(len(event160['AH160bb'])*weights['AH160bb']),'F')
  l160.AddEntry(tempback,'%.2f'%(sum([len(event160[s])*weights[s] for s in event160 if not s=='AH160bb'])),'F')
  c.cd(1)
  stack115.Draw()
  l115.Draw()
  c.cd(2)
  stack160.Draw()
  l160.Draw()
  c.SaveAs('sb_%s.png'%name)
  
   
  
  
  
def run(met='met',dphi12=2.5,dphi1met=0.6,mt1met=20,btaghigheff=3.5):
  res = {}
  events = load_data('tau')
  event115 = {}
  event160 = {}
  for k in events.keys():
    if '115' in k:
      event115[k]=events[k]
    elif '160' in k:
      event160[k]=events[k]
    else:
      event115[k]=events[k]
      event160[k]=events[k]
  
  print 'Start'
  print 'AH115', '\t'.join(["%s: %s"%(s,len(event115[s])) for s in event115])
  print 'AH160', '\t'.join(["%s: %s"%(s,len(event160[s])) for s in event160])
  
  event115 = cut_events(event115,mkpairs(0.7,met))
  event160 = cut_events(event160,mkpairs(0.7,met))
  
  print 'After mkpair'
  print 'AH115', '\t'.join(["%s: %s"%(s,len(event115[s])) for s in event115])
  print 'AH160', '\t'.join(["%s: %s"%(s,len(event160[s])) for s in event160])
  print 'AH115 weighted signal %.2f weighted background %.2f' % (len(event115['AH115bb'])*weights['AH115bb'], sum([len(event115[s])*weights[s] for s in event115 if not s=='AH115bb']))
  print 'AH160 weighted signal %.2f weighted background %.2f' % (len(event160['AH160bb'])*weights['AH160bb'], sum([len(event160[s])*weights[s] for s in event160 if not s=='AH160bb']))
  
  res['mass115_mkpair']=stackvisible(event115,'mkpair115')
  res['mass160_mkpair']=stackvisible(event160,'mkpair160')
  res['sb115_mkpair']=stacksigback(event115,'mkpair115','AH115bb')
  res['sb160_mkpair']=stacksigback(event160,'mkpair160','AH160bb')
  mksb_canvas(event115,event160,'pre_paircharge')
  
  res['paircharge115'] = make_distribution_plots(event115,9,-4,4,'Pair q_{electron}.q_{tau};Charge;Events (200pb^{-1})',lambda e: [p.elec.electronCharge*p.tau.tauCharge for p in e.pairs])
  res['paircharge160'] = make_distribution_plots(event160,9,-4,4,'Pair q_{electron}.q_{tau};Charge;Events (200pb^{-1})',lambda e: [p.elec.electronCharge*p.tau.tauCharge for p in e.pairs])
  
  event115 = cut_events(event115,chargecut())
  event160 = cut_events(event160,chargecut())
  
  print 'After chargecut'
  print 'AH115', '\t'.join(["%s: %s"%(s,len(event115[s])) for s in event115])
  print 'AH160', '\t'.join(["%s: %s"%(s,len(event160[s])) for s in event160])
  print 'AH115 weighted signal %.2f weighted background %.2f' % (len(event115['AH115bb'])*weights['AH115bb'], sum([len(event115[s])*weights[s] for s in event115 if not s=='AH115bb']))
  print 'AH160 weighted signal %.2f weighted background %.2f' % (len(event160['AH160bb'])*weights['AH160bb'], sum([len(event160[s])*weights[s] for s in event160 if not s=='AH160bb']))
  
  res['mass115_charge']=stackvisible(event115,'charge115')
  res['mass160_charge']=stackvisible(event160,'charge160')
  res['sb115_charge']=stacksigback(event115,'charge115','AH115bb')
  res['sb160_charge']=stacksigback(event160,'charge160','AH160bb')
  mksb_canvas(event115,event160,'pre_dphi12')
  
  res['dphi12115'] = make_distribution_plots(event115,32,0,3.2,'#Delta#phi_{electron,tau};#Delta#phi;Events (200pb^{-1})',lambda e: [p.dphi12 for p in e.pairs])
  res['dphi12160'] = make_distribution_plots(event160,32,0,3.2,'#Delta#phi_{electron,tau};#Delta#phi;Events (200pb^{-1})',lambda e: [p.dphi12 for p in e.pairs])
  
  event115 = cut_events(event115,gtcut('pairs','dphi12',dphi12))
  event160 = cut_events(event160,gtcut('pairs','dphi12',dphi12))
  
  print 'After dphi12'
  print 'AH115', '\t'.join(["%s: %s"%(s,len(event115[s])) for s in event115])
  print 'AH160', '\t'.join(["%s: %s"%(s,len(event160[s])) for s in event160])
  print 'AH115 weighted signal %.2f weighted background %.2f' % (len(event115['AH115bb'])*weights['AH115bb'], sum([len(event115[s])*weights[s] for s in event115 if not s=='AH115bb']))
  print 'AH160 weighted signal %.2f weighted background %.2f' % (len(event160['AH160bb'])*weights['AH160bb'], sum([len(event160[s])*weights[s] for s in event160 if not s=='AH160bb']))
  
  res['mass115_dphi12']=stackvisible(event115,'dphi12115')
  res['mass160_dphi12']=stackvisible(event160,'dphi12160')
  res['sb115_dphi12']=stacksigback(event115,'dphi12115','AH115bb')
  res['sb160_dphi12']=stacksigback(event160,'dphi12160','AH160bb')
  
  mksb_canvas(event115,event160,'pre_dphi1met')
  
  res['dphi1met115'] = make_distribution_plots(event115,32,0,3.2,'#Delta#phi_{electron,MET};#Delta#phi;Events (200pb^{-1})',lambda e: [p.dphi1met for p in e.pairs])
  res['dphi1met160'] = make_distribution_plots(event160,32,0,3.2,'#Delta#phi_{electron,MET};#Delta#phi;Events (200pb^{-1})',lambda e: [p.dphi1met for p in e.pairs])
  
  event115 = cut_events(event115,ltcut('pairs','dphi1met',dphi1met))
  event160 = cut_events(event160,ltcut('pairs','dphi1met',dphi1met))
  
  print 'After dphi1met'
  print 'AH115', '\t'.join(["%s: %s"%(s,len(event115[s])) for s in event115])
  print 'AH160', '\t'.join(["%s: %s"%(s,len(event160[s])) for s in event160])
  print 'AH115 weighted signal %.2f weighted background %.2f' % (len(event115['AH115bb'])*weights['AH115bb'], sum([len(event115[s])*weights[s] for s in event115 if not s=='AH115bb']))
  print 'AH160 weighted signal %.2f weighted background %.2f' % (len(event160['AH160bb'])*weights['AH160bb'], sum([len(event160[s])*weights[s] for s in event160 if not s=='AH160bb']))
  
  res['mass115_dphi1met']=stackvisible(event115,'dphi1met115')
  res['mass160_dphi1met']=stackvisible(event160,'dphi1met160')
  res['sb115_dphi1met']=stacksigback(event115,'dphi1met115','AH115bb')
  res['sb160_dphi1met']=stacksigback(event160,'dphi1met160','AH160bb')
  mksb_canvas(event115,event160,'pre_mt1met')
  
  
  res['mt1met115'] = make_distribution_plots(event115,40,0,80,'Mt_{electron,MET};M_{t};Events (200pb^{-1})',lambda e: [p.mt1met for p in e.pairs])
  res['mt1met160'] = make_distribution_plots(event160,40,0,80,'Mt_{electron,MET};M_{t};Events (200pb^{-1})',lambda e: [p.mt1met for p in e.pairs])
  
  event115 = cut_events(event115,ltcut('pairs','mt1met',mt1met))
  event160 = cut_events(event160,ltcut('pairs','mt1met',mt1met))
  
  print 'After mt1met'
  print 'AH115', '\t'.join(["%s: %s"%(s,len(event115[s])) for s in event115])
  print 'AH160', '\t'.join(["%s: %s"%(s,len(event160[s])) for s in event160])
  print 'AH115 weighted signal %.2f weighted background %.2f' % (len(event115['AH115bb'])*weights['AH115bb'], sum([len(event115[s])*weights[s] for s in event115 if not s=='AH115bb']))
  print 'AH160 weighted signal %.2f weighted background %.2f' % (len(event160['AH160bb'])*weights['AH160bb'], sum([len(event160[s])*weights[s] for s in event160 if not s=='AH160bb']))
  
  
  
  res['mass115_mt1met']=stackvisible(event115,'mt1met115')
  res['mass160_mt1met']=stackvisible(event160,'mt1met160')
  res['sb115_mt1met']=stacksigback(event115,'mt1met115','AH115bb')
  res['sb160_mt1met']=stacksigback(event160,'mt1met160','AH160bb')
  mksb_canvas(event115,event160,'pre_njet')
  
  event115 = cut_events(event115,jet_overlap())
  event160 = cut_events(event160,jet_overlap())
  
  print 'After jetoverlap'
  print 'AH115', '\t'.join(["%s: %s"%(s,len(event115[s])) for s in event115])
  print 'AH160', '\t'.join(["%s: %s"%(s,len(event160[s])) for s in event160])
  print 'AH115 weighted signal %.2f weighted background %.2f' % (len(event115['AH115bb'])*weights['AH115bb'], sum([len(event115[s])*weights[s] for s in event115 if not s=='AH115bb']))
  print 'AH160 weighted signal %.2f weighted background %.2f' % (len(event160['AH160bb'])*weights['AH160bb'], sum([len(event160[s])*weights[s] for s in event160 if not s=='AH160bb']))
  
  res['njet115'] = make_distribution_plots(event115,5,0,5,'N_{Jets};N_{Jets};Events (200pb^{-1})',lambda e: [len(e.jets)])
  res['njet160'] = make_distribution_plots(event160,5,0,5,'N_{Jets};N_{Jets};Events (200pb^{-1})',lambda e: [len(e.jets)])
  
  event115 = cut_events(event115,max_count_cut('jets',2))
  event160 = cut_events(event160,max_count_cut('jets',2))
  
  print 'After jets <= 2'
  print 'AH115', '\t'.join(["%s: %s"%(s,len(event115[s])) for s in event115])
  print 'AH160', '\t'.join(["%s: %s"%(s,len(event160[s])) for s in event160])
  print 'AH115 weighted signal %.2f weighted background %.2f' % (len(event115['AH115bb'])*weights['AH115bb'], sum([len(event115[s])*weights[s] for s in event115 if not s=='AH115bb']))
  print 'AH160 weighted signal %.2f weighted background %.2f' % (len(event160['AH160bb'])*weights['AH160bb'], sum([len(event160[s])*weights[s] for s in event160 if not s=='AH160bb']))
  
  res['mass115_njet']=stackvisible(event115,'njet115')
  res['mass160_njet']=stackvisible(event160,'njet160')
  res['sb115_njet']=stacksigback(event115,'njet115','AH115bb')
  res['sb160_njet']=stacksigback(event160,'njet160','AH160bb')
  mksb_canvas(event115,event160,'pre_btag')
  
  res['btaghigheff115'] = make_distribution_plots(event115,40,0,10,'B-Tag (High Efficiency);B-Tag Parameter;Events (200pb^{-1})',lambda e: [max([j.jetBTagTrackCountHighEff for j in e.jets]+[0])])
  res['btaghigheff160'] = make_distribution_plots(event160,40,0,10,'B-Tag (High Efficiency);B-Tag Parameter;Events (200pb^{-1})',lambda e: [max([j.jetBTagTrackCountHighEff for j in e.jets]+[0])])
  
  event115 = cut_events(event115,gtcut('jets','jetBTagTrackCountHighEff',btaghigheff))
  event160 = cut_events(event160,gtcut('jets','jetBTagTrackCountHighEff',btaghigheff))
  
  print 'After b-tag'
  print 'AH115', '\t'.join(["%s: %s"%(s,len(event115[s])) for s in event115])
  print 'AH160', '\t'.join(["%s: %s"%(s,len(event160[s])) for s in event160])
  print 'AH115 weighted signal %.2f weighted background %.2f' % (len(event115['AH115bb'])*weights['AH115bb'], sum([len(event115[s])*weights[s] for s in event115 if not s=='AH115bb']))
  print 'AH160 weighted signal %.2f weighted background %.2f' % (len(event160['AH160bb'])*weights['AH160bb'], sum([len(event160[s])*weights[s] for s in event160 if not s=='AH160bb']))
  
  res['mass115_btag']=stackvisible(event115,'btag115')
  res['mass160_btag']=stackvisible(event160,'btag160')
  res['sb115_btag']=stacksigback(event115,'btag115','AH115bb')
  res['sb160_btag']=stacksigback(event160,'btag160','AH160bb')
  mksb_canvas(event115,event160,'pre_nbtag')
  
  res['nbtag115'] = make_distribution_plots(event115,4,0,4,'N_{B-Tags};N_{B-Tag} ;Events (200pb^{-1})',lambda e: [len(e.jets)])
  res['nbtag160'] = make_distribution_plots(event160,4,0,4,'N_{B-Tags};N_{B-Tag} ;Events (200pb^{-1})',lambda e: [len(e.jets)])
  
  event115 = cut_events(event115,eqcut('jets',1))
  event160 = cut_events(event160,eqcut('jets',1))
  
  print 'After 1-b-tag'
  print 'AH115', '\t'.join(["%s: %s"%(s,len(event115[s])) for s in event115])
  print 'AH160', '\t'.join(["%s: %s"%(s,len(event160[s])) for s in event160])
  print 'AH115 weighted signal %.2f weighted background %.2f' % (len(event115['AH115bb'])*weights['AH115bb'], sum([len(event115[s])*weights[s] for s in event115 if not s=='AH115bb']))
  print 'AH160 weighted signal %.2f weighted background %.2f' % (len(event160['AH160bb'])*weights['AH160bb'], sum([len(event160[s])*weights[s] for s in event160 if not s=='AH160bb']))
  
  res['mass115_nbtag']=stackvisible(event115,'nbtag115')
  res['mass160_nbtag']=stackvisible(event160,'nbtag160')
  res['sb115_nbtag']=stacksigback(event115,'nbtag115','AH115bb')
  res['sb160_nbtag']=stacksigback(event160,'nbtag160','AH160bb')
  mksb_canvas(event115,event160,'final')
  
  return res
  
  
def autocut():

  cuts = {
    'mkpair':[mkpairs(0.7,'met'),mkpairs(0.7,'pfmet'),mkpairs(0.7,'tcmet')],
    'charge':[nullcut(),chargecut(True),chargecut(False)],
    'dphi12':[nullcut(),gtcut('pairs','dphi12',1.5),gtcut('pairs','dphi12',2.0),gtcut('pairs','dphi12',2.5),gtcut('pairs','dphi12',3.0)],
    'dphi1met':[nullcut(),ltcut('pairs','dphi1met',0.3),ltcut('pairs','dphi1met',0.6),ltcut('pairs','dphi1met',0.9),ltcut('pairs','dphi1met',1.2)],
    'mt1met':[nullcut(),ltcut('pairs','mt1met',20),ltcut('pairs','mt1met',30),ltcut('pairs','mt1met',40),ltcut('pairs','mt1met',50)],
    'maxjet':[nullcut(),max_count_cut('jets',1),max_count_cut('jets',2),max_count_cut('jets',3)],
    'btag':[nullcut(),gtcut('jets','jetBTagTrackCountHighEff',2.0),gtcut('jets','jetBTagTrackCountHighEff',2.5),gtcut('jets','jetBTagTrackCountHighEff',3.5),gtcut('jets','jetBTagTrackCountHighEff',4.5)],
    'nbtag':[nullcut(),eqcut('jets',1)]
  } #45000 combs

  events = load_data('tau')
  event115 = {}
  for k in events.keys():
    if '115' in k:
      event115[k]=events[k]
    else:
      event115[k]=events[k]
  event115 = cut_events(event115,jet_overlap())
  
  best_srb_str = ''
  best_srb_val = 0
  best_sb_str = ''
  best_sb_val = 0
  counter = 0
  
  print "Starting"
  
  for mp in cuts['mkpair']:
    for chg in cuts['charge']:
      for dp12 in cuts['dphi12']:
        for dp1m in cuts['dphi1met']:
          for mt1m in cuts['mt1met']:
            for mj in cuts['maxjet']:
              for bt in cuts['btag']:
                for nb in cuts['nbtag']:
                  counter += 1
                  cutstr = '\n'.join([mp.name,chg.name,dp12.name,dp1m.name,mt1m.name,mj.name,bt.name,nb.name])
                  test = copy.deepcopy(event115)
                  test = cut_events(test,mp)
                  test = cut_events(test,chg)
                  test = cut_events(test,dp12)
                  test = cut_events(test,dp1m)
                  test = cut_events(test,mt1m)
                  test = cut_events(test,mj)
                  test = cut_events(test,bt)
                  test = cut_events(test,nb)
                  
                  nsig = len(test['AH115bb'])*weights['AH115bb']
                  nback = sum([len(test[s])*weights[s] for s in test if not s=='AH115bb'])

                  if nsig > 0 and nback > 0:
                    sb = nsig/nback
                    srb = nsig/math.sqrt(nback)
                    
                    if sb>best_sb_val:
                      print "[%s] Found new best SB: %.2f"%(counter,sb)
                      print cutstr
                      best_sb_val = sb
                      best_sb_str = cutstr
                    if srb>best_srb_val:
                      print "[%s] Found new best SRB: %.2f"%(counter,srb)
                      print cutstr
                      best_srb_val = srb
                      best_srb_str = cutstr
                      
                  if counter % 100 == 0:
                    print "At combination ",counter
                    #print "Best SB: %.2f"%best_sb_val
                    #print best_sb_str
                    #print "Best SRB: %.2f"%best_srb_val
                    #print best_srb_str
                    
                  
  
  