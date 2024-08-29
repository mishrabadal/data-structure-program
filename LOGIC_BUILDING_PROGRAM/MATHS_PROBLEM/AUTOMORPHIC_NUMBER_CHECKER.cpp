#include <iostream>
using namespace std;
int total_zero(int n)
{
    int length = 0;
    while (n != 0)
    {
        n = n / 10;
        length++;
    }

    int total_zero = 1;
    for (int i = 0; i < length; i++)
    {
        total_zero *= 10;
    }
    return total_zero;
}
int main()
{
    // automorphic numbers are : 5,6,76,376
    int n = 376;
    int square = n * n;
    int divide_number = total_zero(n);
    int last_digit = square % divide_number;
    if (last_digit == n)
    {
        cout <<n << " YES automorphic number";
    }
    else
    {
        cout  <<n << "no automorphic number";
    }

    return 0;
}