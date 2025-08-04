#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int x = 0, y = 1, z = 0;
    if (n < 2)
        return n;
    for (int i = 1; i < n; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return z;
}

int fibs(int n)
{
    if (n == 0 || n == 1)
        return n;

    return fibs(n - 1) + fibs(n - 2);
}
int fib(int n)
{
    return fibs(n);
}
int main()
{

    return 0;
}