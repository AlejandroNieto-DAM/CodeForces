#include <iostream>
using namespace std;

int main() {
	int c;

	cin >> c;

	int angles[c];

	for(int i = 0; i<c; i++){
		cin >> angles[i];
	}

	for(int i = 0; i<c; i++){
		int anguloE = 180 - angles[i];
		if(360 % anguloE == 0){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}