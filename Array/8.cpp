#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//442. Find All Duplicates in an Array
//APPROACH 1 : BRUTE FORCE
vector<int> findDuplicates(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        if (visited[i] == true)
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        if(count>1)
        ans.push_back(arr[i]);
    }
    for (auto it : ans)
        cout << it << endl;

    return ans;
}



//APPROACH 2 BETTER
vector<int> _findDuplicates(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> freq;
    for (auto num : arr)
        freq[num]++;
    vector<int> ans;
    for (auto it : freq)
    {
        if (it.second > 1)
            ans.push_back(it.first);
    }
    for (auto it : ans)
        cout << it<< endl;
    return ans;
}

int main()
{
    
    return 0;
}