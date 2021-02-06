#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m;
    cin >>m;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];

    vector<int> ans;
    ans.push_back(a[0]);
    for (int i = 1; i < m; i++) {
        if (a[i] > ans.back()) {
            while (ans.back() < a[i]) {
                ans.pop_back();
            }
            ans.push_back(a[i]);
        } else {
            ans.push_back(a[i]);
        }
    }
    cout << ans.size();

}
