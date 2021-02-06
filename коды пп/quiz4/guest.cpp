#include <iostream>
#include <set>
using namespace std;

int main(){
    int mary;
    cin >> mary;
    multiset<int> ms;
    for(int i=0; i<mary; i++){
      int m;
      cin>>m;
      ms.insert(m);
    }
    
    int yram;
    cin >> yram;
    for(int i=0; i<yram; i++){
      int m;
      cin>>m;
      ms.insert(m);
    }
    
    multiset<int>:: 
	iterator it;
    for(it= ms.begin(); it!=ms.end(); it++){
      cout<<*it<<" ";
    }
}
