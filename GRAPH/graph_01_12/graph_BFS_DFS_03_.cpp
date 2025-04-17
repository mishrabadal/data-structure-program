#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// BFS of graph
vector<int> bfs(vector<vector<int>> &adj)
{
    int v = adj.size();
    queue<int> q;
    vector<bool> visited(v, 0);
    q.push(0);
    visited[0] = 1;
    vector<int> ans;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for (int j = 0; j < adj[node].size(); j++)
        {
            if (!visited[adj[node][j]])
            {
                visited[adj[node][j]] = 1;
                q.push(adj[node][j]);
            }
        }
    }
    return ans;
}

// DFS of Graph
void DFS(int node, vector<vector<int>> &adj, vector<int> &ans, vector<bool> &visited)
{
    visited[node] = 1;
    ans.push_back(node);
    for (int j = 0; j < adj[node].size(); j++)
    {
        if (!visited[adj[node][j]])
            DFS(adj[node][j], adj, ans, visited);
    }
}
vector<int> dfs(vector<vector<int>> &adj)
{
    int v = adj.size();
    vector<bool> visited(v, 0);
    vector<int> ans;
    DFS(0, adj, ans, visited);
    return ans;
}
int main()
{

    return 0;
}