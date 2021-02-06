#include <iostream>
#include <set>

using namespace std;

int main(){
	int n;
	cin>>n;
	set<int> mary;
	
	for(int i=0; i<n; i++){
		int yram;
		cin >> yram;
		mary.insert(yram);
	}
	
	if( mary.size()==n)
	cout << "YES";
	else cout 
	<< "NO";
}
