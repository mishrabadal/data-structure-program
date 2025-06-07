#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
// 974. Subarray Sums Divisible by K
int subarraysDivByK(vector<int> &nums, int k)
{
    unordered_map<int, int> m; // remainder with their count/ocurrence
    m[0] = 1;
    int PrefixSum = 0, rem, total = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        PrefixSum += nums[i];
        rem = PrefixSum % k;
        if (rem < 0)
            // If our reminder is negative, make it positive
            rem = k + rem;

        if (m.count(rem)) // remainder isise pahle aaya hai ya nhi
        {
            total += m[rem];
            m[rem]++;
        }
        else
            m[rem] = 1;
    }
    return total;
}

// 713. Subarray Product Less Than K
int numSubarrayProductLessThanK(vector<int> &nums, int k)
{
    int product = 1, start = 0, end = 0, count = 0;
    int n = nums.size();
    while (end < n)
    {
        product *= nums[end];
        while (product >= k && start <= end)
        {
            product /= nums[start];
            start++;
        }
        count += end - start + 1;
        end++;
    }
    return count;
}

// Number of subarrays having sum less than K gfg and interview-bit question
int countSubarrays(vector<int> &nums, int k)
{
    int sum = 0, start = 0, end = 0, count = 0;
    int n = nums.size();
    while (end < n)
    {
        sum += nums[end];
        while (sum >= k && start <= end)
        {
            sum -= nums[start];
            start++;
        }
        count += end - start + 1;
        end++;
    }
    return count;
}

int main()
{
    vector<int> nums = {2, 5, 6};
    int k = 10;

    cout << countSubarrays(nums, k);
    return 0;
}