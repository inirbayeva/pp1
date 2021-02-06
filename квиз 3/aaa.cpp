#include <iostream>
using namespace std;

int fun(int m){
	int i=2, sum = 0;
	while(true){
		bool f = false;
		for( int j=2; j<i; j++){
			if( i%j==0 ){
				f = true;
				break;
			}
		}
		if(f == false){
			sum++;
		}
		
		if(sum==m){
			return i;
		}
		i++;
	}
}
int main(){
	int m;
	cin>>m;
	cout<<fun(m);
}
