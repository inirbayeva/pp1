#include <iostream>
#include <vector>

using namespace std;

int main(){
    char ac[26][26];
    int mary = 0, mol = 0;
    for (int i = 'a'; i <= 'z'; i++, mary++) {
        mol = 0;
        for (int j = i; j <= 'z'; j++, mol++) {
            ac[mary][mol] = j;
        }
        for (int j = 'a'; j < i; j++, mol++) {
            ac[mary][mol] = j;
        }
    }
    string s, cipher, ans = "";
    cin >> s >> cipher;
    int t = 0;
    for (int i = 0; i < s.size(); i++) {
        ans += ac[(cipher[t] - 'a')][s[i] - 'a'];
        t++;
        if (t == cipher.size())
            t = 0;
    }
    cout << ans;
}
