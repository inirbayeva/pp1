#include <iostream>

using namespace std;

int main() {
  int n;
  cin>>n;
  
 int m=n/100;
 int e=(n/10)%10;
 int r=n%10;
 cout<<m+e+r<<endl;

return 0;
}
