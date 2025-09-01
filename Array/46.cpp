#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Union of 2 Sorted Arrays
// brutforce
// time complexity : O((n+m)log(n+m))
vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    // return vector with correct order of elements
    vector<int> merge, ans;
    for (auto x : a)
        merge.push_back(x);
    for (auto x : b)
        merge.push_back(x);
    sort(merge.begin(), merge.end());

    int prev = merge[0];
    ans.push_back(prev);

    for (auto x : merge)
    {
        if (x == prev)
            continue;
        prev = x;
        ans.push_back(x);
    }
    return ans;
}

// optimal : O(n+m)
// time and space complexity : O(n+m)
vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    vector<int> ans;  // result vector
    int i = 0, j = 0; // two pointers for array a and b
    int n = a.size(), m = b.size();

    // Traverse both arrays together
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            // avoid duplicates in ans
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++; // move pointer of a
        }
        else if (a[i] > b[j])
        {
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++; // move pointer of b
        }
        else
        {
            // when a[i] == b[j], add only once
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements of array a
    while (i < n)
    {
        if (ans.empty() || ans.back() != a[i])
            ans.push_back(a[i]);
        i++;
    }

    // Add remaining elements of array b
    while (j < m)
    {
        if (ans.empty() || ans.back() != b[j])
            ans.push_back(b[j]);
        j++;
    }

    return ans;
}
int main()
{

    return 0;
}