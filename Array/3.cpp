#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Given an array arr[], check whether it is sorted in non-decreasing order.
// Return true if it is sorted otherwise false.

bool isSorted(vector<int> &arr)
{
    // code here
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
int main()
{

    return 0;
}