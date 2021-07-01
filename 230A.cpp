#include <iostream>
using namespace std;

int main() {
	int d, nd;

	cin >> d >> nd;

	int ddb[nd][nd];

	for(int j = 0; j < nd; j++){
		for(int i = 0; i < 2; i++){
			ddb[j][i] = 0;
		}
	}

	for(int j = 0; j < nd; j++){
		for(int i = 0; i < 2; i++){
			cin >> ddb[j][i];
		}
	}

	for(int i = 0; i < nd; i++){
		for(int j = 0; j < nd; j++){
			if(ddb[i][0] <= ddb[j][0]){
				int aux[2];
				aux[0] = ddb[i][0];
				aux[1] = ddb[i][1];

				ddb[i][0] = ddb[j][0];
				ddb[i][1] = ddb[j][1];

				ddb[j][0] = aux[0];
				ddb[j][1] = aux[1];
			}
		}
	}

	/*cout << "ORDERED" << endl;
	for(int i = 0; i < nd; i++){
		for(int j = 0; j < 2; j++){
			cout << ddb[i][j] << " "; 
		}

		cout << endl;
	}*/

	bool passed = true;
	for(int i = 0; i < nd && passed; i++){
		if(d > ddb[i][0]){
			d = d + ddb[i][1];
		} else {
			passed = false;
		}
	}

	if(passed){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}