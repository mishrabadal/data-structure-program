#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//Rotate a Matrix by 180 Counterclockwise


//approach 1
void rotateMatrix(vector<vector<int>>& matrix) {
     
     int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[n - 1 - i][n - 1 - j] = matrix[i][j];
        }
    }
    matrix = ans;
        
    }

//Approach 2
void rotateMatrix(vector<vector<int>>& matrix) {
     
     int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));

    // reversing each row data's
    for (int i = 0; i < n; i++)
    {
        int s = 0, e = n - 1;
        while (s < e)
            swap(matrix[i][s++], matrix[i][e--]);
    }

    // now reversing the  whole row
    for (int j = 0; j < n; j++)
    {
        int s = 0, e = n - 1;
        while (s < e)
            swap(matrix[s++][j], matrix[e--][j]);
    }
        
    }
int main()
{
    
    return 0;
}