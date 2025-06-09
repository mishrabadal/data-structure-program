#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
// 209. Minimum Size Subarray Sum, greater than or equal to target
int _minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();
    int start = 0, end = 0, sum = 0, total = INT_MAX;
    while (end < n)
    {
        sum += nums[end];
        while (sum >= target)
        {
            total = min(total, end - start + 1);
            sum -= nums[start++]; // window ki size ko decrease karo
        }
        end++; // window ki size ko increase karo
    }

    return total == INT_MAX ? 0 : total;
}

// Minimum Size Subarray Sum,  equal to target
int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();
    int start = 0,end=0, sum = 0, total = INT_MAX;

    while (end<n)
    {
        sum += nums[end];

        while (sum > target)
        {
            sum -= nums[start++];
        }

        if (sum == target)
        {
            total = min(total, end - start + 1);
        }
        end++;
    }

    return total == INT_MAX ? 0 : total;
}

int main()
{
    vector<int> nums = {3,2,2,4,3,15};
    int target = 7;

   cout<<minSubArrayLen(target, nums);
    return 0;
}