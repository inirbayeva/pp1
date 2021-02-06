#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++)
        cin >> m[i];

    vector<int> ans;
    ans.push_back(m[0]);
    for (int i = 1; i < n; i++) {
        if (m[i] > ans.back()) {
            while (ans.back() < m[i]) {
                ans.pop_back();
            }
            ans.push_back(m[i]);
        } else {
            ans.push_back(m[i]);
        }
    }
    cout << ans.size();

}
