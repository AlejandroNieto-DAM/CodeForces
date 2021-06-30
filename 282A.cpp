#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n;

	cin >> n;

	string instrucciones[n];

	for(int i = 0; i < n; i++){
		cin >> instrucciones[i];
	}


	int contadorS = 0;
	int contadorR = 0;
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < instrucciones[i].length() - 1; j++){
			if((instrucciones[i][j] == '+') && (instrucciones[i][j + 1] == '+')){
				contadorS++;
			}

			if((instrucciones[i][j] == '-') && (instrucciones[i][j + 1] == '-')){
				contadorR++;
			}
		}
		

		
	}


	cout << contadorS - contadorR << endl;

}