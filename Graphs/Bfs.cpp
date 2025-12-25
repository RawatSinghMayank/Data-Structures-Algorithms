#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs (vector <int> adjM[], int source, int v){


    vector <int> visited (v + 1);

    queue <int> q;
    q.push(source);
    visited[source] = 1;



    while (!q.empty()){
        
        int top = q.front();
        cout << top  << " ";
        q.pop();

        for (auto it : adjM[top]){
            if (!visited[it]){
                q.push(it);
                visited[it ] = 1;
            }
        }
    }

}

void dfs (vector <int> adjM[], int v, vector <int>& visited , int source){

    cout << source << " ";
    visited[source] = 1;

    
    for (auto it : adjM[source]){

        if (!visited[it]){
            dfs (adjM, v, visited, it);
        }
    }
}

int main(){

    int V,E;
    cin >> V >> E;

    vector <int> adj [V + 1];

    for (int i = 0; i < E; i++){
        int v, u;
        cin >> v >> u;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int source;
    cin >> source;

    bfs (adj, source, V);
    cout << "Now DFS: " << endl;

    vector <int> visited (V + 1,0);
    dfs(adj, V, visited, source);
    return 0;
}

BFS for the disconnectd graph
 vector<int> bfs(vector<vector<int>> &adj) {

        int v = adj.size();
        vector <int> visited(v);
        vector <int > result;
        visited[0] = 1;
        queue <int> q;
        q.push(0);
       
    for (int i = 0; i < v; i++){
        
        if (!visited[i]){
            while (!q.empty()){
                
                int node = q.front();
                q.pop();
                result.push_back(node);
                
                for (auto &it : adj[node]){
                    if (!visited[it]){
                        q.push(it);
                        visited[it] = 1;
                    }
                }
            }
        }}
        return result;
    }
