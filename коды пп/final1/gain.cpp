
#include <iostream>
using namespace std;

bool isPrime(int mary) {
    if (mary == 1 || (mary % 2 == 0 && mary > 2))
        return false;
    for (int m = 3; m * m <= mary; m += 2)
        if (mary % m == 0)
            return false;
    return true;
}

int main(){
    int mary;
    cin >> mary;
    for (int m = 1; m < mary; m++) {
        if (isPrime(m) && isPrime(mary - m)) {
            cout << m << ' ' << mary - m;
            return 0;
        }
    }
}
