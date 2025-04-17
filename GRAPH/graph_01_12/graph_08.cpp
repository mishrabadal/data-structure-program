#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// Covid Spread  (in how many unit of time wholel patient effected by corona crisis)
int r, c;
int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};
bool valid(int i, int j)
{
    return i >= 0 && i < r && j >= 0 && j < c;
}
int helpaterp(vector<vector<int>> hospital)
{
    r = hospital.size();
    c = hospital[0].size();
    // BFS
    // BFS

    queue<pair<int, int>> q;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (hospital[i][j] == 2)
                q.push(make_pair(i, j));
    int timer = 0;
    while (!q.empty())
    {
        timer++;

        int curr_patient = q.size();

        while (curr_patient--)
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for (int k = 0; k < 4; k++)
            {
                // up down left right
                if (valid(i + row[k], j + col[k]) && hospital[i + row[k]][j + col[k]] == 1)
                {
                    hospital[i + row[k]][j + col[k]] = 2;
                    q.push(make_pair(i + row[k], j + col[k]));
                }
            }
        }
    }
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (hospital[i][j] == 1)
                return -1;
    if (timer == 0)
        return 0;
    return timer - 1;
}

// Find the number of islands

int r, c;
int row[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
int col[8] = {-1, 0, 1, -1, 0, 1, -1, 1};
bool valid(int i, int j)
{
    return i >= 0 && i < r && j >= 0 && j < c;
}
int countIslands(vector<vector<char>> &grid)
{
    r = grid.size();
    c = grid[0].size();
    queue<pair<int, int>> q;
    int count = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == 'L')
            {
                count++;
                // convert  all L to W
                q.push(make_pair(i, j));
                grid[i][j] = 'W';

                while (!q.empty())
                {
                    int new_i = q.front().first;
                    int new_j = q.front().second;
                    q.pop();
                    for (int k = 0; k < 8; k++)
                    {
                        // up down left right
                        if (valid(new_i + row[k], new_j + col[k]) && grid[new_i + row[k]][new_j + col[k]] == 'L')
                        {
                            grid[new_i + row[k]][new_j + col[k]] = 'W';
                            q.push(make_pair(new_i + row[k], new_j + col[k]));
                        }
                    }
                }
            }
        }
    }
    return count;
}

// Replace O's with X's
int r, c;
int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};
bool valid(int i, int j)
{
    return i >= 0 && i < r && j >= 0 && j < c;
}
vector<vector<char>> fill(vector<vector<char>> &mat)
{
    r = mat.size();
    c = mat[0].size();
    // apply Bfs operation from border where O is present
    // replace O with T

    queue<pair<int, int>> q;
    // first row
    for (int j = 0; j < c; j++)
    {
        if (mat[0][j] == 'O')
        {
            q.push(make_pair(0, j));
            mat[0][j] = 'T';
        }
    }

    // first column
    for (int i = 0; i < r; i++)
    {
        if (mat[i][0] == 'O')
        {
            q.push(make_pair(i, 0));
            mat[i][0] = 'T';
        }
    }
    // last row
    for (int j = 0; j < c; j++)
    {
        if (mat[r - 1][j] == 'O')
        {
            q.push(make_pair(r - 1, j));
            mat[r - 1][j] = 'T';
        }
    }
    // last column
    for (int i = 1; i < r - 1; i++)
    {
        if (mat[i][c - 1] == 'O')
        {
            q.push(make_pair(i, c - 1));
            mat[i][c - 1] = 'T';
        }
    }

    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            // up down left right
            if (valid(i + row[k], j + col[k]) && mat[i + row[k]][j + col[k]] == 'O')
            {
                mat[i + row[k]][j + col[k]] = 'T';
                q.push(make_pair(i + row[k], j + col[k]));
            }
        }
    }
    // replace all O with X
    // replace all T with 0

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == 'O')
                mat[i][j] = 'X';
            else if (mat[i][j] == 'T')
                mat[i][j] = 'O';
        }
    return mat;
}
int main()
{

    return 0;
}