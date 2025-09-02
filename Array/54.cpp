#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// Boolean Matrix

// BruteForce by using extra array : Time Limit Exceeds
void booleanMatrix(vector<vector<int>> &mat)
{
    int row = mat.size();
    int col = mat[0].size();
    // making ans matrix initially all 0
    vector<vector<int>> ans(row, vector<int>(col, 0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            if (mat[i][j] == 1)
            {
                int r = i;
                int c = j;
                // making whole row 1
                for (int k = 0; k < col; k++)
                    ans[r][k] = 1;
                // making whole column 1
                for (int k = 0; k < row; k++)
                    ans[k][c] = 1;
            }
    }
    mat = ans;
}

//optimal solution
void booleanMatrix(vector<vector<int>> &mat)
{
    set<int> r, c;
    int row = mat.size();
    int col = mat[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            if (mat[i][j] == 1)
            {
                r.insert(i);
                c.insert(j);
            }
    }
    // making whole row 1
    for (auto it : r)
    {
        for (int j = 0; j < col; j++)
            mat[it][j] = 1;
    }

    // making whole column 1
    for (auto it : c)
    {
        for (int i = 0; i < col; i++)
            mat[i][it] = 1;
    }
}

int main()
{

    return 0;
}