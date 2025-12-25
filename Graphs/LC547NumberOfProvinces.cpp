Time Complexity : O(N) + O(V + 2E)
//Becuase the DFS/BFS overall will run like normal DFS/BFS

class Solution {
public:

    void bfs (vector <vector <int>>& adj, vector <int> &visited,int source){

        visited [source] = 1;
        queue <int> q;  
        q.push(source);
        int n = adj.size();
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for (int i = 0; i < n; i++){
                if (i != node && !visited[i] && adj[node][i] == 1){
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        vector <int> visited (n);
        int count = 0;

        for (int i = 0; i < n; i++){
           if (!visited[i]){
                bfs (isConnected,visited, i);
                count++;
            }
        }
        return count;
    }
};


class Solution {
public:

    void dfs (vector <vector <int>>& adj, vector <int> &visited,int source){

        visited [source] = 1;   
        int n = adj.size();
        for (int i = 0; i< n ;i++){
            if (i != source && !visited[i] && adj[source][i] == 1){
                dfs(adj,visited,i);
            }
        }   
        
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        vector <int> visited (n);
        int count = 0;

        for (int i = 0; i < n; i++){
           if (!visited[i]){
                dfs (isConnected,visited, i);
                count++;
            }
        }
        return count;
    }
};