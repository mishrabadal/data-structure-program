#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <set>
// dijkstra algorithm 1st method (few test case failed)
vector<int> dijkstra(int V, vector<vector<int>> &edges, int S)
{

    vector<vector<int>> adj[V];
    // converting edge list to adjacency list
    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];

        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt}); // undirected graph
    }
    // end conversion

    vector<bool> Explored(V, 0);
    vector<int> dist(V, INT_MAX);
    dist[S] = 0;

    // select a node which is not explored yet and its distance
    int count = V;
    while (count--)
    {
        int node = -1, value = INT_MAX;

        for (int i = 0; i < V; i++)
        {
            if (!Explored[i] && value > dist[i])
            {
                node = i;
                value = dist[i];
            }
        }
        Explored[node] = 1;
        // relex the edges
        for (int j = 0; j < adj[node].size(); j++)
        {
            int neighbour = adj[node][j][0];
            int weight = adj[node][j][1];
            if (!Explored[neighbour] && (dist[node] + weight < dist[neighbour]))
                dist[neighbour] = dist[node] + weight;
        }
    }
    return dist;
}

// method 2 all test case passed
vector<int> dijkstra(int V, vector<vector<int>> &edges, int S)
{

    vector<vector<int>> adj[V];
    // converting edge list to adjacency list
    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];

        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt}); // undirected graph
    }
    // end conversion

    vector<bool> Explored(V, 0);
    vector<int> dist(V, INT_MAX);
    dist[S] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;
    p.push({0,S});
    // select a node which is not explored yet and its distance

    while (!p.empty())
    {
        int node = p.top().second;
        p.pop();
        if (Explored[node] == 1)
            continue;
        Explored[node] = 1;
        // relex the edges
        for (int j = 0; j < adj[node].size(); j++)
        {
            int neighbour = adj[node][j][0];
            int weight = adj[node][j][1];
            if (!Explored[neighbour] && (dist[node] + weight < dist[neighbour]))
            {
                dist[neighbour] = dist[node] + weight;
                p.push({dist[neighbour], neighbour});
            }
        }
    }

    return dist;
}

int main()
{

    return 0;
}