#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//15. There(3) Sum all distinct index
vector<vector<int>> threeSum(vector<int> &arr)
{
    vector<vector<int>> ans;
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int s = i + 1; // you can assume s = j
        int e = n - 1; // you can assume e = k
        // applying binary search
        while (s < e)
        {
            int sum = arr[i] + arr[s] + arr[e];
            if (sum == 0)
            {
                ans.push_back({arr[i], arr[s], arr[e]});
                // skip duplicates for s
                s++;
                while (s < e && arr[s] == arr[s - 1])
                    s++;
            }
            else if (sum < 0)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4, 2};
    threeSum(arr);

    return 0;
}