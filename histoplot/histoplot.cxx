using namespace std;

int histoplot(){
	gROOT->Reset();
	string path = "../root/";
	cout << "\nPath Set to " << path << endl;
	vector<string> channels;
	channels.push_back("AH115");
	channels.push_back("AH115bb");
	channels.push_back("AH160");
	channels.push_back("AH160bb");
	channels.push_back("TTplusJets");
	channels.push_back("WplusJets");
	channels.push_back("Zbb");
	channels.push_back("Zcc");
	channels.push_back("ZplusJets");
	cout << "\nAvailable Channels:" << endl;
	
	for (int i = 0; i < channels.size(); i++) {
		cout << "[" << i << "] " << channels[i] << endl;
	}
	int channel1, channel2;

	cout << "\nChoose first channel: ";				cin >> channel1;
	cout << "Choose second channel: ";				cin >> channel2;

	TFile* f1 = new TFile( (path+channels[channel1]+".root").c_str() );
	TFile* f2 = new TFile( (path+channels[channel2]+".root").c_str() );
	TTree* t1 = (TTree*)f1->Get("bbAHCutTree");
	TTree* t2 = (TTree*)f2->Get("bbAHCutTree");
	
	string varstring, bins, min, max;
	cout << "Enter variable string: ";				cin >> varstring;
	cout << "Histogram bins: ";						cin >> bins;
	cout << "Histogram min: ";						cin >> min;
	cout << "Histogram max: ";						cin >> max;
	
	
	
	t1->Draw( (varstring+">>hist1("+bins+","+min+","+max+")").c_str());
	t2->Draw( (varstring+">>hist2("+bins+","+min+","+max+")").c_str());

	
	TH1F* hist1 = (TH1F*) gDirectory->Get("hist1");
	TH1F* hist2 = (TH1F*) gDirectory->Get("hist2");

	TCanvas* can = new TCanvas("Result","Result");
	can->cd();
	
	Float_t count1, count2;
	count1 = hist1->GetBinContent(hist1->GetMaximumBin());
	count2 = hist2->GetBinContent(hist1->GetMaximumBin());
	if (count1 >= count2){
		hist1->Draw();
		hist2->Draw("same");
	} else {
		hist2->Draw();
		hist1->Draw("same");
	}


	
	
	
	gROOT->ProcessLine("TBrowser a");


	
	return 1;
}