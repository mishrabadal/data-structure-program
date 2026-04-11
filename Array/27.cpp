#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// 169. Majority Element
// Time: O(n) (average), O(n) worst case
// Space: O(n)
// Approach 1 Brute force using stl
int _majorityElement(vector<int> &arr)
{
    unordered_map<int, int> mp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    for (auto i : mp)
    {
        if (i.second > n / 2)
            return i.first;
    }
    return -1;
}

// Approach 2 better nlogn
int __majorityElement(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int i = 0;
    while (i < n)
    {
        int num = arr[i];
        int count = 0;
        while (i < n && num == arr[i])
        {
            count++;
            i++;
        }
        if (count > n / 2)
            return num;
    }
    return -1;
}

// approach 3 optimal
// time O(n), space O(1)
int majorityElement(vector<int> &arr)
{
    int n = arr.size();
    int candidate, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
        else
        {
            if (arr[i] == candidate)
                count++;
            else
                count--;
        }
    }
    return candidate;
}


int main()
{
vector<int> arr={3,4,3,5,3,4,3,7};
cout<<majorityElement(arr);
    return 0;
}