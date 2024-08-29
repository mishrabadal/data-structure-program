#include <iostream>
using namespace std;
int main()
{
    int n=28, sum=0;
    for (int i = 1; i < n; i++)
    {
          if (n%i==0)
          {
            sum+=i;
          }
            
    }
    if(sum%n ==0)
    {
        cout<<n<<" PERFECT A NUMBER";
    }
    else{
          cout<<n<<" IS NOT A PERFECT NUMBER";
    }
    return 0;
}