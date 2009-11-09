def doeff(sample, leaf, cutfunc, cutval):
  evt_pass = 0
  item_pass = 0
  evt_total = 0
  item_total = 0
  tree = trees[sample]
  for i in range(tree.GetEntriesFast()):
    evt_total += 1
    tree.LoadTree(i)
    tree.GetEntry(i)
    leafvec = getattr(tree,leaf)
    item_total += len(leafvec)
    cuteval = [cutfunc(l,cutval) for l in leafvec]
    if any(cuteval):
      evt_pass += 1
    item_pass += len(filter(None,cuteval))
  #return evt_pass,evt_total,item_pass,item_total
  w = weights[sample]
  return {'evt_pass':evt_pass, 'evt_total':evt_total, 'item_pass':item_pass,'item_total':item_total,'w_evt_pass':evt_pass*w, 'w_evt_total':evt_total*w, 'w_item_pass':item_pass*w,'w_item_total':item_total*w}

def docuts(signals, backgrounds, leaf, cutfunc, cutvals):
  print "docuts signal=%s backgrounds=%s leaf=%s"%(signals,backgrounds,leaf)
  sample_effs = {}
  for b in signals+backgrounds:
    sample_effs[b]=[]
  sample_effs['sum']=[{'evt_pass':0, 'evt_total':0, 'item_pass':0,'item_total':0,'w_evt_pass':0, 'w_evt_total':0, 'w_item_pass':0,'w_item_total':0} for c in cutvals]
  for i,c in enumerate(cutvals):
    for s in signals:
      sample_effs[s].append(doeff(s,leaf,cutfunc,c))
    for b in backgrounds:
      res = doeff(b,leaf,cutfunc,c)
      sample_effs[b].append(res)
      for thing in res:
        sample_effs['sum'][i][thing]+=res[thing]
  
  graphs = {}
  
  #signal vs background efficiency plots
  svb_graphs = {}
  for sig in signals:
    svb_graphs[sig]={}
    signal_event_y = array('d')
    print "Signal %s"%sig
    for i,s in enumerate(sample_effs[sig]):
      signal_event_y.append( float(s['evt_pass'])/float(s['evt_total']) )
      print "Cut: %s event eff: %s item eff: %s" % (cutvals[i],float(s['evt_pass'])/float(s['evt_total']),float(s['item_pass'])/float(s['item_total']))
    for b in backgrounds+['sum']:
      print "Background %s"%b
      back_event_x = array('d')
      for i,s in enumerate(sample_effs[b]):
        back_event_x.append( float(s['evt_pass'])/float(s['evt_total']) )
        print "Cut: %s event eff: %s item eff: %s" % (cutvals[i],float(s['evt_pass'])/float(s['evt_total']),float(s['item_pass'])/float(s['item_total']))
      g_event = TGraph(len(cutvals),back_event_x,signal_event_y)
      g_event.SetTitle("%s [Events];eff_{%s};eff_{%s}"%(leaf,b,sig))
      svb_graphs[sig][b]=g_event
  graphs['signal_vs_background']=svb_graphs
  
  #signal vs root background plots
  svrb_graphs = {}
  for sig in signals:
    svrb_graphs[sig]={}
    signal_event_y = array('d')
    for i,s in enumerate(sample_effs[sig]):
      signal_event_y.append(float(s['w_evt_pass']))
    for b in backgrounds+['sum']:
      back_event_x = array('d')
      for i,s in enumerate(sample_effs[b]):
        back_event_x.append(math.sqrt(float(s['w_evt_pass'])))
      g_event = TGraph(len(cutvals),back_event_x,signal_event_y)
      g_event.SetTitle("%s [Events];#sqrt{n_{%s}};n_{%s}"%(leaf,b,sig))
      svrb_graphs[sig][b]=g_event
  graphs['signal_vs_root_background']=svrb_graphs
  
  #efficiency vs cut plots
  eff_graphs = {}
  for sig in signals:
    signal_eff_y = array('d')
    signal_cut_x = array('d')
    for i,s in enumerate(sample_effs[sig]):
      signal_eff_y.append( float(s['evt_pass'])/float(s['evt_total']) )
      signal_cut_x.append(cutvals[i])
    g = TGraph(len(cutvals),signal_cut_x,signal_eff_y)
    g.SetTitle("%s [Events];cut_{%s};eff_{%s}"%(leaf,leaf,sig))
    eff_graphs[sig]=g
  for b in backgrounds:
    back_eff_y = array('d')
    back_cut_x = array('d')
    for i,s in enumerate(sample_effs[b]):
      back_eff_y.append(float(s['evt_pass'])/float(s['evt_total']))
      back_cut_x.append(cutvals[i])
    g = TGraph(len(cutvals),back_cut_x,back_eff_y)
    g.SetTitle("%s [Events];cut_{%s};eff_{%s}"%(leaf,leaf,b))
    eff_graphs[b]=g
  graphs['eff_vs_cut'] = eff_graphs
  
  #signal over root background
  srb_cut = {}
  for sig in signals:
    srb_cut[sig]={}
    cut_x = array('d')
    for i in range(len(cutvals)):
      cut_x.append(cutvals[i])
    for back in backgrounds+['sum']:
      back_eff_y = array('d')
      for i,(s,b) in enumerate(zip(sample_effs[sig],sample_effs[back])):
        back_eff_y.append(float(s['w_evt_pass'])/math.sqrt(float(b['w_evt_pass'])))
      g = TGraph(len(cutvals),cut_x,back_eff_y)
      g.SetTitle("%s %s [Events];%s;#frac{n_{%s}}{#sqrt{n_{%s}}}"%(sig,leaf,leaf,sig,back))
      srb_cut[sig][back]=g
  graphs['srb_vs_cut'] = srb_cut
  return graphs

  
