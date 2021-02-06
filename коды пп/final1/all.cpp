#include <iostream>
using namespace std;

int main(){
    int mary[7], mol[] = {1, 2, 5, 10, 20, 50, 100};
    for (int i = 0; i < 7; i++)
        cin >> mary[i];
    int n;
    cin>>n;
    int m[n];
    for (int i = 0; i < n; i++)
        cin>>m[i];
    for (int i = 0; i < n; i++) {
        int old[7];
        for (int j = 0; j < 7; j++)
            old[j] = mary[j];
        for (int j = 6; j >= 0; j--) {
            if (old[j] > 0) {
                while(m[i] >= mol[j] && old[j] > 0) {
                    old[j]--;
                    m[i] -= mol[j];
                }
            }
        }
        if (m[i] == 0) {
            cout<< "Transaction accepted!\n";
            for (int j = 0; j < 7; j++)
                mary[j] = old[j];
        }
        else {
            cout<< "Transaction stopped!\n";
        }
    }
}
