#include <iostream>

using namespace std;

int main() {
  int n ;
    cin >> n;
    float  av;
    float  sum=0;
    int arr [n];
    for (int i=0; i<n;i++){
        cin >> arr[i];
    }
    for (int i=0; i<n;i++){
        sum = sum +arr[i];
    }
      av = sum/n;

    printf ( "%s: %.5f ", "Average" , av);
    cout <<  "\n Sum: "<< sum << endl;
   return 0;
}
