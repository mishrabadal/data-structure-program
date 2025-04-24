#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <set>
// Floyd Warshall
void floydWarshall(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] == 1e8)
                matrix[i][j] = INT_MAX;
    // Floyd warshall algorithm
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][k] == INT_MAX || matrix[k][j] == INT_MAX)
                    continue;
                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] == INT_MAX)
                matrix[i][j] = 1e8;
}
int main()
{

    return 0;
}