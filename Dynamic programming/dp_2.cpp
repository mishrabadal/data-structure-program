#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// recursive approach
int count(int i, int n)
{
    if (i == n)
        return 1;
    if (i > n)
        return 0;
    return count(i + 1, n) + count(i + 2, n);
}
int climbStairs(int n)
{

    return count(0, n);
}

// top down approach
int count(int i, int n, vector<int> &dp)
{
    if (i == n)
        return 1;
    if (i > n)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    return dp[i] = count(i + 1, n, dp) + count(i + 2, n, dp);
}
int climbStairs(int n)
{
    vector<int> dp(n + 2, -1);
    return count(0, n, dp);
}

// bottom upapproach
int climbStairs(int n)
{
    vector<int> dp(n + 2, -1);
    // Bottom up
    dp[n] = 1;
    dp[n + 1] = 0;
    for (int i = n - 1; i >= 0; i--)
        dp[i] = dp[i + 1] + dp[i + 2];
    return dp[0];
}

// space optimize bottom up approach
int climbStairs(int n)
{

    int next = 1, next_2 = 0, curr;

    for (int i = n - 1; i >= 0; i--)
    {
        curr = next + next_2;
        next_2 = next;
        next = curr;
    }

    return curr;
}

// recommended approach because single argument
// top down approach
int count(int i, vector<int> &dp)
{
    if (i <= 1)
        return 1;
    if (dp[i] != -1)
        return dp[i];
    return dp[i] = count(i - 1, dp) + count(i - 2, dp);
}

int climbStairs(int n)
{
    vector<int> dp(n + 1, -1);

    return count(n, dp);
}

// bottom up approach
int climbStairs(int n)
{
    vector<int> dp(n + 1, -1);
    // Bottom up
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
}

// space optimize
int climbStairs(int n)
{
    vector<int> dp(n + 1, -1);
    // Bottom up
    int prev_2 = 1, prev = 1, curr = 1;
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