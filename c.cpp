#include <iostream>
using namespace std;
int main() {
  string m;
  cin >> m;
  int max = 0, n = m.length();
  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      int count = 0;
      for(int k = i; k <= j; k++, count++){
        if(a[k] != a[j - count]){
          if(max < j - i + 1){
            max = j - i + 1;
          }
          break;
        }
      }
    }
  }
  cout << max;
}
