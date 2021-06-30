#include <iostream>
using namespace std;

int main() {
	int g = 0; 
	int tc = 0;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
	int n = 0;

	cin >> g;

	for(int i = 0; i < g; i++){
		cin >> n;

		if(n == 4){
			c4++;
		} else if(n == 3){
			c3++;
		} else if(n == 2){
			c2++;
		} else if(n == 1){
			c1++;
		}

	}

	//cout << c4 << " " << c3 << " " << c2 << " " << c1 << endl; 

	tc = c4;
	c4 = 0;

	if(c3 > 0 && c1 > 0){
		do{
			tc++;
			c3--;
			c1--;
			//cout<< "entro" << endl;
		} while(c3 > 0 && c1 > 0);
	}

	while(c3 > 0){
		tc++;
		c3--;
	}

	//cout << c4 << " " << c3 << " " << c2 << " " << c1 << endl; 


	if(c2 >= 2){
		do {
			tc++;
			c2 = c2 - 2;
		} while (c2 >= 2);
	}

	if(c2 > 0 && c1 >= 2){
		do {
			tc++;
			c2--;
			c1 -= 2;
		} while(c1 >= 2 && c2 > 0);
	}

	if(c2 > 0 && c1 > 0){
		do {
			tc++;
			c2--;
			c1--;
		} while(c1 > 0 && c2 > 0);
	}

	while(c2 > 0) {
		tc++;
		c2--;
	}

	//cout << c4 << " " << c3 << " " << c2 << " " << c1 << endl; 

	if(c1 >= 4){
		do{
			tc++;
			c1 -= 4;
		} while(c1 >= 4);
	}

	if(c1 > 0) {
		tc++;
	}
	
	//cout << c4 << " " << c3 << " " << c2 << " " << c1 << endl; 


	cout << tc << endl;


}