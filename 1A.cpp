#include <iostream>
using namespace std;

int main() {
	long long int n,m,a, losasAncho, alto;

	cin >> n >> m >> a;

	
	if(n % a == 0){
		losasAncho = n/a;
	} else {
		losasAncho = n/a + 1;
	}

	
	if(m % a == 0) {
		alto = m/a;
	} else {
		alto = m/a + 1;
	}

	cout << losasAncho * alto << endl;
	
}