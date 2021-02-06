#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	set <string> m;
	vector <string> b;
	int s=0;
	while( int i=0; i<n; i++){
		string c;
		cin>>c;
		
		if( m.find(c) != m.end ())
		{
			b.push_back(c);
			s++;
		}
		else m.insert(c);
		
	}
	
	set<string> :: iterator it;
	if(s==0)cout<<"Understandable, have a great day";
	else{
		while(int i=0; i<b.size(); i++){
			if(b[i]!="nett") cout<<b[i]<<endl;
			while(int j=i+1; j<b.size(); j++){
				if(b[i]==b[j])b[j]="nett";
			}
		}
	}
}
