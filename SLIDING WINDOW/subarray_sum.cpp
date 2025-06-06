#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
//Zero Sum Subarrays O(n)
int findSubarray(vector<int> &arr)
{
    int n = arr.size();
    int total = 0;
    unordered_map<int, int> m;
    int PrefixSum = 0;
    // initilize by 0,1
    m[0] = 1;
    for (int i = 0; i < n; i++)
    {
        PrefixSum += arr[i];
        if (m.count(PrefixSum))
        {
            total += m[PrefixSum];
            m[PrefixSum]++;
        }
        else
            m[PrefixSum] = 1;
    }
    return total;
}

//560. Subarray Sum Equals K
int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    int total = 0;
    for (int s = 0; s < n; s++)
    {
        for (int e = s; e < n; e++)
        {
            int sum = 0;
            for (int i = s; i <= e; i++)
            {
                sum += nums[i];
            }
            if (sum == k)
            {
                total++;
                for (int i = s; i <= e; i++)
                {
                    cout << nums[i] << " ";
                }
                cout << endl;
            }
        }
    }
    return total;
}

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> m;
    m[0] = 1;
    int PrefixSum = 0;
    int total = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        PrefixSum += nums[i];
        if (m.count(PrefixSum - k))
        {
            total += m[PrefixSum - k];
            m[PrefixSum]++;
        }
        else
            m[PrefixSum]++;
    }
    return total;
}

int main()
{
    vector<int> nums = {2, 3, 1, 4, 5, 0};
    int k = 5;
    cout << subarraySum(nums, k);


    return 0;
}