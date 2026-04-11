#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//74. Search a 2D Matrix
//APPROACH 1 BruteForce N^2
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == target)
                return 1;
        }
    }
    return 0;
}
//APPROACH 2 BETTER , time O(m * log n)
bool searchMatrix(vector<vector<int>> &matrix, int x)
{
    int m = matrix.size();    // number of rows
    int n = matrix[0].size(); // number of column

    for (int i = 0; i < m; i++)
    {
        // yaha par check kar rhe hai ki kya x first aur last elemnt ke bich  me aa rha  hai ki  nhi . aur kis row me aa rha ye pta chal jayega
        if (matrix[i][0] <= x && x <= matrix[i][n - 1])
        {
            int s = 0, e = n - 1;
            while (s <= e)
            {
                int mid = s + (e - s) / 2;
                if (matrix[i][mid] == x)
                    return true;
                else if (matrix[i][mid] < x)
                    s = mid + 1;
                else
                    e = mid - 1;
            }
        }
    }
    return false;
}
//APPROACH 3 OPTIMAL, time O( log n)
bool searchMatrix(vector<vector<int>> &matrix, int x)
{
    int m = matrix.size();    // number of rows
    int n = matrix[0].size(); // number of column
    // in this question we are using 1d array searching concept
    // end is pointing to last index
    int s = 0, e = m * n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int row_index = mid / n; // finding row index by dividing number of column
        int col_index = mid % n; // finding col index by dividing number of column
        if (matrix[row_index][col_index] == x)
            return true;
        else if (matrix[row_index][col_index] < x)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return false;
}
int main()
{

    return 0;
}