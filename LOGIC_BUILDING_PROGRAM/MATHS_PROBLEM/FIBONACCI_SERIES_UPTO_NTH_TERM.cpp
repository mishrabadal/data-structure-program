#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
   int x =0;
   int y=1;
   int z=0;
   cout<<"FIBONACCI SERIES ARE : ";
   while (z<=n)
   {
    cout<<z<<"  ";
    x=y;
    y=z;
    z=x+y;
   }
   

    return 0;
}