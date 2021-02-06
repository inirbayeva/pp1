#include <iostream>
#include <set>
using namespace std;



bool fun(int mary){
  int i=0, m=mary;
  set <int> white;
    for(;;){
      white.insert(m%10);
        m/=10; i++;
        if(m==0)
		break;
    }
    
	if(i!=white.size()){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int mol,meir;
    cin>>mol>>meir;
    bool troo=true;
    for (int i = mol; i <= meir; i++)
    {
        if(fun(i)==true){
            cout<<i;
            troo=false;
            break;
        }
    }
    
    if(troo==true)
	cout  << "Understandable, have a great day";
    return 0;
}
