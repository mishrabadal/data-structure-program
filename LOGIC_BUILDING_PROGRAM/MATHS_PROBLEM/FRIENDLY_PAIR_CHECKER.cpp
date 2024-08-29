#include <iostream>
using namespace std;
int main()
{
   // int n1 = 16, n2 = 28;
     int n1 = 80, n2 = 200;
    int sum = 0;
    int sum_first, sum_second;

    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            sum += i;
        }
    }
    sum_first = sum;

    sum = 0;
    for (int i = 1; i <= n2; i++)
    {
        if (n2 % i == 0)
        {
            sum += i;
        }
    }
    sum_second = sum;
 
    if (sum_first / n1 == sum_second / n2)
    {
        cout << " YES " << n1 << " AND " << n2 << " ARE FRIENDLY PAIR NUMBER";
    }
    else
    {
        cout << " NO " << n1 << " AND " << n2 << " ARE NOT FRIENDLY PAIR NUMBER";
    }
    return 0;
}