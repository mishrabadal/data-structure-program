#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Triplet Sum in Array
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
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << hasTripletSum(arr, 8);
    return 0;
}