#include<iostream>
using namespace std;
int main(){
   int n=17;
   int i;
  for ( i = n-1; i >=2; i--)
  {
    if(n%i==0)
    {
        cout<<"composite";
        break;
    }
  }
  if(i==2)
  {
 cout<<"PRIME";
  }
   
    return 0;
}