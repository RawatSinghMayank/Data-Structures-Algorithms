
class Solution {
    public:
    
        int minPathSum(vector<vector<int>>& grid) {
            
            int m = grid.size(), n = grid[0].size();
            vector <vector <int>>dp(m, vector <int>(n,0));
          
            int sum = 0;
            for (int i = 0; i < m; i++){
                
                for (int j = 0; j < n; j++){
    
                    if (i == 0 && j == 0){
                        dp[i][j] = grid[i][j];
                    }
                    else {
                        long long  leftSum = INT_MAX, upSum = INT_MAX;
                        if (j > 0) leftSum = (long long)grid[i][j] + (long long)dp[i][j - 1];
                        if (i > 0)upSum = (long long)grid[i][j] +  (long long)dp[i - 1][j];
    
                    
                        dp[i][j] = min(leftSum,upSum);
                    }
                }
            }
    
            return dp[m -1][n - 1];
            
        }
    };











class Solution {
    public:
    
        int minPathSum(vector<vector<int>>& grid) {
            
            int m = grid.size(), n = grid[0].size();
            vector <vector <int>>dp(m, vector <int>(n,0));
          
            int sum = 0;
            for (int i = 0; i < m; i++){
                
                for (int j = 0; j < n; j++){
    
                    if (i == 0 && j == 0){
                        dp[i][j] = grid[i][j];
                    }
                    else {
                        int   leftSum = 1e9, upSum = 1e9;
                        if (j > 0) leftSum = grid[i][j] + dp[i][j - 1];
                        if (i > 0)upSum = grid[i][j] +  dp[i - 1][j];
    
                    
                        dp[i][j] = min(leftSum,upSum);
                    }
                }
            }
    
            return dp[m -1][n - 1];
            
        }
    };