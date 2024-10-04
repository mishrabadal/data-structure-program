#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void custom_data_in_2d_vector()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Access and print the data
    for (int i = 0; i < matrix.size(); ++i)
    {
        for (int j = 0; j < matrix[i].size(); ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void custom_data_in_1d_vector()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}

// rat in a maze problem, sare path ko print jis jis path ko hake rat goal tak pahunch sakta hai
bool valid(int i, int j, int n)
{
    return i >= 0 && j >= 0 && i < n && j < n;
}

void total(vector<vector<int>> &matrix, int i, int j, int n, string &path, vector<string> &ans, vector<vector<bool>> &visited)
{
    int row[4] = {-1, 1, 0, 0};
    int col[4] = {0, 0, -1, 1};
    string dir = "UDLR";

    // base case
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }
    visited[i][j] = 1;
    // moving in up,down,left,right,direction
    for (int k = 0; k < 4; k++)
    {
        if (valid(i + row[k], j + col[k], n) && matrix[i + row[k]][j + col[k]] && !visited[i + row[k]][j + col[k]])
        {
            path.push_back(dir[k]);
            total(matrix, i + row[k], j + col[k], n, path, ans, visited);
            path.pop_back();
        }
    }
    visited[i][j] = 0;
}

int main()
{
    // output
    // DDRDRR
    // DRDDRR
    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}}; // gfg data
    int n = 4;
    vector<vector<bool>> visited(n, vector<bool>(n, 0));
    vector<string> ans;
    string path;
    total(matrix, 0, 0, n, path, ans, visited);
    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << endl;
    }

    return 0;
}
