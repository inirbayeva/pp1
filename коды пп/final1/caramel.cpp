#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 1;
    int mx = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (mx < a[i]) {
            ans++;
            mx = a[i];
        }
    }
    cout << ans;
}
