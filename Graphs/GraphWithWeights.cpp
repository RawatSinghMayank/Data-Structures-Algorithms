#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int V, E;
  
    cin >> V >> E;

    vector <pair <int,int>> adjM[V + 1];
    vector <vector <pair <int,int>>> adjm(V+1);

    for (int  i= 0; i < E; i++){
        int u,v,wt;
        cin >> u >> v >> wt;
       adjM[u].push_back({v,wt});
       adjM[v].push_back({u,wt});

       adjm[u].push_back({v,wt});
       adjm[v].push_back({u,wt});
    }

    for (int i = 0; i<= V; i++){
        for (auto &it : adjM[i]){
            cout << it.first << "  " << it.second << " ";
            // cout << it.first << " " << it.second << " ";
        }
        cout << "\n";
    }

    return 0;
}