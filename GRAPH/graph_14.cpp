#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <set>

// Bellman-Ford
vector<int> bellmanFord(int V, vector<vector<int>> &edges, int S)
{

    vector<int> dist(V, 1e8);
    // 1e8 10 power 8
    dist[S] = 0;
    int e = edges.size();
    for (int i = 0; i < V - 1; i++)
    {
        bool flag=0;
        // Relax all the edges
        for (int j = 0; j < e; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];
            if (dist[u] == 1e8)
                continue;
            if (dist[u] + wt < dist[v])
            {
                flag=1;
                dist[v] = dist[u] + wt;
            }
        }
        if(!flag)
        return dist;
    }
    // to detct the cycle
    for (int j = 0; j < e; j++)
    {
        int u =edges[j][0];
        int v =edges[j][1];
        int wt= edges[j][2];
        if (dist[u] == 1e8)
            continue;
        if (dist[u] + wt < dist[v])
        {
            // cycle deducted
            vector<int> ans;
            ans.push_back(-1);
            return ans;
        }
    }
    return dist;
}
int main()
{

    return 0;
}