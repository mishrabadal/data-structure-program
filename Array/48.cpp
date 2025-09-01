#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Greater on right side
vector<int> nextGreatest(vector<int> arr)
{
    // code here
    int n = arr.size();
    vector<int> ans(n);
    ans[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        ans[i] = max(arr[i + 1], ans[i + 1]);
    }
    return ans;
}

vector<int> nextGreatest(vector<int> arr)
{
    int n = arr.size();
    int max = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        // temp will store maximum element for each index
        // max is used to update original array
        // last me temp ko max me daal dete hai taki next time comparison ho sake
        int temp = max;
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
        arr[i] = max;
        max = temp;
    }
    return arr;
}

int main()
{

    return 0;
}