#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// vector <int>  dfsOfGraph (vector <int> adj [], vector <int>& visited, int source){

//     vector <int> dfs;
//     visited [source] = 1;
//     dfs.push_back(source);

//     for (auto it : adj[source]){
//         if (!visited[it]){
//             vector <int> resultFromRecursion =  dfsOfGraph(adj,visited,it);
//             dfs.insert(dfs.end(), resultFromRecursion.begin(), resultFromRecursion.end());
//         }
//     }

//     return dfs;

// }
#include <iostream>
#include <vector>

using namespace std;
  void dfss (vector <int>& dfs, vector <vector <int>>&adj, vector <int>&visited, int source){
    
    visited [source] = 1;
    dfs.push_back(source);

    for (auto it : adj[source]){
        if (!visited[it]){
            dfss(dfs,adj,visited,it);
        }
    }

 
    }
    
    vector<int> dfs(vector<vector <int>>&adj) {
       
       int V = adj.size();
       vector <int> visited (V,0);
       vector <int> x;
       dfss(x,adj,visited,0);
        return x;
    }
int main() {
    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj(V);

    for (int i = 0; i < E; i++) {
        int v, u;
        cin >> v >> u;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    vector <int> dfsResult = dfs(adj);

    for (auto it : dfsResult) {
        cout << it << " ";
    }

    return 0;
}
