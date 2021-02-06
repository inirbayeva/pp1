#include <iostream>

using namespace std;

int main() {
   int a,b,c;
   cin >> a>>b>>c;
   if (c==a/b){
   cout << "Usual division: "<<" "<<c;
   
   } else if (c==a%b){
   	cout << "Division without remainder: "<<" "<<c;
   	
   }
   int d;
   cin>>d;
    if (d==a%b) {
    	cout <<"Remainder: "<<" "<<d;
    }
   return 0;
}
