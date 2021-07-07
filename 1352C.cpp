#include <iostream>
using namespace std;

int main() {
	long int n, k;
	int t;

	cin >> t;

	int sol[t];
	for(int i = 0; i < t; i++){
		cin >> n >> k;

		long int c = k / (n - 1);
		int r = k % (n - 1);
		long int number = 0;

		number = n * c + r;

		if(r == 0){
			number--;
		}

		sol[i] = number;
	}

	

	for(int i = 0; i < t; i++){
		cout << sol[i] << endl;
	}
	
}