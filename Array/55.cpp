#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Row with max 1s
int rowWithMax1s(vector<vector<int>> &mat)
{
    int row = mat.size();
    int col = mat[0].size();
    // yaha par map isliye le rhe hai taki  row index ke sath sath 1 ka count ke store kar paye
    map<int, int> m;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            // agar koi bhi cell 1 hai to uske row ke sath 1 ka count ko increment kar denge
            if (mat[i][j] == 1)
                m[i]++;
    }

    // Variables to track the maximum value and its key

    // maxKey row ka index bata dega jisme maximum 1 hai
    int maxKey = 0;
    // maxValue maximum number of 1 ka count bata dega kisi specific row ke
    int maxValue = INT_MIN;

    for (const auto &pair : m)
    {
        if (pair.second > maxValue)
        {
            maxValue = pair.second;
            maxKey = pair.first;
        }
    }
    if (maxValue != 0)
        return maxKey;
    // agar matrix ke andar koi 1 rha hi nhi to -1 return karo
    return -1;
}

int main()
{

    return 0;
}