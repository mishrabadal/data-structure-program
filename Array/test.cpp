#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> _twoSum(vector<int> &nums, int target)
{
    // here don't be confused about big and small number because target is always bigger number than the returning element
    int n = nums.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int moreNeeded = target - nums[i];
        if (mpp.find(moreNeeded) != mpp.end()) // checking is the moreNeeded element is present in the map or not
        {
            return {mpp[moreNeeded], i};
        }
        mpp[nums[i]] = i; // it will store the num index and for fetching num index we use the actual number
    }
    return {};
}

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    unordered_map<int, int> mpp;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]] = i;
    }
    for(auto i:mpp)
    {
        cout<<" index : "<<i.first<<" value :"<<i.second<<endl;
    }
    return 0;
}
