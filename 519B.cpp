#include <iostream>
using namespace std;

int main() {
	int t = 0, a = 0, b = 0, c = 0, v = 0;

	cin >> t;

	for(int i = 0; i<t; i++){
		cin >> v;
		a += v;
	}

	for(int i = 0; i<(t-1); i++){
		cin >> v;
		b += v;
	}

	for(int i = 0; i<(t-2); i++){
		cin >> v;
		c += v;
	}

	cout << a - b << endl;
    cout << b - c << endl;

}