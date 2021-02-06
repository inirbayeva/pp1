#include <iostream>
using namespace std;

int main()
{
  int mary;
  cin >> mary;
  int i=2, m=0;
  for(;;){
    bool yram=true;
    for(int f=2; f<i; f++)
	{
      if(i%f==0){
        yram=false;
        break;
      }
    }
    if(yram)m++;
    if(m==mary)break;
    
    i++;
  }
  m=0;
  int s=2;
  while(true){
    bool yram=true;
    for(int f=2; f<s; f++){
      if(s%f==0){
        yram=false;
        break;
      }
    }
    if(yram)m++;
    if(m==i){
      cout << s;
      break;
    }
    s++;
  }
}
