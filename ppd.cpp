#include <iostream>
using namespace std;
int main() {
    int n, k, a, b;
    cin >> n >> k;
    b=n*2;
    a=b/k;
    if ((((n%2 == 0) && (k%2 == 0)) || ((n%2 != 0) && (k%2 != 0))) && (k!=b)) {
        if (a%10 != 0){
        a++;
        cout << a;        
        } else if (a%10 == 0) {
        cout << a;
        }
    }
    else if ((((n%2 != 0) && (k%2 == 0)) || ((n%2 == 0) && (k%2 != 0))) && (k!=b)) {
        cout << a;
    }
    else if (k == b){
    a++;
    cout << a;    
    }
    return 0;
}
