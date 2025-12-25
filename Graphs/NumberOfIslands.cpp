https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1  


T.C= O(N^2) + O(N^2) * 9 at max
void bfs (vector <vector <char>>& grid,vector <vector <int>>& visited,int row, int col){
    
        int m = grid.size();
        int n = grid[0].size();
        
        queue <pair <int,int>> q;
        q.push({row,col});
        visited[row][col] = 1;
        
        while (!q.empty()){
            row = q.front().first;
            col = q.front().second;
            q.pop();
            
            for (int i = - 1; i <= 1; i++){
                for (int j = - 1; j <= 1; j++){
                    if (row + i >=0 && row + i < m && col + j >=0 && col + j < n 
                    && grid[row + i][col + j] == '1' && !visited[row + i][col + j]){
                        q.push({row + i, col + j});
                        visited[row+i][col+j] = 1;
                    }
                }
            }
        }
        
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int count = 0;
        int row = grid.size(), col = grid[0].size();
        vector <vector <int>> visited (row,vector <int> (col,0));
        
        for (int i = 0; i < row; i++){
            
            for (int j = 0; j < col; j++){

                if (!visited[i][j] && grid[i][j] == '1'){
                    bfs (grid,visited,i,j);
                    count++;
                }
            }
        }
        
        return count;
    }