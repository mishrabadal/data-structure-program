#include <iostream>
using namespace std;
int main()
{
    int n;
    int flag =0;
    cout << "\nENTER THE NUMBER  : ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << n << " is not prime nor composite number";
        flag=1;
    }
    else
    {
        for (int i = n-1; i>=2; i--)
        {
            if (n % i == 0)
            {
               cout << n << " is composite number";
               
                flag=1;
                 break;
            }
           
        }
    }
   
    if(flag==0)
    {
       cout << n << " is prime number";
    }
    return 0;
}