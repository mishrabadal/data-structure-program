#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//867. Transpose Matrix
vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        //TIME COMPLEXITY IS n^2
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>>ans(col, vector<int>(row));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;
    }
int main()
{
    
    return 0;
}