#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Split an array into two equal Sum subarrays

// approach 1 O(N^2)
bool _canSplit(vector<int> &arr)
{
    int n = arr.size();
    int leftSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        leftSum += arr[i];
        int rightSum = 0;
        for (int j = i + 1; j < n; j++)
        {
            rightSum += arr[j];
        }
        if (leftSum == rightSum)
            return true;
    }
    return false;
}

// approach 2: optimal O(n)
bool canSplit(vector<int> &arr)
{
    // code here
    int sum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int prefix = 0;
    for (int i = 0; i < n - 1; i++)
    {
        prefix += arr[i];
        sum -= arr[i];
        if (prefix == sum)
            return 1;
    }
    return 0;
}
int main()
{
    vector<int>arr={1,2,3,4,5,5};
cout<<canSplit(arr);
    return 0;
}