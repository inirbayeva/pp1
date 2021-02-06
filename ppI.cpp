#include <iostream>
#include <string>
using namespace std;
main(){
int n, sum = 0;
string strNumb;
cin >> n;
for( int i = 0 ; i < n ; i++ ){
cin >> strNumb;
for ( int j = 0 ; j < strNumb.size() ; j++ )
if(strNumb[j] == '0')
sum++;
}
cout << sum;
}
