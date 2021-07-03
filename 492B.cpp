#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, l;

	cin >> n >> l;

	int locations[n];

	for(int i = 0; i < n; i++){
		cin >> locations[i];
	}

	sort(locations, locations + n);

	double maxV = 0;
	
	int max0 = 0;
	int maxN = 0;
	
	if(locations[0] != 0){
		max0 = locations[0];
	}

	if(locations[n - 1] != l){
		maxN = l - locations[n - 1];
	}

	if(max0 >= maxN){
		maxV = max0;
	} else {
		maxV = maxN;
	}


	for(int i = 0; i < n - 1; i++){
		if(((locations[i + 1] - locations[i])/2.0) > maxV){
			maxV = ((locations[i + 1] - locations[i]) / 2.0);
		}
	}



	cout << fixed << maxV << endl;

}