
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
 
int main () {
    double a,b;
    cin >> a >> b;
    cout << fixed << setprecision(2) << sqrt(a*a+b*b) << " " << a*b/2 << endl;
    return 0;
}
