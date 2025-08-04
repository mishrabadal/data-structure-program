#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//rotate image 90 degree
void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n - 1 - i] = matrix[i][j];
        }
    }
    matrix = ans;
}

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));

    // first transpose the matrix
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // now reversing each row
    for (int i = 0; i < n; i++)
    {
        int s = 0, e = n - 1;
        // reversing row
        while (s < e)
            swap(matrix[i][s++], matrix[i][e--]);
    }
}
int main()
{

    return 0;
}