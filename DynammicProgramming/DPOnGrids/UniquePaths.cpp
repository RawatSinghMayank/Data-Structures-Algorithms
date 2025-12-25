https://leetcode.com/problems/unique-paths/



class Solution {
    public:
    T.C= O(2^mn) S.C-O(m-1 + n - 1)
   
            int totalWays (int m, int n, int sr,int sc){
                if (sr == m - 1 && sc == n -1) return 1;
                if (sr >= m || sc >= n) return 0;
        
                int onePathPossible = totalWays(m,n,sr+1,sc);
                int anotherPath = totalWays(m,n,sr,sc+1);
        
                return onePathPossible + anotherPath;
            }
            int uniquePaths(int m, int n) {
                
                return totalWays(m,n,0,0);
            }
        };

        class Solution {
            public:
            
                int totalWays (int m, int n,vector <vector<int>>&dp){
                  
                 T.C- O(m * n ) 
                 S.C - O(m- 1 + n-1)//path length of recursion stack space 
                 + O(n*m) dp array
                    if (m == 0 && n == 0) return 1;
                    if (m < 0 || n < 0) return 0;
                    if (dp[m][n] != -1) return dp[m][n];
            
                    int onePathPossible = totalWays(m - 1,n,dp);
                    int anotherPath = totalWays(m,n -1,dp);
            
                    return dp[m][n] = onePathPossible + anotherPath;
                }
                int uniquePaths(int m, int n) {
                    
                    vector <vector <int>>dp (m,vector <int>(n,-1));
                    return totalWays(m -1,n -1,dp);
                }
            };



            class Solution {
                public:
                    int uniquePaths(int m, int n) {
                        
                        vector <vector <int>>dp (m,vector <int>(n,0));
                
                        
                        for (int i = 0; i < m; i++){
                            for (int j = 0; j < n; j++){
                                if(i == 0 && j == 0) dp[i][j] = 1;
                                
                                else {
                        
                                    int right = 0, down = 0;
                                    if (i > 0) right = dp[i - 1][j];
                                    if (j > 0) down = dp[i][j - 1];
                                    dp[i][j] = down + right;
                                }
                             
                            }
                        }
                
                        return dp[m - 1][n-1];
                    }
                };




                class Solution {
                    public:
                        int uniquePaths(int m, int n) {
                            
                            vector <vector <int>>dp (m,vector <int>(n,0));
                    
                            
                            for (int i = 0; i < m; i++){
                                for (int j = 0; j < n; j++){
                                    if(i == 0 && j == 0) dp[i][j] = 1;
                                    
                                    else {
                            
                                        int right = 0, down = 0;
                                        if (i > 0) right = dp[i - 1][j];
                                        if (j > 0) down = dp[i][j - 1];
                                           dp[i][j] = down + right;
                                    }
                                 
                                }
                            }
                    
                            return dp[m - 1][n-1];
                        }
                    };







                class Solution {
                    public:
                        int uniquePaths(int m, int n) {
                            
                           vector <int> prev(n,0);
                            for (int i = 0; i < m; i++){
                    
                                vector <int> curr(n,0);
                                for (int j = 0; j < n; j++){
                                    if(i == 0 && j == 0) {
                                      curr[j] = 1;
                                    }
                                    
                                    else {
                            
                                        int left = 0, above = 0;
                                        if (i > 0) above = prev[j];
                                        if (j > 0) left = curr[j-1];
                                        curr[j] = above + left;
                                    }
                                   
                                 
                                }
                                 prev = curr;
                            }
                    
                            return prev[n - 1];
                        }
                    };