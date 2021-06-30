#include <iostream>
using namespace std;
 
int main() { 
	int n, k;
	
	

	cin >> n >> k;

	int scores[n];

	for(int i = 0; i < n; i++){
		cin >> scores[i];
	}
	
	int counter = 0;
	for(int i = 0; i < n; i++){
		int v = scores[i];
		int v2 = scores[k - 1];
		if(v >= v2 && scores[i] > 0){
			counter++;
		}
	}


	cout << counter << endl;
}