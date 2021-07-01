#include <iostream>
using namespace std;

int main(){
	int nh, nt;

	cin >> nh >> nt;

	int t[nt];
	int h[nh];

	for(int i = 0; i < nh; i++){
		h[i] = i + 1;
	}

	for(int i = 0; i < nt; i++){
		cin >> t[i];
	}

	long long int c = t[0] - 1;
	int last = t[0];
	for(int i = 0; i < nt; i++){
		if(t[i] != last){
			if(t[i] > last){
				c += (t[i] - last); 
			} else if(t[i] < last){
				c += (nh - (last - t[i]));
			}
		}

		last = t[i];
	}


	cout << c << endl;


}