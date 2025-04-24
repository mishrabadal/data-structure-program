#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// Euler circuit and Path

void DFS(int node, vector<int> adj[], vector<bool> &visited)
{
    visited[node] = 1;
    for (int j = 0; j < adj[node].size(); j++)
    {
        if (!visited[adj[node][j]])
            DFS(adj[node][j], adj, visited);
    }
}
int isEulerCircuit(int V, vector<int> adj[])
{

    // Euler circuits
    //  Calculate the Degree of Each node
    // All node should have even degree
    // All non-zero degree node should be connected
    // Euler path
    // Calculate the Degree of Each node
    // zero or two node can have odd degree and remaining have even degree
    // All non-zero degree node should be connected
    vector<int> Deg(V, 0);
    int Odd_Deg = 0; // number of nodes having odd degree
    for (int i = 0; i < V; i++)
    {
        Deg[i] = adj[i].size();
        if (Deg[i] % 2)
            Odd_Deg++;
    }
    if (Odd_Deg != 2 && Odd_Deg != 0) // 1,4,3,5,6,7
        return 0;

    vector<bool> visited(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (Deg[i])
        {
            DFS(i, adj, visited);
            break;
        }
    }

    // If non zero degree node is still not visited, return 0
    // Degree zero hai, usko ignore (Koi edge nahi hai)
    for (int i = 0; i < V; i++)
    {
        if (Deg[i] && !visited[i])
            return 0;
    }
    // Eulerian circuit: 2
    // Eulerian Path: 1;
    if (Odd_Deg == 0)
        return 2;
    else
        return 1;
}
int main()
{

    return 0;
}