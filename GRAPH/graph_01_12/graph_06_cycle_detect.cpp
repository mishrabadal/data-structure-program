#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// Directed Graph Cycle using DFS (coding army)
bool DetectCycle(int node, vector<vector<int>> &adj, vector<bool> &path, vector<bool> &visited)
{
    visited[node] = 1;
    path[node] = 1;

    // look at adjacent node
    for (int j = 0; j < adj[node].size(); j++)
    {
        // if neighbour node is already present in my pah
        // cycle is present
        if (path[adj[node][j]])
            return 1;

        // if neighbour is already visited skip it

        if (!visited[adj[node][j]] && DetectCycle(adj[node][j], adj, path, visited))
            return 1;
    }

    path[node] = 0;
    return 0;
}
bool isCyclic(int V, vector<vector<int>> &edgeList)
{
    vector<vector<int>> adj(V);

    // Fill adjacency list from edge list
    for (const auto &edge : edgeList)
    {
        int u = edge[0];     // from
        int v = edge[1];     // to
        adj[u].push_back(v); // directed edge u -> v
    }
    // end coding of converting edgelist into adjacency list

    vector<bool> path(V, 0);
    vector<bool> visited(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && DetectCycle(i, adj, path, visited))
            return 1;
    }
    return 0;
}

// Directed Graph Cycle : solving using kahn's algorithm

bool isCyclic(int V, vector<vector<int>> &edgeList)
{

    vector<vector<int>> adj(V);

    // Fill adjacency list from edge list
    for (const auto &edge : edgeList)
    {
        int u = edge[0];     // from
        int v = edge[1];     // to
        adj[u].push_back(v); // directed edge u -> v
    }

    vector<int> InDeg(V, 0);
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
            InDeg[adj[i][j]]++;
    }
    queue<int> q;
    for (int i = 0; i < V; i++)
        if (!InDeg[i])
            q.push(i);
    int count = 0;
    vector<int> ans;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        count++;

        for (int j = 0; j < adj[node].size(); j++)
        {
            InDeg[adj[node][j]]--;
            if (!InDeg[adj[node][j]])
                q.push(adj[node][j]);
        }
    }

    return count != V;
}

int main()
{

    return 0;
}