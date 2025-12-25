class Solution {
    public:
    Time Complexity ≈ O(2^n)
    s.c - o (n)
        int minimumSum (vector <vector <int>>&triangle, int row,int col,int n){
    
            if (row == n ){
                return triangle[row][col];
            }
    
        int justBottom = triangle[row][col] + minimumSum (triangle,row + 1,col,n);
        int bottomAndRight = triangle[row][col] + minimumSum(triangle,row + 1,col + 1,n);
    
        return min(justBottom , bottomAndRight);
        
    
        }
    
        int minimumTotal(vector<vector<int>>& triangle) {
            int row = triangle.size() - 1;
        return minimumSum(triangle,0,0,row);
        }
    };



    class Solution {
        public:
        T.C= O (m * n) 
        S..C = O(m) + (m * m)
        
            int minimumSum (vector <vector <int>>&triangle, int row,int col,int n, vector <vector <int>>&dp){
        
                if (row == n ){
                    return triangle[row][col];
                }
        
            if (dp[row][col] != -1) return dp[row][col];
        
            int justBottom = triangle[row][col] + minimumSum (triangle,row + 1,col,n,dp);
            int bottomAndRight = triangle[row][col] + minimumSum(triangle,row + 1,col + 1,n,dp);
        
            return dp[row][col] = min(justBottom , bottomAndRight);
            
        
            }
        
            int minimumTotal(vector<vector<int>>& triangle) {
        
                int row = triangle.size() - 1;
            vector <vector <int>>dp (row,vector <int>(row,-1));
            return minimumSum(triangle,0,0,row,dp);
        
            }
        };


        class Solution {
            public:
                int minimumTotal(vector<vector<int>>& triangle) {
                    
                    int row = triangle.size();
                    vector <vector <int>>dp(row,vector <int>(row,1e9));
                    int result = INT_MAX;
            
                    for (int i = 0; i < row; i++){
            
                        int col = triangle[i].size();
            
                        for (int j = 0; j < col; j++){
                            if (i == 0 && j == 0){
                                dp[i][j] = triangle[i][j];
                            }
                            else {
                                int first = 1e9,second = 1e9;
                               if (i > 0) first = triangle[i][j] + dp[i - 1][j];
                               if (i > 0 && j > 0 ) second = triangle[i][j] + dp[i-1][j-1];
            
                               dp[i][j] = min(first,second);
                               
                            }
                           if (i == row - 1)  result = min (result,dp[i][j]);
                        }
                    }
            
                    return result;
                    
                }
            };




            class Solution {
                public:
                    int minimumTotal(vector<vector<int>>& triangle) {
                        
                        int row = triangle.size();
                        vector <vector <int>>dp(row,vector <int>(row,0));
                
                        for (int i = 0; i < row; i++) {
                            dp[row - 1][i] = triangle[row - 1][i];
                        }
                
                        for (int i = row - 2; i >= 0; i--){
                
                
                            for (int j = i; j >=0; j--){
                                int first = triangle[i][j] + dp[i + 1][j];
                                int second = triangle[i][j] + dp[i + 1][j + 1];
                                dp[i][j] = min(first,second);
                            }
                        }
                
                        return dp[0][0];
                    }
                };




                class Solution {
                    public:
                        int minimumTotal(vector<vector<int>>& triangle) {
                            
                            int row = triangle.size();
                            vector <int> dp(row),temp(row);
                    
                            for (int i = 0; i < row; i++) {
                                dp[i] = triangle[row - 1][i];
                            }
                    
                            for (int i = row - 2; i >= 0; i--){
                    
                               
                    
                                for (int j = i; j >=0; j--){
                                    int first = triangle[i][j] + dp[j];
                                    int second = triangle[i][j] + dp[j + 1];
                                    temp[j] = min(first,second);
                                }
                                dp = temp;
                            }
                    
                            return dp[0];
                        }
                    };