def makeCanvas(leaf,cutfunc,cutvals,histn,histl,histh):
  sigs = ['AH115bb','AH160bb']
  bgs = ['TTplusJets','WplusJets','Zee','Ztautau']
  
  graphs = docuts(sigs,bgs,leaf,cutfunc,cutvals)
  
  c = TCanvas("%s_canvas"%leaf,"%s_canvas"%leaf,1024,600)
  c.Divide(3,2)
  
  for n,g in graphs['signal_vs_background']['AH115bb'].items():
    g.SetMarkerStyle(marker['AH115bb'])
    g.SetLineColor(color['AH115bb'])
  for n,g in graphs['signal_vs_background']['AH160bb'].items():
    g.SetMarkerStyle(marker['AH160bb'])
    g.SetLineColor(color['AH160bb'])
    
  
  
  
  for i,b in enumerate(bgs+['sum']):
    c.cd(i+1)
    graphs['signal_vs_background']['AH115bb'][b].Draw("APL")
    graphs['signal_vs_background']['AH160bb'][b].Draw("PL")
  
  c.cd(6)
  
  l = TLegend(0.8,0.7,1.0,1.0)
  hists={}
  for item in sigs+bgs:
    trees[item].Draw("%s>>th1_%s_%s(%s,%s,%s)"%(leaf,leaf,item,histn,histl,histh))
    hists[item] = globals()['th1_%s_%s'%(leaf,item)]
    hists[item].SetLineColor(color[item])
    hists[item].SetFillColor(color[item])
    hists[item].SetFillStyle(fill[item])
    l.AddEntry(hists[item],item,"F")
    
    
  hists['AH115bb'].DrawNormalized()
  for item in (sigs+bgs)[1:]:
    hists[item].DrawNormalized("same")
  l.Draw()
  c.cd(0)
  c.SaveAs("%s.png"%leaf)
  
  c2 = TCanvas("%s_canvas2"%leaf,"%s_canvas2"%leaf,1024,600)
  
  for n,g in graphs['eff_vs_cut'].items():
    g.SetMarkerStyle(marker[n])
    g.SetLineColor(color[n])
  

  min_y = min([min([g.GetY()[i] for i in range(g.GetN())]) for n,g in (graphs['eff_vs_cut'].items())])
  max_y = max([max([g.GetY()[i] for i in range(g.GetN())]) for n,g in (graphs['eff_vs_cut'].items())])
  
  
  graphs['eff_vs_cut'].items()[0][1].Draw("APL")
  graphs['eff_vs_cut'].items()[0][1].GetYaxis().SetRangeUser(min_y*0.9,max_y*1.1)
  for n,g in graphs['eff_vs_cut'].items()[1:]:
    g.Draw("PL")
  
  l2 = TLegend(0.8,0.7,1.0,1.0)
  for n,g in graphs['eff_vs_cut'].items():
    l2.AddEntry(g,n,"LP")
  l2.Draw()
  
  c2.SaveAs("%s2.png"%leaf)
  
  c3 = TCanvas('%s_canvas3'%leaf,'%s_canvas3'%leaf,1024,600)
  c3.Divide(3,2)
  
  for n,g in graphs['signal_vs_root_background']['AH115bb'].items():
    g.SetMarkerStyle(marker['AH115bb'])
    g.SetLineColor(color['AH115bb'])
  for n,g in graphs['signal_vs_root_background']['AH160bb'].items():
    g.SetMarkerStyle(marker['AH160bb'])
    g.SetLineColor(color['AH160bb'])
    
  for i,b in enumerate(bgs+['sum']):
    c3.cd(i+1)
    graphs['signal_vs_root_background']['AH115bb'][b].Draw("APL")
    graphs['signal_vs_root_background']['AH160bb'][b].Draw("PL")
  
  c3.SaveAs("%s3.png"%leaf)
  
  
  c4 = TCanvas("%s_canvas4"%leaf,"%s_canvas4"%leaf,1024,600)
  c4.Divide(2,1)
  
  for i,s in enumerate(sigs):
    c4.cd(i+1)
    for n,g in graphs['srb_vs_cut'][s].items():
      g.SetMarkerStyle(marker[n])
      g.SetLineColor(color[n])
  
  
    min_y = min([min([g.GetY()[i] for i in range(g.GetN())]) for n,g in (graphs['srb_vs_cut'][s].items())])
    max_y = max([max([g.GetY()[i] for i in range(g.GetN())]) for n,g in (graphs['srb_vs_cut'][s].items())])
  
  
    graphs['srb_vs_cut'][s].items()[0][1].Draw("APL")
    graphs['srb_vs_cut'][s].items()[0][1].GetYaxis().SetRangeUser(min_y*0.9,max_y*1.1)
    for n,g in graphs['srb_vs_cut'][s].items()[1:]:
      g.Draw("PL")
  
    l4 = TLegend(0.8,0.7,1.0,1.0)
    for n,g in graphs['srb_vs_cut'][s].items():
      l4.AddEntry(g,n,"LP")
    l4.Draw()
  
  c4.SaveAs("%s4.png"%leaf)
  
  

