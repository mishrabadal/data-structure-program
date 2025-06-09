#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int maxSubarrayLength(vector<int> &nums, int k)
{
    int len = 0;
    unordered_map<int, int> count;
    int start = 0, end = 0, n = nums.size();
    while (end < n)
    {
        count[nums[end]]++;
        while (count[nums[end]] > k)
        {
            count[nums[start]]--;
            start++;
        }
        len = max(len, end - start + 1);
        end++;
    }
    return len;
}
int main()
{
    vector<int> nums = {3, 2, 2, 4, 3, 15};
    int target = 7;

    return 0;
}