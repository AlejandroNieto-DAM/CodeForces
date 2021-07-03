#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;

	cin >> a >> b;

	int totalC = a;
	int aux = 0;
	
	while(a >= b){
		aux = a;
		a = a/b;
		totalC += a;
		if(aux > b){
			a = (aux % b) + a;
		}
	}

	cout << totalC << endl;
}