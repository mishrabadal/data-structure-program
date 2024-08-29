#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    double x;
    cout<<"ENTER A NUMBER : ";
    cin>>x;
   
    for (int i = 1; i <= 5; i++)
    {
        cout<<"x power "<<i<<" is : " <<pow(x,i);
        cout<<endl;
    }
    
   
    return 0;
}