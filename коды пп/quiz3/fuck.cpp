#include <iostream>
using namespace std;

void fun(int m){
	
	for( ; ; ){
		for(int i=2; i<=m; i++){
			if(n%i==0){
				cout<<i<<" ";
				m = m/i;
			
				break;
			}
		}
		if ( m == 1)
		break;
	}
	return ;
}

int main(){
	int m;
	cin>>m;
	fun(m);
}
