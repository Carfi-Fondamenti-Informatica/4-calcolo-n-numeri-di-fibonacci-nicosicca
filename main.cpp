#include <iostream>
using namespace std;

int main() {
   int n,t=1,ts=0,td=1;
   cin>>n;
   
   if(n>=2)
   {
      for(int i=0;i<n;i++)
      {
         cout<<t<<endl;
         
         t=ts+td;
         ts=td;
         td=t;
      }
   }
   else
      cout<<"errore"<<endl;
   
   return 0;
}
