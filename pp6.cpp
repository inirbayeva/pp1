#include <iostream>

using namespace std;

int main (){
	int n, max;
	cin >> n;
	int arr[n];
	cin >> arr[0];
	max = arr[0];
	for( int i = 1 ; i < n ; i++){
		cin >> arr[i];
		if(arr[i] >= max) max = arr[i];
	}
	cout << max;
}
