#include <iostream>
using namespace std;

void fun(int m){
	while (true) {
		for(int i=2; i<=m; i++){
			if(m%i==0){
				cout << i << " ";
				m = m%i;
				break;
			}
		}
		if ( m == 1)
			break;
	}
	return;
}
int main(){
	int m;
	cin>>m;
	fun(m);
}
