#include <iostream>
using namespace std;

int main(){
    int p;
    cin >> p;
    if( p > 2){
	    if(p % 2 == 0){
	    	cout << "YES";
	    } else {
	    	cout << "NO";
	    }
	} else {
		cout << "NO";
	}
}