#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// 867. Transpose Matrix
//it will for both square and rectangular matrix
vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    // TIME COMPLEXITY IS n^2
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>> ans(col, vector<int>(row));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[j][i] = matrix[i][j];
        }
    }
    return ans;
}


//THIS CODE WILL WORK ONLY FOR SQUARE MATRIX. FOR RECTANGULAR MATRIX IT WILL NOT WORK.
vector<vector<int>> transpose(vector<vector<int>> &matrix)
{

    // TIME COMPLEXITY IS n^2 without extray array
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < col; j++)
            swap(matrix[i][j], matrix[j][i]);
    }
    return matrix;
}
int main()
{

    return 0;
}