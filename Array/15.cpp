#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//missing number
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        for(int i=0;i<n;i++)
        sum +=nums[i];

        return n*(n+1)/2 - sum;


    }

int main()
{
    
    return 0;
}