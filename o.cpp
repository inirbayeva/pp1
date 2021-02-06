#include <iostream>
using namespace std;
int main() {
    int a, b;
    string c;
    cin >> a >> c >> b;
    if ( c == "+" ) {
        cout << a << " + " << b << " = " << a+b;
    } else if ( c == "-" ) {
        cout << a << " - " << b << " = " << a-b;
    } else if ( c == "*" ){
        cout << a << " * "<< b << " = " << a*b;
    } else { 
        cout << a << " / "<< b << " = " << a*b;
    }
    return 0;
}
