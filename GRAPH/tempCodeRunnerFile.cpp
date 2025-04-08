#include <iostream>
#include <vector>
using namespace std;

    
    int main() {
        int V = 4; // Number of vertices
    
        // Directed edge list stored in a 2D vector
        vector<vector<int>> edgeList = {
            {3,0},
            {1,0},
            {2,0}
            
        };
    
        // Initialize adjacency list
        vector<vector<int>> adj(V);
    
        // Fill adjacency list from edge list
        for (const auto& edge : edgeList) {
            int u = edge[0]; // from
            int v = edge[1]; // to
            adj[u].push_back(v); // directed edge u -> v
        }
    
        // Print adjacency list
        cout << "Adjacency List:\n";
        for (int i = 0; i < V; i++) {
            cout << i << ": ";
            for (int neighbor : adj[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    
        return 0;
    }
    

  
