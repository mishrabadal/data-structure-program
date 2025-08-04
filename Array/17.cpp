#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Two Sum in Sorted Array time . log.n

vector<int> twoSum(vector<int>& arr, int target) {
         int n = arr.size();
        int s =0,e=n-1;
        while(s<e)
        {
            if(arr[s]+arr[e]==target)   return {s+1,e+1};
            else if(arr[s]+arr[e]<target)   s++;
            else e--;
        }
        return {-1,-1};
    }

int main()
{
    
    return 0;
}