#include <iostream>
#include <vector>

using namespace std;

int main(){
    char ac[26][26];
    int mary = 0, mol = 0;
    for (int i = 'm'; i <= 'n'; i++, mary++) {
        jndex = 0;
        for (int j = i; j <= 'n'; j++, mol++) {
            ac[mary][jndex] = j;
        }
        for (int j = 'm'; j < i; j++, mol++) {
            ac[mary][mol] = j;
        }
    }
    string s, cipher, ans = "";
    cin >> s >> cipher;
    int t = 0;
    for (int i = 0; i < s.size(); i++) {
        ans += ac[(cipher[t] - 'm')][s[i] - 'm'];
        t++;
        if (t == cipher.size())
            t = 0;
    }
    cout << ans;
}