def run():
  makeCanvas('pairDPhi12',lambda x,y:x>y,[1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0],32,0,3.2)
  makeCanvas('pairDR12',lambda x,y:x>y,[1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0],32,0,3.2)
  makeCanvas('pairMt1MET',lambda x,y:x>y,[20,25,30,35,40,45,50,55,60,65,70],50,0,100)
  makeCanvas('pairDPhi1MET',lambda x,y:x<y,[0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0],32,0,3.2)
  makeCanvas('electronCombinedIso',lambda x,y:x<y,[0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8],40,0,2)
  makeCanvas('electronTrackIso',lambda x,y:x<y,[0.25,0.5,0.75,1.0,1.25,1.50,1.75,2.00],40,0,4)
  makeCanvas('electronEcalIso',lambda x,y:x<y,[0.25,0.5,0.75,1.0,1.25,1.50,1.75,2.00],40,0,4)
  makeCanvas('jetBTagSimpleSecondary',lambda x,y:x>y,[1.0,1.5,2.0,2.5,3.0,3.5,4.0],20,0,4)
  makeCanvas('jetBTagCombinedSecondary',lambda x,y:x>y,[0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9],20,0,1)
  makeCanvas('jetBTagTrackCountHighEff',lambda x,y:x>y,[0,1,2,3,4,5,6,7,8,9,10],50,0,25)
  
def test():
  makeCanvas('pairDPhi1MET',lambda x,y:x<y,[0,0.6,1.2,1.8,2.4,3.0],32,0,3.2)