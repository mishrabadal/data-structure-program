#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// undirected unweighted graph
void adjacency_matrix()
{
    int vertex, edges;
    cin >> vertex >> edges;
    vector<vector<bool>> AdjMat(vertex, vector<bool>(vertex, 0));
    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
            cout << AdjMat[i][j] << " ";
        cout << endl;
    }
    /*input
    5 6
    0 1
    0 2
    1 2
    1 3
    2 4
    3 4
    output
    0 1 1 0 0
    1 0 1 1 0
    1 1 0 0 1
    0 1 0 0 1
    0 0 1 1 0
    */
}

// undirected weighted graph
void adjacency_weighted_matrix()
{
    int vertex, edges;
    cin >> vertex >> edges;
    vector<vector<int>> AdjMat(vertex, vector<int>(vertex, 0));
    int u, v, weight;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> weight;
        AdjMat[u][v] = weight;
        AdjMat[v][u] = weight;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
            cout << AdjMat[i][j] << " ";
        cout << endl;
    }
    /*
    input
    5 6
    0 1 8
    0 2 9
    1 2 7
    1 3 4
    2 4 2
    3 4 1
    output
    0 8 9 0 0
    8 0 7 4 0
    9 7 0 0 2
    0 4 0 0 1
    0 0 2 1 0 */
}

// directed unweighted graph
void directed_unweighted_graph()
{
    int vertex, edges;
    cin >> vertex >> edges;
    vector<vector<bool>> AdjMat(vertex, vector<bool>(vertex, 0));
    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        AdjMat[u][v] = 1;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
            cout << AdjMat[i][j] << " ";
        cout << endl;
    }
    /*input
    5 6
    0 1
    0 2
    1 2
    1 3
    2 4
    3 4
    output
    0 1 1 0 0
    1 0 1 1 0
    1 1 0 0 1
    0 1 0 0 1
    0 0 1 1 0
    */
}

// adjency list
// undirected graph(no weight);
void undirected_adjecencyList_graph()
{
    int vertex, edges;
    cin >> vertex >> edges;
    vector<int> AdjList[vertex];
    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
    // print the list
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < AdjList[i].size(); j++)
            cout << AdjList[i][j] << " ";
        cout << endl;
    }
}

// undirected graph(with weight);
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
        AdjList[v].push_back(make_pair(u, weight));
    }
    // print the list
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < AdjList[i].size(); j++)
            cout << AdjList[i][j].first << " " << AdjList[i][j].second << " ";
        cout << endl;
    }
}



//directed adjacency list with weight: point solution
void _adjacency_list()
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
int main()
{

    
    return 0;
}