#include <iostream>
#include <set>
using namespace std;

int main(){
  int mary;
  cin>>mary;
  int i=2, m=0;
  for(;;)
  {
    bool yram=true;
    for(int f=2; f<i; f++){
      if(i%f==0){
        yram=false;
        break;
      }
    }
    if(yram)m++;
    if(m==yram)
	break;
    i++;
  }
  m=0;
  int some=2;
  while(true){
    bool yram=true;
    for(int f=2; f<some; f++){
      if(some%f==0){
        yram=false;
        break;
      }
    }
    if(yram)m++;
    if(m==i){
      cout<<some;
      break;
    }
    some++;
  }

