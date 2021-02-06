#include <iostream>
using namespace std;

int main(){
    string mol, mary;
    cin >>mol>> mary;
    if (mol == mary) {
        cout<< 0;
    } else if (mol.size() != mary.size()) {
        cout << "Understandable have a nice day";
    } else {
        bool ans = 0;
        int d = 0;
        for (int i = 0; i < mol.size(); i++) {
            d = i;
            int t = 0;
            bool check = 1;
            for (int j = i; j < mol.size(); j++) {
                if (mol[t++] != mary[j]) {
                    check = 0;
                    break;
                }
            }
            if (!check)
                continue;
            for (int j = 0; j < i; j++, t++) {
                 if (mol[t] != mary[j]) {
                    check = 0;
                    break;
                }
            }
            if (check) {
                ans = 1;
                break;
            }
        }
        if (ans) {
            cout<< d;
        } else {
            cout<< "Understandable have a nice day";
        }
    }
}
