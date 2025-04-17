#include <iostream>
using namespace std;
#include <bits/stdc++.h>
//method 1 : Topological sort solving using DFS
void DFS(int node, vector<vector<int>> adj, vector<bool> &visited, stack<int> &s)
{
    visited[node] = 1;
    // look at its neighbour one by one
    for (int j = 0; j < adj[node].size(); j++)
    {
        if (!visited[adj[node][j]])
            DFS(adj[node][j], adj, visited, s);
    }
    s.push(node);
}
vector<int> topoSort(int V, vector<vector<int>> &edgeList)
{
    // start coding of converting edgelist into adjacency list
    //  Initialize adjacency list
    vector<vector<int>> adj(V);

    // Fill adjacency list from edge list
    for (const auto &edge : edgeList)
    {
        int u = edge[0];     // from
        int v = edge[1];     // to
        adj[u].push_back(v); // directed edge u -> v
    }
    // end coding of converting edgelist into adjacency list

    // dfs find karo

    vector<bool> visited(V, 0);
    stack<int> s;

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
            DFS(i, adj, visited, s);
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}


// method 2 : Topological sort solving using kahn's algorithm
vector<int> sorting(int V, vector<vector<int>> &adj)
{
    vector<int> ans;
    vector<int> InDeg(V, 0); // store indegree for every node
    for (int i = 0; i < V; i++)
        for (int j = 0; j < adj[i].size(); j++)
            InDeg[adj[i][j]]++;

    // push all the node of zero indegree into queue
    queue<int> q;
    for (int i = 0; i < V; i++)
        if (!InDeg[i])
            q.push(i);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        // neighbour unki indegree ko decrease karna hai
        for (int j = 0; j < adj[node].size(); j++)
        {
            InDeg[adj[node][j]]--;
            if (InDeg[adj[node][j]] == 0)
                q.push(adj[node][j]);
        }
    }
    return ans;
}
vector<int> topoSort(int V, vector<vector<int>> &edgeList)
{
    // start coding of converting edgelist into adjacency list
    //  Initialize adjacency list
    vector<vector<int>> adj(V);

    // Fill adjacency list from edge list
    for (const auto &edge : edgeList)
    {
        int u = edge[0];     // from
        int v = edge[1];     // to
        adj[u].push_back(v); // directed edge u -> v
    }
    // end coding of converting edgelist into adjacency list
    return sorting(V, adj);
}
int main()
{

    return 0;
}