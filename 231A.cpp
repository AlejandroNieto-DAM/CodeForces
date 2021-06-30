#include <iostream>
using namespace std;

int main(){
	int p, u1, u2, u3;
	int totalP = 0;
	cin >> p;
	for(int i = 0; i < p; i++){
		cin >> u1 >> u2 >> u3;

		int temp = u1 + u2 + u3;
		if(temp >= 2){
			totalP++;
		}
	}

	cout << totalP << endl;
}