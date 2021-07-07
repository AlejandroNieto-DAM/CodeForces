#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int searchGreater(int arr[], int low, int high, int target) {
	while (low != high) {
	    int mid = (low + high) / 2;
	    if (arr[mid] <= target) {
	        low = mid + 1;
	    }
	    else {
	        high = mid;
	    }
	}

	return low -1;
}

int main() {
	int s = 0, b = 0;

	cin >> s;

	int prices[s];

	for(int i = 0; i < s; i++){
		cin >> prices[i];
	}

	sort(prices, prices + s);


	cin >> b;

	int aux = 0, sum = 0;
	int wcb[b];
	for(int i = 0; i < b; i++){
		cin >> aux;; 

		wcb[i] = searchGreater(prices, 0, s, aux) + 1;
	}

	for(int i = 0; i < b; i++){
		cout << wcb[i] << endl;
	}

}