class Solution {
    public:
        int uniquePathWithObstaclesHelper (vector <vector <int>>& obstacleGrid, vector <vector <int>>&dp, int m, int n){
    
                if (m == 0 && n == 0){ 
                    if(obstacleGrid[0][0] == 1) return 0;
                    else return 1;
                }
    
                if (m < 0 || n < 0) return 0;
                if (dp[m][n] != -1) return dp[m][n];
                if (obstacleGrid[m][n] == 1) return 0;
    
                int left = uniquePathWithObstaclesHelper(obstacleGrid,dp,m - 1,n);
                int right = uniquePathWithObstaclesHelper(obstacleGrid,dp,m,n-1);
    
                return dp[m][n] = left + right;
    
        }
        int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            
            int m = obstacleGrid.size();
            int n = obstacleGrid[0].size();
            vector <vector <int>> dp(m,vector <int>(n,-1));
    
            return uniquePathWithObstaclesHelper(obstacleGrid,dp,m - 1,n -1);
        }
    };



    class Solution {
        public:
            
            int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
                
                int m = obstacleGrid.size();
                int n = obstacleGrid[0].size();
                vector <vector <int>> dp(m,vector <int>(n,0));
        
               for (int i = 0; i < m; i++){
        
                for (int j = 0; j < n; j++){
        
                    if (i == 0 && j == 0){
                       if (obstacleGrid[i][j] == 0) dp[i][j] = 1;
                       else dp[i][j] = 0;
                    }
                    else {
                        int left = 0, up = 0;
        
                        if (i > 0) up = dp[i - 1][j];
                        if ( j > 0) left = dp[i][j - 1];
        
                        if (obstacleGrid[i][j] == 0) dp[i][j] = up + left;
                        else dp[i][j] = 0;
                    }
                }
               }
        
               return dp[m- 1][n -1];
            }
        };



        class Solution {
            public:
                
                int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
                    
                    int m = obstacleGrid.size();
                    int n = obstacleGrid[0].size();
                    vector <int> prev (n,0);
            
                   for (int i = 0; i < m; i++){
            
                    vector <int> curr (n ,0);
                    for (int j = 0; j < n; j++){
            
                        if (i == 0 && j == 0){
                           if (obstacleGrid[i][j] == 0)curr[j] = 1;
                           else curr[j] = 0;
                        }
                        else {
                            int left = 0, up = 0;
            
                            if (i > 0) up = prev[j];
                            if ( j > 0) left = curr[j - 1];
            
                            if (obstacleGrid[i][j] == 0) curr[j] = up + left;
                            else curr[j] = 0;
                        }
                    }
                    prev = curr;
                   }
            
                   return prev[n -1];
                }
            };