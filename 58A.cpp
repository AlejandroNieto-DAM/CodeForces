#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string w;
	bool hf = false, ef = false, lf1 = false, lf2 = false, of = false;
	bool finded = false;
	cin >> w;

	char wordF [5];
	wordF[0] = 'h';
	wordF[1] = 'e';
	wordF[2] = 'l';
	wordF[3] = 'l';
	wordF[4] = 'o';

	int util = 0;
	// hhheeellloou
	if(w.length() > 1){
		for(int i = 0; i < w.length(); i++){
			if(wordF[util] == w[i]){
				util++;
				if(util == 5){
					finded = true;
				}
			}
		}
	}

	if(util == 5){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}


}