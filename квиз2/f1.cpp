#include <iostream>
using namespace std;

int main() {
 int array[200][200], 
 k, m, x, num = 0;
 cin >>k>>m>>x;
 for (int i = 0; i < k; i++) {
  for (int j = 0; j < m; j++) {
   cin >> array[i][j];
  }
 }

 for (int i = 0; i < k; i++) {
  for (int j = 0; j < m; j++) {
   if (array[i][j] == x) {
    num++;
    break;
   }
  }
 }
 cout << num;
 return 0;
}
