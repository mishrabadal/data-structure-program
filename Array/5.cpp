#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// /Remove Duplicates from unsorted  an array
// APPROACH 1 time : Brute force N^2

vector<int> remDuplicate(vector<int> &arr)
{
    vector<int> res;

    for (int i = 0; i < arr.size(); i++)
    {

        // Check if this element is included in result
        int j;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        // push the lement into result  when first time come(previously not come)
        if (i == j)
        {
            res.push_back(arr[i]);
        
        }
    }
    return res;
}

// APPROACH 2 time : N.logN
vector<int> remDuplicate(vector<int> &arr)
{
    // code here
    vector<int> ans;
    int n = arr.size();
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    for (auto it : st)
    {
        ans.push_back(it);
    }
    return ans;
}

// APPROACH 3 time : o(n), space o(n)

    vector<int> remDuplicate(vector<int>& arr) {
        // code here
       unordered_set<int>st(arr.begin(),arr.end());
       return vector<int>(st.begin(),st.end());
    }
int main()
{

    return 0;
}