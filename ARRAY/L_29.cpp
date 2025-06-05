#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int maxDiff(vector<int> &arr)
{
    int n = arr.size();

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            // If arr[j] > arr[i]
            if (arr[j] > arr[i])
            {
                ans = max(ans, arr[j] - arr[i]);
            }
        }
    }

    return ans;
}

int maxDiff_m2(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n);
    ans[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        ans[i] = max(arr[i], ans[i + 1]);
    }
    int maxi = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        maxi = max(maxi, ans[i] - arr[i]);
    }
    for (auto i : ans)
        cout << i << " ";
cout<<endl<<"maximum diff is : "<<maxi;
    return 0;
}
int main()
{
    vector<int> arr = {2, 3, 10, 6, 4, 8, 1};

    maxDiff_m2(arr);
    return 0;
}