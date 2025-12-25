#include <iostream>
#include <vector>

using namespace std;

int main() {
    // V = number of vertices, E = number of edges
    int V, E;

    // Read the number of vertices and edges
    cout << "Enter the number of vertices (V) and edges (E): ";
    cin >> V >> E;

    // Create an adjacency matrix. Size V+1 for 1-based indexing.
    // If vertices are 0-indexed (0 to V-1), use vector<vector<int>>(V, vector<int>(V, 0));
    vector<vector<int>> adjM(V + 1, vector<int>(V + 1, 0));

    cout << "Enter the " << E << " edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        // Correctly mark the edge for an undirected graph
        adjM[u][v] = 1;
        adjM[v][u] = 1;
    }

    cout << "\nAdjacency Matrix Representation:" << endl;
    // Loop from 1 to V for 1-based indexing
    for (int i = 1; i <= V; i++) {
        for (int j = 1; j <= V; j++) {
            cout << adjM[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}