#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER Nth TERM  : ";
    cin>>n;
   int x =0;
   int y=1;
   int z=0;
  
   int j =1;
   while (j<n)
   {
   // cout<<z<<"  ";
    x=y;
    y=z;
    z=x+y;
    j++;
   }
   cout<<endl;
    cout<<n<<"th terms of fibonacci series is "<<z;

    return 0;
}