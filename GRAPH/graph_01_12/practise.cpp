#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// converting edgelist to adjacency list
void edgeList_to_adjList()
{

    vector<vector<int>> edgeList = {
        {0, 1},
        {0, 2},
        {1, 2},
        {1, 3},
        {2, 4},
        {3, 4}};
    int V = edgeList.size();
    vector<vector<int>> adj(V);
    for (const auto &edge : edgeList)
    {
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
    }
    // printing adjacency list
    for (const auto &row : adj)
    {
        for (auto val : row)
            cout << val << " ";
        cout << endl;
    }
}


//directed adjacency list with weight
void adjacency_list()
{

    int vertex, edges;
    cin >> vertex >> edges;
    vector<pair<int, int>> AdjList[vertex];
    int u, v, weight;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> weight;
        AdjList[u].push_back(make_pair(v, weight));
       // AdjList[v].push_back(make_pair(u, weight));
    }
    // print the list
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < AdjList[i].size(); j++)
            cout << AdjList[i][j].first << " " << AdjList[i][j].second << " , ";
        cout << endl;
    }
}


void learn_pair()
{
    pair<int,char>p= make_pair(5,'a');
    cout<<p.first<<" "<<p.second;
    vector<pair<int,string>>student;
    student.push_back(make_pair(1,"badal"));
    student.push_back(make_pair(2,"sonu"));
    student.push_back(make_pair(3,"point"));
    student.push_back(make_pair(4,"babita"));
cout<<endl;
cout<<"Roll" <<" Name"<<endl;
    for(auto i :student)
    cout<<i.first<< " "<<i.second<<endl;
}

void DFS(int node, vector<vector<int>>&adj, vector<int> &ans, vector<bool>&visited)
{
    visited[node] = 1;
    ans.push_back(node);
    for (int j = 0; j < adj[node].size(); j++)
    {
        if (!visited[adj[node][j]])
        {
            cout<<"value is "<<adj[node][j]<<endl;
            DFS(adj[node][j], adj, ans, visited);
        }
           
    }
}
vector<int> dfs()
{

    vector<vector<int>> adj={{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    int v = adj.size();
    vector<bool> visited(v, 0);  
    vector<int> ans;

    DFS(0, adj, ans, visited);

    for(auto i:ans)
    cout<<i<<" ";
    return ans;
}
int main()
{
    dfs();
    return 0;
}