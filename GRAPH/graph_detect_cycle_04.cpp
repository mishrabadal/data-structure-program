#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// Undirected Graph Cycle detect using DFS
bool DetectCycle(int node, int parent, vector<vector<int>> adj, vector<bool> &visited)
{
    visited[node] = 1;
    for (int j = 0; j < adj[node].size(); j++)
    {
        if (parent == adj[node][j])
            continue;
        if (visited[adj[node][j]] == 1)
            return 1;
        if (DetectCycle(adj[node][j], node, adj, visited))
            return 1;
    }
    return 0;
}
bool isCycle(int V, vector<vector<int>> &adj)
{

    vector<bool> visited(V, 0);
    // visit all the unvisited node
    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && DetectCycle(i, -1, adj, visited))
        {
            return 1;
        }
    }
    return 0;
}

// solve above cycle detection problem using BFS

bool BFS(vector<vector<int>> adj, vector<bool> &visited)
{
    queue<pair<int, int>> q;
    visited[0] = 1;
    q.push(make_pair(0, -1)); // node parent
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (int j = 0; j < adj[node].size(); j++)
        {
            if (parent == adj[node][j])
                continue;
            if (visited[adj[node][j]])
                return 1;
            visited[adj[node][j]] = 1;
            q.push(make_pair(adj[node][j], node));
        }
    }
    return 0;
}
bool isCycle(int V, vector<vector<int>> &adj)
{

    vector<bool> visited(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && BFS(adj, visited))
            return 1;
    }
    return 0;
}
int main()
{

    return 0;
}