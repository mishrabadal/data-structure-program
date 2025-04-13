#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// Undirected Graph Cycle detect using DFS
bool DetectCycle(int node, int parent, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[node] = 1;
    for (int neighbor : adj[node])
    {
        if (neighbor == parent)
            continue;
        if (visited[neighbor])
            return 1;
        if (DetectCycle(neighbor, node, adj, visited))
            return 1;
    }
    return false;
}

bool isCycle(int V, vector<vector<int>> &edges)
{
    vector<vector<int>> adj(V);
    for (const auto &edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u); // for undirected graph
    }

    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && DetectCycle(i, -1, adj, visited))
        {
            return 1;
        }
    }
    return false;
}

// solve above cycle detection problem using BFS

bool BFS(int vertex, vector<vector<int>> adj, vector<bool> &visited)
{
    queue<pair<int, int>> q;
    visited[vertex] = 1;
    q.push(make_pair(vertex, -1)); // node parent
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
bool isCycle(int V, vector<vector<int>> &edges)
{
    vector<vector<int>> adj(V);
    for (const auto &edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u); // for undirected graph
    }
    vector<bool> visited(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && BFS(i, adj, visited))
            return 1;
    }
    return 0;
}

int main()
{

    return 0;
}