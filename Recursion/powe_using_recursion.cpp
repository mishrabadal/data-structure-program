#include <iostream>
using namespace std;
void power_calc()
{
    int a = 2, b = 10;
    int ans = 1;
    for (int i = 0; i < b / 2; i++)
    {
        ans *= a;
    }
    if (b % 2 == 0)
    {
        cout << ans * ans;
    }

    else
    {
        cout << ans * ans * a;
    }
}
int power(int a, int b)
{
    // a is number, b is power
    // base case
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    // recursive call
    int ans = power(a, b / 2);
    // if b is even

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{
    power_calc();
    return 0;
}