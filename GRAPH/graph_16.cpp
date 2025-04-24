#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// Shortest Source to Destination Path

int row[4] = {1, -1, 0, 0};
int col[4] = {0, 0, 1, -1};
bool valid(int i, int j, int n, int m)
{
    return i >= 0 && j >= 0 && i < n && j < m;
}
int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y)
{

    if (X == 0 && Y == 0)
        return 0;
    if (!A[0][0])
        return -1;
    //  row, col, step
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {0, 0}});
    vector<vector<bool>> visited(N, vector<bool>(M, 0));
    visited[0][0] = 1;
    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second.first;
        int step = q.front().second.second;
        q.pop();
        // up down lef right

        for (int k = 0; k < 4; k++)
        {
            int new_i = i + row[k];
            int new_j = j + col[k];
            if (valid(new_i, new_j, N, M) && A[new_i][new_j] && !visited[new_i][new_j])
            {
                if (new_i == X && new_j == Y) // check for the destination
                    return step + 1;
                visited[new_i][new_j] = 1;
                q.push({new_i, {new_j, step + 1}});
            }
        }
    }
    return -1;
}

// Knight Walk

int row[8] = {2,2,-2,-2,1,-1,1,-1}; 
int col[8] = {1,-1,1,-1,2,2,-2,-2};
bool valid(int i, int j, int n) 
{ 
return i>=0&&j>=0&&i<n&&j<n; 
}
int minStepToReachTarget(vector<int> &KnightPos, vector<int> &TargetPos, int N)
{

    KnightPos[0]--;
    KnightPos[1]--;
    TargetPos[0]--;
    TargetPos[1]--;
    //base case
    if(TargetPos[0]==KnightPos[0] && TargetPos[1]==KnightPos[1])
    return 0;
    queue<pair<int, int>> q;
    vector<vector<bool>> chess(N, vector<bool>(N, 0));
    q.push({KnightPos[0], KnightPos[1]});
    chess[KnightPos[0]][KnightPos[1]] = 1;
    int step = 0;
    while (!q.empty())
    {
        int count = q.size();
        while (count--)
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for (int k = 0; k < 8; k++)
            {
                int new_i = i + row[k];
                int new_j = j + col[k];
                if (valid(new_i, new_j, N) && !chess[new_i][new_j])
                {
                     if (new_i == TargetPos[0] && new_j == TargetPos[1])
                      return step + 1;
                    chess[new_i][new_j] = 1;
                    q.push({new_i, new_j});
                }
            }
        }
        step++;
    }
    return -1;
}
int main()
{

    return 0;
}