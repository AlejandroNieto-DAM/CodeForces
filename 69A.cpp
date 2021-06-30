#include <iostream>
using namespace std;

int main(){

	int n;

	cin >> n;

	int value = 0;
	int sumX = 0;
	int sumY = 0;
	int sumZ = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> value;
			if(j == 0){
				sumX += value;
			} else if(j == 1){
				sumY += value;
			} else {
				sumZ += value;
			}
		}
			
	}

	if(sumX == 0 && sumY == 0 && sumZ == 0){
		cout << "YES" << endl;
	} else { 
		cout << "NO" << endl;
	}
}