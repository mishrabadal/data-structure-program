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
ans = ans*10+arr[i];
i++;
}
cout<<ans;
    return 0;
}