#include <iostream>
#include <string>
using namespace std;

bool isLucky(int n) {
	string ns = to_string(n);

	bool okN = true;
	for(int i = 0; i < ns.length() && okN == true; i++){
		if(ns[i] != '4' && ns[i] != '7'){
			okN = false;
		} else { 
			okN = true;
		}
	}

	return okN;
}

int main() {
	int n;

	cin >> n;


	if(isLucky(n)){
		cout << "YES" << endl;
	}  else { 
		bool okN = false;
		for(int i = 0; i < n && okN == false; i++){
			if(isLucky(i) && n % i == 0){

				okN = true;
			}
		}

		if(okN){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}


}