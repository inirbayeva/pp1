#include <iostream>
using namespace std;

void f(int m, int v){
	if(m%v==0){
		cout << v <<" ";
		f(m/v, 2);
	}
	else if(m==1)
		return;
	else f(m, v+1);
}

int main(){
	int m;
	cin>>m;
	f(m, 2);
}
