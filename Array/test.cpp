#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void addition_of_matrix()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int arr2[2][3] = {1, 2, 3, 4, 5, 6};
    int arr3[2][3];
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            arr3[i][j] = arr[i][j] + arr2[i][j];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr3[i][j] << " ";
        cout << endl;
    }
}

void _rotate_90(vector<vector<int>> &matrix)
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

void rotate_90(vector<vector<int>> &matrix)
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

void rotate_180(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));

    // reversing each row
    for (int i = 0; i < n; i++)
    {
        int s = 0, e = n - 1;
        while (s < e)
            swap(matrix[i][s++], matrix[i][e--]);
    }

    // reversing each column
    for (int j = 0; j < n; j++)
    {
        int s = 0, e = n - 1;
        while (s < e)
            swap(matrix[s++][j], matrix[e--][j]);
    }
}
int main()
{
    // addition_of_matrix();
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Move to next row
    }

    cout << endl;
    rotate_180(matrix);
    // Printing the 2D vector
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Move to next row
    }

    return 0;
}