#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	ifstream fin("out.csv");
	
	char chars[500];
	
	double a, b, c, d;
	
	while (!fin.eof()){
		fin.getline (chars,500);
		string str = chars;
		
		if (str.length() > 0) {
			bool hasa = false;
			for (int i = 0; i < str.length(); ++i){
				if (str[i] == 'a'){
					hasa = true;
					break;
				}
			}
				 
			if (!hasa){
				stringstream ss (stringstream::in | stringstream::out);
				ss << str;
				ss >> a >> b >> c >> d;
				cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << endl;
				
			}
		}
	}
	return 0;
}