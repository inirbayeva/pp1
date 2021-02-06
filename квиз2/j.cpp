#include <iostream>

using namespace std;

int main(){
  string s;
  cin>>s;
  int k,m;
  cin>>k>>m;
  char a[k][m];
  for(int i=0; i<k; i++){
    for(int j=0; j<m; j++){
      a[i][j]='X';
    }
  }
  int x=0,y=0;
  for(int i=0; i<s.size()+1; i++){
    a[x][y]='*';
    if(s[i]=='D')x=x+1;
    else if(s[i]=='U')x=x-1;
    else if(s[i]=='R')y=y+1;
    else y=y-1;
  }
  
  for(int i=0; i<k; i++){
    for(int j=0; j<m; j++){
      cout<<a[i][j];
    }
    cout<<endl;
  }
  return 0;
}
