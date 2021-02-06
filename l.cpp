#include <iostream>

using namespace std;

int main() {
   int time = 0;
   int hours=0;
   int minutes=0;
   int seconds=0;
   cin>>time;
   
   hour = time/3600;
   time=time%3600;
   
   minute=time/60;
   time=time%60;
   
   seconds=time;
   
   cout << hours<<":"<<minutes<<":"<<seconds<<endl;
   
   
   return 0;
}
