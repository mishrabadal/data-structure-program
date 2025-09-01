#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//maximum subarray sum using  Kadane's Algorithm
int maxSubarraySum(vector<int> &arr)
{
    int prefix = 0;
    //prefix me summation rakhenge jaise hi summation negative hoga prefix 0 kar denge
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {

        if (prefix < 0)
            prefix = 0;
        prefix += arr[i];
        maxi = max(prefix, maxi);
    }

    return maxi;
}

int main()
{
vector<int> arr={2,3,-8,7,-1,2,3};

cout<<maxSubarraySum(arr);
    
    return 0;
}