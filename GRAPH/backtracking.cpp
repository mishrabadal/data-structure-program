#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// N-Queens problem leetcode
bool check(int n, vector<string> &Board, int i, int j)
{
    // Upper Left Dign koi bhi queen present
    int row = i, col = j;
    while (row > -1 && col > -1)
    {
        if (Board[row][col] == 'Q')
            return 0;
        row--, col--;
    }
    // Upper Right Dign
    row = i, col = j;
    while (row > -1 && col < n)
    {
        if (Board[row][col] == 'Q')
            return 0;
        row--, col++;
    }
    return 1;
}

void find(int row, int n, vector<vector<string>> &ans, vector<string> &Board, vector<bool> &column)
{
    // Base condition
    if (row == n)
    {
        ans.push_back(Board);
        return;
    }
    // Put queen at any n position
    for (int j = 0; j < n; j++)
    {
        if (column[j] == 0 && check(n, Board, row, j))
        {
            column[j] = 1;
            Board[row][j] = 'Q';
            find(row + 1, n, ans, Board, column);
            column[j] = 0;
            Board[row][j] = '.';
        }
    }
}
vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> Board(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            Board[i].push_back('.');
    vector<bool> column(n, 0);
    find(0, n, ans, Board, column);
    return ans;
}

// M coloring problem
// method 1 hard method not recommended
void convertToAdjMatrix(int v, vector<pair<int, int>> &edges, bool graph[101][101])
{
    // Initialize the matrix with false
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            graph[i][j] = false;
        }
    }

    // Fill the matrix based on the edges
    for (auto &edge : edges)
    {
        int u = edge.first;
        int v = edge.second;
        graph[u][v] = true;
        graph[v][u] = true; // Because the graph is undirected
    }
}

bool DFS(int node, vector<int> &color, bool graph[101][101], int m, int n)
{
    // Try each color one by one
    for (int i = 0; i < m; i++)
    {
        // No Adjacent node should have this color
        bool IsPossible = 1;
        for (int j = 0; j < n; j++)
        {
            if (graph[node][j] && color[j] == i)
            {
                IsPossible = 0;
                break;
            }
        }
        // df
        if (IsPossible == 0)
            continue; // Check the next color
        color[node] = i;
        // Assign color to the node
        IsPossible = 1;
        // Go to the adjacent node, whom the color is not
        for (int j = 0; j < n; j++)
        {
            if (graph[node][j] && color[j] == -1)
            {
                if (!DFS(j, color, graph, m, n))
                {
                    IsPossible = 0;
                    break;
                }
            }
        }
        if (IsPossible)
            return 1;
        color[node] = -1;
    }
    return 0;
}
bool graphColoring(int n, vector<pair<int, int>> &edges, int m)
{
    bool graph[101][101];
    convertToAdjMatrix(n, edges, graph);
    vector<int> color(n, -1);
    for (int i = 0; i < n; i++)
        if (color[i] == -1 && !DFS(i, color, graph, m, n))
            return 0;

    return 1;
}

// method 2
bool find(int node, bool graph[101][101], int n, int m, vector<int> color)
{
    // base  comdition
    if (node == n)
        return 1;
    // Color the node with m color
    for (int i = 0; i < m; i++)
    {
        // check if adjacent nodes doesn't have same color
        bool IsPossible = 1;
        for (int j = 0; j < n; j++)
        {
            if (graph[node][j] && color[j] == i)
            {
                IsPossible = 0;
                break;
            }
        }

        if (IsPossible)
        {
            color[node] = i;
            if (find(node + 1, graph, n, m, color))
                return 1;
            color[node] = -1;
        }
    }
    return 0;
}

bool graphColoring(int n, vector<pair<int, int>> &edges, int m)
{
    bool graph[101][101];
    convertToAdjMatrix(n, edges, graph);
    vector<int> color(n, -1);
    return find(0, graph, n, m, color);
}

// sudoku solver
bool check(int num, vector<vector<char>> &board, int i, int j)
{
    char c = '0' + num;
    // check at same row
    for (int col = 0; col < 9; col++)
    {
        if (board[i][col] == c)
            return 0;
    }
    // check at same column
    // check at same column
    for (int row = 0; row < 9; row++)
    {
        if (board[row][j] == c)
            return 0;
    }
    // check at same box
    int row = i / 3 * 3, col = j / 3 * 3;

    for (int a = row; a < row + 3; a++)
        for (int b = col; b < col + 3; b++)
        {
            if (board[a][b] == c)
                return 0;
        }
    return 1;
}
bool find(int i, int j, vector<vector<char>> &board)
{
    // base condition
    if (i == 9)
        return 1;
    if (j == 9)
        return find(i + 1, 0, board);
    if (board[i][j] != '.')
        return find(i, j + 1, board);

    for (int num = 1; num < 10; num++)
    {
        if (check(num, board, i, j))
        {
            board[i][j] = '0' + num;
            if (find(i, j + 1, board))
                return 1;
            board[i][j] = '.';
        }
    }
    return 0;
}
void solveSudoku(vector<vector<char>> &board)
{
    find(0, 0, board);
}
int main()
{
    //  graphColoring();
    return 0;
}