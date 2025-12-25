class Solution {
    public:
    T.C- O(3^n * 3^n)
        S.C - O(N)
        int maxCherryCanBePicked (vector <vector <int>>&grid, int rows, int cols,int i, int j1, int j2){
            
            if (j1 < 0 || j1 >= cols || j2 < 0 || j2 >= cols) return -1e8;
            if (i == rows - 1){
                
                if(j1 == j2) return grid[i][j1];
                else return grid[i][j1] + grid[i][j2];
            }
    
            int maxi = 0;
            for (int k = -1 ; k <= 1; k++){
    
                for (int l = -1; l <= 1; l++){
    
                    if (j1 == j2) maxi = max (maxi,grid[i][j1] + maxCherryCanBePicked(grid,rows,cols,i + 1,j1 + k,j2 + l));
                    else maxi =  max (maxi,grid[i][j1] + grid[i][j2] + maxCherryCanBePicked (grid,rows,cols,i + 1,j1 +k,j2 + l));
                }
            }
            return maxi;   
        }
    
        int cherryPickup(vector<vector<int>>& grid) {
            int rows = grid.size(), cols = grid[0].size();
            return maxCherryCanBePicked(grid,rows,cols,0,0,cols-1);
        }
    };


    class Solution {
        public:
        
            int maxCherryCanBePicked (vector <vector <int>>&grid, int rows, int cols,int i, int j1, int j2, vector <vector <vector <int>>>&dp){
                
                if (j1 < 0 || j1 >= cols || j2 < 0 || j2 >= cols) return -1e8;
                if (i == rows - 1){
                    
                    if(j1 == j2) return grid[i][j1];
                    else return grid[i][j1] + grid[i][j2];
                }
        
              if (dp[i][j1][j2] != -1) return dp[i][j1][j2];
        
                int maxi = 0;
                for (int k = -1 ; k <= 1; k++){
        
                    for (int l = -1; l <= 1; l++){
        
                        if (j1 == j2) maxi = max (maxi,grid[i][j1] + maxCherryCanBePicked(grid,rows,cols,i + 1,j1 + k,j2 + l,dp));
                        else maxi =  max (maxi,grid[i][j1] + grid[i][j2] + maxCherryCanBePicked (grid,rows,cols,i + 1,j1 +k,j2 + l,dp));
                    }
                }
        
                return dp[i][j1][j2] = maxi;
        
        
                
            }
        
            int cherryPickup(vector<vector<int>>& grid) {
        
                int rows = grid.size(), cols = grid[0].size();
                vector <vector <vector <int>>> dp (rows,vector <vector <int>> (cols,vector <int>(cols,-1)));
        
                return maxCherryCanBePicked(grid,rows,cols,0,0,cols-1,dp);
            }
        };


we two robot pick up the same cheery that cannot be answer. think Only one can pick up and another can..
but they are positive number .if you miss one you loose cherry. think deeply
        class Solution {
            public:
            
                int maxCherryCanBePicked (vector <vector <int>>&grid, int rows, int cols,int i, int j1, int j2, vector <vector <vector <int>>>&dp){
                    
                    if (j1 < 0 || j1 >= cols || j2 < 0 || j2 >= cols || j1 == j2) return -1e8;
                    if (i == rows - 1){
                         return grid[i][j1] + grid[i][j2];
                    }
            
                  if (dp[i][j1][j2] != -1) return dp[i][j1][j2];
            
                    int maxi = 0;
                    for (int k = -1 ; k <= 1; k++){
            
                        for (int l = -1; l <= 1; l++){
            
                        
                             maxi =  max (maxi,grid[i][j1] + grid[i][j2] + maxCherryCanBePicked (grid,rows,cols,i + 1,j1 +k,j2 + l,dp));
                        }
                    }
            
                    return dp[i][j1][j2] = maxi;
            
            
                    
                }
            
                int cherryPickup(vector<vector<int>>& grid) {
            
                    int rows = grid.size(), cols = grid[0].size();
                    vector <vector <vector <int>>> dp (rows,vector <vector <int>> (cols,vector <int>(cols,-1)));
            
                    return maxCherryCanBePicked(grid,rows,cols,0,0,cols-1,dp);
                }
            };