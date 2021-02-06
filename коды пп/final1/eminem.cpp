#include <iostream>
#include <set>
using namespace std;

int main(){
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string s;
        cin >>s;
    }
    set<string> ans;
    cin >> m;
    string ingr[m][2];
    for (int i = 0; i < m; i++)
        cin >> ingr[i][0] >> ingr[i][1];
    string our;
    cin >> our;
    for (int i = 0; i < m; i++) {
        if (ingr[i][0] == our) {
            if (ingr[i][1] != our)
                ans.insert(ingr[i][1]);
        } else if(ingr[i][1] == our) {
            if (ingr[i][0] != our)
                ans.insert(ingr[i][0]);
        }
    }
    cout << ans.size() << endl;
    for (string s : ans)
        cout << s << ' ';
}
