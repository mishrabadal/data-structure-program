#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <set>
// Shortest Path in Undirected(shortest distance from source to all node)
vector<int> shortestPath(vector<vector<int>> &adj, int src)
{
    int N = adj.size();
    // array dist
    vector<int> dist(N, -1);
    vector<bool> visited(N, 0);
    queue<int> q;
    q.push(src);
    dist[src] = 0;
    visited[src] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        // look at all the neighbours
        for (int j = 0; j < adj[node].size(); j++)
        {
            int neighbour = adj[node][j];
            if (!visited[neighbour])
            {
                visited[neighbour] = 1;
                q.push(neighbour);
                dist[neighbour] = dist[node] + 1;
            }
        }
    }
    return dist;
}

// Shortest path in an unweighted graph(give answer of path) : coding ninja
vector<int> shortestPath(vector<pair<int, int>> edges, int N, int M, int src, int dest)
{
    vector<int> adj[N];
    for (int i = 0; i < M; i++)
    {
        adj[edges[i].first - 1].push_back(edges[i].second - 1);
        adj[edges[i].second - 1].push_back(edges[i].first - 1);
    }
    src--;
    dest--;
    // array dist
    vector<int> dist(N, -1);
    vector<bool> visited(N, 0);

    queue<int> q;
    q.push(src);
    dist[src] = 0;
    visited[src] = 1;
    vector<int> parent(N, -1);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        // look at all the neighbours
        for (int j = 0; j < adj[node].size(); j++)
        {
            int neighbour = adj[node][j];
            if (!visited[neighbour])
            {
                visited[neighbour] = 1;
                q.push(neighbour);
                dist[neighbour] = dist[node] + 1;
                parent[neighbour] = node;
            }
        }
    }
    vector<int> path;
    while (dest != -1)
    {
        path.push_back(dest + 1);
        dest = parent[dest];
    }
    reverse(path.begin(), path.end());
    return path;
}

int main()
{
    vector<vector<int>> adj = {{1, 3}, {0, 2}, {1, 6}, {0, 4}, {3, 5}, {4, 6}, {2, 5, 7, 8}, {6, 8}, {7, 6}};
    shortestPath(adj, 0);
    return 0;
}