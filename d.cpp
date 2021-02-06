#include <iostream>

using namespace std;

int main() {
  int a,b;
  cin>>a>>b;
  float c=a/b;
  cout << "Usual division: "<<c<<endl;
  int d=a/b;
  cout << "Division without remainder: "<<d<<endl;
  int f=a%b;
  cout << "Remainder: "<<f<<endl;
  
   return 0;
}
