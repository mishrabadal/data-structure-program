#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//2016. Maximum Difference Between Increasing Elements
// approach:1 Brute force : O(N^2)
int maximumDifference(vector<int> &arr)
{
    int n = arr.size();

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // agar right side element bara hai left side tabhi minus karo aur maximum store karo
            if (arr[j] > arr[i])
            {
                ans = max(ans, arr[j] - arr[i]);
            }
        }
    }

    return ans;
}
// approach:2 optimal : O(n)
// j-i can be subtracted but i-j not possible
// right side ke element me se left side ke element ko minus kiya jayega na ki left side - right side
int maximumDifference(vector<int> &arr)
{
    int n = arr.size();
    // ans array will store maximum element  for every elemnet from right side
    // suffix max of each element
    vector<int> ans(n);
    ans[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        ans[i] = max(arr[i], ans[i + 1]);
    }

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        maxi = max(maxi, ans[i] - arr[i]);
    }
    return maxi == 0 ? -1 : maxi;
}
int main()
{

    return 0;
}