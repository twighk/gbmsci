void mlpsetup(TTree *tree, Int_t ntrain=100){
	if (!gROOT->GetClass("TMultiLayerPerceptron")) {
		gSystem->Load("libMLP");
	}
	
	TMultiLayerPerceptron *mlp = 
	new TMultiLayerPerceptron("@types:ntypes-1:type1,type2,type3",
							  tree,
							  "Entry$%2",
							  "(Entry$+1)%2");
	
	mlp->Train(ntrain, "text,graph,update=10");
	mlp->Export("mlp","C++");
}