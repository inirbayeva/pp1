#include <iostream>
#include <set>
using namespace std;

int main(){
	int m;
	cin >> m;
	set <int> s;
	for(int i=0; i<m; i++){
		int k;
		cin>>k;
		s.insert(k);
	}
	
	if(s.size()==m)cout<<"YES";
	else cout<<"NO";
}
   
