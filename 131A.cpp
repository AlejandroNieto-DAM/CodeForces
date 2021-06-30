#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main(){
	string w;
	locale loc;

	cin >> w;

	bool wOk = true;
	bool caps = false;

	for(int i = 1; i < w.length(); i++){
		if(w[i] != tolower(w[i],loc)){
			caps = false;
		}

		if(caps = true){
			if(w[i] == tolower(w[i],loc)){
				wOk = false;
			}
		}
	}

	bool onlyCaps = true;
	for(int i = 0; i < w.length(); i++){
		if(w[i] != toupper(w[i],loc)){
			onlyCaps = false;
		}
	}

	if(onlyCaps){
		for(int i = 0; i < w.length(); i++){
			w[i] = tolower(w[i],loc);
		}

	} else if(wOk){
		for(int i = 0; i < w.length(); i++){
			w[i] = tolower(w[i],loc);
		}

		w[0] = toupper(w[0], loc);
	}
	

	cout << w << endl;

}