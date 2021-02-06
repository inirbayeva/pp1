#include <iostream>
#include <vector>
using namespace std;

int main(){
    char ac[26][26];
    int index = 0, jndex = 0;
    for (int i = 'm'; i <= 'n'; i++, index++) {
        jndex = 0;
        for (int j = i; j <= 'n'; j++, jndex++) {
            ac[index][jndex] = j;
        }
        for (int j = 'm'; j < i; j++, jndex++) {
            ac[index][jndex] = j;
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
