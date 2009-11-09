from ROOT import *
import math

class PLorentzVector(object):
  @staticmethod
  def fromROOT(lv):
    return PLorentzVector(lv.X(),lv.Y(),lv.Z(),lv.T())
  def __init__(self,x,y,z,t):
    self.x = x
    self.y = y
    self.z = z
    self.t = t
  def Px(self):
    return self.x
  def Py(self):
    return self.y
  def Pz(self):
    return self.z
  def __getitem__(self,index):
    if index==0:
      return self.x
    if index==1:
      return self.y
    if index==2:
      return self.z
    if index==3:
      return self.t
    raise IndexError
  def __mul__(self,other):
    return PLorentzVector(self.x*other,self.y*other,self.z*other,self.t*other)
  def __add__(self,other):
    return PLorentzVector(self.x+other.x,self.y+other.y,self.z+other.z,self.t+other.t)
  def __eq__(self,other):
    return self.x==other.x and self.y==other.y and self.z==other.z and self.t==other.t
  def __lt__(self,other):
    return self.mag2()<other.mag2()
  def __gt__(self,other):
    return self.mag2()>other.mag2()
  def M2(self):
    return self.t*self.t - (self.x*self.x+self.y*self.y+self.z*self.z)
  def M(self):
    return math.sqrt(abs(self.M2()))
  def Mt2(self):
    return self.t*self.t - self.z*self.z
  def Mt(self):
    return math.sqrt(abs(self.Mt2()))
  def phi(self):
    return math.atan2(self.y,self.x)
  def eta(self):
    return -math.log(math.tan(self.theta()/2.))
  def theta(self):
    return math.atan2(math.sqrt(self.x*self.x+self.y*self.y),self.z)
  def deltaR(self,other):
    return math.sqrt((self.eta()-other.eta())**2+(self.phi()-other.phi())**2)
  def perp2(self):
    return self.x*self.x + self.y*self.y
  def perp(self):
    return math.sqrt(abs(self.perp2()))
  def et2(self):
    pt2 = self.perp2()
    return self.t*self.t * pt2/(pt2+self.z*self.z)
  def et(self):
    return math.sqrt(abs(self.et2()))
    
    
def colinear_approx(leg1,leg2,met):
  x1 = x2 = -1
  x1_numerator = leg1.Px()*leg2.Py() - leg2.Px()*leg1.Py()
  x1_denominator = leg2.Py()*(leg1.Px() + met.Px()) - leg2.Px()*(leg1.Py() + met.Py())
  if x1_denominator!=0:
    x1 = x1_numerator/x1_denominator

  x2_numerator = x1_numerator
  x2_denominator = leg1.Px()*(leg2.Py() + met.Py()) - leg1.Py()*(leg2.Px() + met.Px())
  if x2_denominator!=0:
    x2 = x2_numerator/x2_denominator

  #print x1,x2
  if (x1 > 0. and x1 < 1.) and (x2 > 0. and x2 < 1.):
    p4 = leg1*(1./x1) + leg2*(1./x2)
    return p4
  else:
    return None