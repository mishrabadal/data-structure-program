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




//storing element and it's occurence in the same array
// by using storing two number at same iposition
void store(vector<int> &arr)
{
    int n = arr.size();
    int big_num = INT_MIN;

    // finding biggest number of array
    for (int i = 0; i < n; i++)
        big_num = max(arr[i], big_num);
        
    int index = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == -1)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }
        index++;
        arr[index] = arr[i] + count * (big_num + 1);
    }

    // printing num and it's occurence

    for (int i = 0; i <= index; i++)
    {
        int number = arr[i] % (big_num + 1);
        int occ = arr[i] / (big_num + 1);
        cout << number << " " << occ << endl;
    }
}

int main()
{
    
    return 0;
}