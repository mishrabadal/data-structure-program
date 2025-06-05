#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// 42. Trapping Rain Water
int trap(vector<int> &height)
{
    int n = height.size();
    vector<int> leftMax(n);
    vector<int> rightMax(n);
    leftMax[0] = 0;
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);
    rightMax[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
        rightMax[i] = max(rightMax[i + 1], height[i + 1]);

    int water = 0;
    for (int i = 0; i < n; i++)
    {
        int minHeight = min(leftMax[i], rightMax[i]);
        if (minHeight - height[i] >= 0)
            water += minHeight - height[i];
    }
    return water;
}

// Triplet Sum in Array
bool hasTripletSum(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == target)
                return true;
            if (sum > target)
                k--;
            else
                j++;
        }
    }
    return false;
}
int main()
{

    return 0;
}