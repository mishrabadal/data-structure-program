#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// it find unique element in array

// APPROACH 1 time :

// in this question every element is repeating  two times . except one element repeating single time
int unique(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

// it find unique element in array
int findUnique(int k, vector<int> &arr)
{

    unordered_map<int, int> mp;
    for (auto num : arr)
        mp[num]++;

    for (auto it : mp)
        if (it.second == 1)
            return it.first;
}
int main()
{

    return 0;
}