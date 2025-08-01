#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Given an array of integers nums and an integer target , return indices of the two numbers
// such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use
// the same element twice.
// You can return the answer in any order.

// APPROACH 1
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }
    return {};
}

// APPROACH 2
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int moreNeeded = target - nums[i];
        if (mpp.find(moreNeeded) != mpp.end())
        {
            return {mpp[moreNeeded], i};
        }
        mpp[nums[i]] = i;
    }
    return {};
}

// approach 3
 // use can use two pointer concept
int main()
{

    return 0;
}