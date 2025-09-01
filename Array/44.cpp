#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool pythagoreanTriplet(vector<int> &arr)
{
    int n = arr.size();
    // storing sqaure of every element in unoredred map
    unordered_set<int> mp;
    for (int i = 0; i < n; i++)
    {
        mp.insert(arr[i] * arr[i]);
    }

    for (auto i : mp)
    {
        for (auto j : mp)
        {
            // check i+j is exists in the unordered set or not
            // yaha par j ko i se ek aage se suru kiya ja sakta but koi problem nhi hai
            // beacuse 0 is those number which satisfy 0*0 +  0*0 = 0*0 and no other exists
            if (mp.find(i + j) != mp.end())
                return true;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {3, 2, 4, 6, 5};
    cout << pythagoreanTriplet(arr);
    return 0;
}