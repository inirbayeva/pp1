#include <iostream>

using namespace std;

int main(){
    int a[7], b[] = {1, 2, 5, 10, 20, 50, 100};
    for (int i = 0; i < 7; i++)
        cin >> a[i];
    int n;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++)
        cin >> m[i];
    for (int i = 0; i < n; i++) {
        int old[7];
        for (int j = 0; j < 7; j++)
            old[j] = a[j];
        for (int j = 6; j >= 0; j--) {
            if (old[j] > 0) {
                while(m[i] >= b[j] && old[j] > 0) {
                    old[j]--;
                    m[i] -= b[j];
                }
            }
        }
        if (m[i] == 0) {
            cout << "Transaction accepted!\n";
            for (int j = 0; j < 7; j++)
                a[j] = old[j];
        }
        else {
            cout << "Transaction stopped!\n";
        }
    }
}
