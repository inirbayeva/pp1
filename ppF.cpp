#include <iostream>
using namespace std;
int main(){
	int even, odd, n;
	cin >> n; 
even = 0; odd = 0;
	for ( int i = 0; i < n; i++ ) {
		int f;
		cin >> f;
		if ( f % 2 ==1 )
		 even ++;
		else odd ++;
	}
		cout << odd << " " << even <<  endl;
   

     return 0;
}

