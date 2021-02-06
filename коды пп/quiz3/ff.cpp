#include <iostream>
using namespace std;

void fun(int n, int m){
	if(n%m==0)
	{
		cout << m <<  " ";
		fun( n/m , 2);
	}
	else if(n==1)return ;
	else fun(n, m+1);
}
int main(){
	int n;
	cin>>n;
	fun(n, 2);
}
