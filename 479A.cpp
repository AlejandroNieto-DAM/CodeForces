#include <iostream>
using namespace std;

int main() {
	int n[3];

	n[0] = 0;
	n[1] = 0;
	n[2] = 0;

	cin >> n[0];
	cin >> n[1];
	cin >> n[2];

	int sol = 0, sum = 0;
	for(int i = 0; i < 4; i++){
		if(i == 0){
			sum = n[0] + n[1] + n[2];
		} else if(i == 1){
			sum = n[0] * (n[1] + n[2]);
		} else if(i == 2){
			sum = (n[0] + n[1]) * n[2];
		} else if(i == 3){
			sum = n[0] * n[1] * n[2];
		}

		//cout << i << " " << sum << endl;
		if(sum > sol){
			sol = sum;
		}
	}

	cout << sol << endl;


}