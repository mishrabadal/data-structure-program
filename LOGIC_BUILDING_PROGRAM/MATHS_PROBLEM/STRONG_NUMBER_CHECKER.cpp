#include <iostream>
using namespace std;
int main()
{
    int n, strong, number, num, factorial;
    n = 22;
    strong = 0;
    number = n;
    while (n != 0)
    {
        num = n % 10;
        n = n / 10;
        factorial = 1;
        for (int i = num; i > 1; i--)
        {

            factorial *= i;
        }
        strong += factorial;
    }
    if (number == strong)
    {
        cout << " yes " << number << " IS  A STRONG NUMBER";
    }
    else
    {
        cout << number << " IS NOT A STRONG NUMBER";
    }
    return 0;
}