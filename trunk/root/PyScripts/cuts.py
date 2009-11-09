from MakeClass import pair

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

class jet_overlap:
  def __init__(self,dr=0.3):
    self.dr = dr
    self.name = 'jetoverlap'
  def __call__(self,event):
    new_jets = []
    for jet in event.jets:
      if all([jet.lv.deltaR(elec.lv)>self.dr for elec in event.electrons]) and all([jet.lv.deltaR(tau.lv)>self.dr for tau in event.taus]):
        new_jets.append(jet)
    event.jets = new_jets
    return event
    
class max_count_cut:
  def __init__(self,item,maxcount):
    self.item = item
    self.name = 'max %s %s'%(item,maxcount)
    self.maxcount = maxcount
  def __call__(self,event):
    if len(getattr(event,self.item))<=self.maxcount:
      return event
    return None
    
class min_count_cut:
  def __init__(self,item,mincount):
    self.item = item
    self.name = 'min %s %s'%(item,mincount)
    self.mincount = mincount
  def __call__(self,event):
    if len(getattr(event,self.item))>=self.mincount:
      return event
    return None
    
class trigger_cut:
  def __init__(self,trigger):
    self.trigger = trigger
    self.name = trigger
  def __call__(self,event):
    if event.trigger[self.trigger]:
      return event
    return None

class gtcut:
  def __init__(self,item,leaf,cut):
    self.leaf = item+'.'+leaf+'>'+str(cut)
    self.cut = cut
    self.item = item
    self.name = leaf
  def __call__(self,event):
    newitems = []
    for item in getattr(event,self.item):
      if getattr(item,self.leaf)>self.cut:
        newitems.append(item)
    if len(newitems)>0:
      setattr(event,self.item,newitems)
      return event
    return None
    
    
class ltcut:
  def __init__(self,item,leaf,cut):
    self.leaf = item+'.'+leaf+'<'+str(cut)
    self.cut = cut
    self.item = item
    self.name = leaf
  def __call__(self,event):
    newitems = []
    for item in getattr(event,self.item):
      if getattr(item,self.leaf)<self.cut:
        newitems.append(item)
    if len(newitems)>0:
      setattr(event,self.item,newitems)
      return event
    return None

class mkpairs:
  def __init__(self,mindr,met='met'):
    self.name = 'pairmaker-'+met
    self.mindr = mindr
    self.met = met
  def __call__(self,event):
    for e in event.electrons:
      for t in event.taus:
        if e.lv.deltaR(t.lv)>self.mindr:
          event.pairs.append(pair(e,t,getattr(event,self.met)))
    if len(event.pairs)>0:
      return event
    return None
    
class eqcut:
  def __init__(self,item,num):
    self.item = item
    self.num = num
    self.name = '%s==%s'%(item,num)
  def __call__(self,event):
    if len(getattr(event,self.item))==self.num:
      return event
    return None

class isocut:
  def __init__(self,leaf,cut_barrel,cut_endcaps):
    self.leaf = leaf
    self.cut_barrel = cut_barrel
    self.cut_endcaps = cut_endcaps
    self.name = leaf
  def __call__(self,event):
    new_electrons = []
    for e in event.electrons:
      if abs(e.electronSuperEta)<1.560:
        if getattr(e,self.leaf)<self.cut_barrel:
          new_electrons.append(e)
      else:
        if getattr(e,self.leaf)<self.cut_endcaps:
          new_electrons.append(e)
    if len(new_electrons)>0:
      event.electrons = new_electrons
      return event
    return None

class nullcut:
  def __init__(self):
    self.name = 'null'
  def __call__(self,event):
    return event
    
class chargecut:
  def __init__(self,equal=True):
    self.equal = equal
    if equal:
      self.name = 'paircharge (q1*q2==-1)'
    else:
      self.name = 'paircharge (q1*q2<0)'
  def __call__(self,event):
    new_pairs = []
    for p in event.pairs:
      if self.equal:
        if int(p.elec.electronCharge*p.tau.tauCharge)==-1:
          new_pairs.append(p)
      else:
        if int(p.elec.electronCharge*p.tau.tauCharge)<0:
          new_pairs.append(p)
    if len(new_pairs)>0:
      event.pairs = new_pairs
      return event
    return None

class listcut:
  def __init__(self,item,leaf,valid):
    self.item=item
    self.leaf=leaf
    self.name=leaf
    self.valid=valid
  def __call__(self,event):
    newitems = []
    for item in getattr(event,self.item):
      if int(getattr(item,self.leaf)) in self.valid:
        newitems.append(item)
    if len(newitems)>0:
      setattr(event,self.item,newitems)
      return event
    return None
    
class faketaumaker:
  def __init__(self):
    self.name='mkfaketau'
  def __call__(self,event):
    if len(event.jets)>0:
      highjet = sorted(event.jets,key=lambda x: x.lv.et())[-1]
      highjet.tauCharge = 0
      event.taus = [highjet]
      return event
    return None