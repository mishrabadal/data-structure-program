#include<iostream>
using namespace std;
int main(){
   int n=100;
   cout<<"EVEN\n";
   for (int i = 1; i <=100; i++)
   {
    if(i%2==0)
    {
        cout<<i<<" ";
    }
   }
   cout<<"\nODD\n";
     for (int i = 1; i <=100; i++)
   {
    if(i%2==1)
    {
        cout<<i<<" ";
    }
   }
   
    return 0;
}