#include <iostream>

using namespace std;

int main (){
	int n, k;
	cin >> k >> n;
	if ( k % n > 0 ) {
		cout << (k / n) * 2 + 2;
	}
	else{
	cout << (k / n) * 2;
	} 
	return 0;
}
