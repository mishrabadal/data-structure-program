#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Rearrange Array Alternately
void rearrange(vector<int> &arr)
{

    sort(arr.begin(), arr.end());
    int n = arr.size();
    int i = 0, j = n - 1;
    vector<int> ans;
    while (i < j)
    {
        ans.push_back(arr[j--]);
        ans.push_back(arr[i++]);
        if (i == j)
            ans.push_back(arr[i]);
    }
    arr.clear();
    arr = ans;
}

int main()
{

    return 0;
}