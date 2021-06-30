#include <iostream>
#include <string>
#include <locale>         // std::locale, std::tolower

using namespace std;

int main(){
	string w;
	locale loc;
	cin >> w;

	

	for(int i = 0; i < w.length(); i++){
		w[i] = tolower(w[i],loc);
	}


	//cout << w << endl;
	string solution = "";
	string val = ".";
	for(int i = 0; i < w.length(); i++){
		
		if(w[i] != 'a' && w[i] != 'e' && w[i] != 'i' && w[i] != 'y' && w[i] != 'o' && w[i] != 'u'){
			solution += val + w[i];
		}
	}

	cout << solution << endl;

}