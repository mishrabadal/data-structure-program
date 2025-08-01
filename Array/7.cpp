#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// count frquency of each element
// Approach 1: brute force
void _freq_count(vector<int> &arr)
{
    int n = arr.size();
    vector<pair<int, int>> ans;
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
        ans.push_back({arr[i], count});
    }
    for (auto it : ans)
        cout << it.first << "  " << it.second << endl;
}
// approach 2 time : O(n)
void freq_count(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> freq;
    for (auto num : arr)
        freq[num]++;

    for (auto it : freq)
        cout << it.first << "  " << it.second << endl;
}


int main()
{
    
    return 0;
}