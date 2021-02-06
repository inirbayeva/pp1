#include <iostream>
using namespace std;


int lp(int n){
    int cnt = 0;
    for ( int i = 0; i < 1000 ; i++){
        if ( i%2==0  || i%3==0 || i%5==0 || i%7==0 ){
            continue;
        }
        else 
		{
            cnt++;
        }
    }
return cnt;
}

int main (){
int n;
cin >> n;
cout << lp(n);
return 0;
}
