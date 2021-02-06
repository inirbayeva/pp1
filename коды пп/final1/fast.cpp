#include <iostream>
#include <vector>
using namespace std;

int getReverse(int m) {
    int ans = 0;
    while (m >0) {
        ans *= 10;
        ans += (m % 10);
        m /= 10;
    }
    return ans;
}

void solve() {
    int m, mary;
    cin >>m>> mary;
    cout << getReverse(getReverse(m) + getReverse(mary)) << endl;
}

int main(){
    int T;
    cin >> T;
    while(T-- != 0)
        solve();
}
