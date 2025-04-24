#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <set>
// recursive approach
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
// top down approach
int fibon(int n, vector<int> &dp)
{
    // base case
    if (n <= 1)
        return n;
    // already calculated result
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibon(n - 1, dp) + fibon(n - 2, dp);
}

int fib(int n)
{

    vector<int> dp(n + 1, -1);
    return fibon(n, dp);
}

// bottom up approach
int fib(int n)
{
    if (n <= 1)
        return n;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
}
// space optimize
int fib(int n)
{
    if (n <= 0)
        return n;
    int prev_2 = 0, prev = 1, curr;

    for (int i = 2; i <= n; i++)
    {
        curr = prev + prev_2;
        prev_2 = prev;
        prev = curr;
    }
    return curr;
}
int main()
{

    return 0;
}