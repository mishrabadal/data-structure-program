#include <iostream>
using namespace std;
#include <math.h>

bool prime_number()
{
    int n = 9;

    for (int i = n - 1; i >= 2; i--)
    {
        if (n % i == 0)
        {
            cout << "composite number";
            return 0;
        }
    }
    cout << "Yes prime";
    return 1;
}

void reverse()
{
    int n = 234;
    int rev = 0;
    while (n > 0)
    {
        rev = n % 10 + rev * 10;
        n = n / 10;
    }
    cout << rev;
}

void sum()
{
    int n = 234;
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout << sum;
}

void fibonacci()
{
    int n = 10;
    int x = 0, y = 1;
    int z = 0;
    while (z <= n)
    {
        cout << z << " ";
        x = y;
        y = z;
        z = x + y;
    }
}

void leap_year_checker()
{
    int year = 2020;
    if (year % 400 == 0)
        cout << "leap year";

    if (year % 100 == 0)
        cout << "not leap year";

    if (year % 4 == 0)
        cout << "yes leap year";

    else
        cout << "not leap year";
}

// C++ program to print all prime factors
// A function to print all prime
// factors of a given number n
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
}

/* Driver code */

// make number from array
void make_num()
{
    int num[] = {1, 9, 3, 4};
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans = ans * 10 + num[i];
    }
    cout << ans;
}
int main()
{
    int a = 2, b = 5, c = 8, d = 3;
    int ans;
    ans = a * 10 + b;
    ans = ans * 10 + c;
    ans = ans * 10 + d;
   make_num();

    return 0;
}
