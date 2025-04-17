#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// check graph is Bipartite Graph  or not
bool isBipartite(vector<vector<int>> &adj)
{
    int V = adj.size();
    vector<int> color(V, -1);
    queue<int> q;

    for (int i = 0; i < V; i++)
    {
        q.push(0);
        color[0] = 0;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (int j = 0; j < adj[node].size(); j++)
            {
                if (color[adj[node][j]] == -1)
                {
                    color[adj[node][j]] = (color[node] + 1) % 2;
                    q.push(adj[node][j]);
                }
                else
                {
                    if (color[node] == color[adj[node][j]])
                        return 0;
                }
            }
        }
    }

    return 1;
}


//  method 2 : check graph is Bipartite Graph  or not
bool CheckBip(int node, vector<vector<int>> &adj, vector<int> &color)
{

    // llok at each neighbour
    for (int j = 0; j < adj[node].size(); j++)
    {
        // color is not assigned to the neighbour
        if (color[adj[node][j]] == -1)
        {
            color[adj[node][j]] = (color[node] + 1) % 2;
            if (!CheckBip(adj[node][j], adj, color))
                return 0;
        }
        // color is assingned
        else
        {
            if (color[node] == color[adj[node][j]])
                return 0;
        }
    }
    return 1;
}
bool isBipartite(vector<vector<int>> &adj)
{
    int V = adj.size();
    vector<int> color(V, -1);
    for (int i = 0; i < V; i++)
    {
        if (color[i] == -1) // not assigned
        {
            color[i] = 0;
            if (!CheckBip(i, adj, color))
                return 0;
        }
    }
    return 1;
}
int main()
{
}