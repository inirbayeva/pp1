#include <iostream>
using namespace std;
int main(){
    int k; 
	cin >> k;
    int mink; 
	cin >> mink;
    int maxk = mink;
    for (int i = 0; i < k-1; i++){
        int x; cin >>x;
        if (x < mink) mink = x;
        if (x > maxk) maxk = x;
    }
    cout<<maxk-mink+1-k;
    return 0;
}
