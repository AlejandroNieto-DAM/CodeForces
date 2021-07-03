#include <iostream>

using namespace std;

int main(){
	int n, c;

	cin >> n >> c;

	int h[n - 1];

	for(int i = 0; i < (n - 1); i++){
		cin >> h[i];
	}


	bool can = false;
	bool passed = false;

	long long int nextPortal =  h[0];

	for(long long int i = 0; i < (n) && passed == false && can == false; i++){
		
		if(i == nextPortal){
			if(nextPortal < (c - 1)){
				nextPortal = h[i] + i;
			}
			if(c == (nextPortal + 1)) {
				can = true;
			}	
		}

	}

	if(can){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}