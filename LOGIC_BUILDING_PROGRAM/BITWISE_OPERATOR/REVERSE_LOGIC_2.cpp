#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int arr[]={1,2,3};
int i=0;
int ans =0;
while(i<3)
{
ans =  arr[i]*pow(10,i)+ans;
i++;
}
cout<<ans;
    return 0;
}