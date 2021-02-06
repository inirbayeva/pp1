#include <iostream>
#include <set>
#include <vector>using namespace std;

int main(){
	int m;
	cin>>m;
	
	set <string> mary;
	vector <string> yram;
	
	int s=0;
	for(int i=0; i<m; i++){
		string c;
		cin>>c;
		
		if(a.find(c)!=a.end()){
			yram.push_back(c);
			s++;
		}
		else mary.insert(c);
		
	}
	
	set<string> :: iterator it;
	if(s==0)
	cout<<"Understandable, have a great day";
	else{
		for(int i=0; i<yram.size(); i++){
			if(yram[i]!="cam") 
			cout<<yram[i]<<endl;
			for(int j=i+1; j<yram.size(); j++){
				if(yram[i]==yram[j])yram[j]="cam";
			}
		}
	
}
