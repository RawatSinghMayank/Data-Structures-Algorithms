class Solution {
    public:
        int minInsertions(string s) {
            
            string revString = s;
            reverse(revString.begin(),revString.end());
    
            int m = s.length(), n = revString.length();
            
            vector <vector <int>> dp (m+ 1,vector <int>(n + 1,0));
    
            for (int i =1; i <= m;i ++){
                for (int j = 1; j <= n; j++){
                    if (s[i-1] == revString[j-1]){
                        dp[i][j] = 1 + dp[i-1][j-1];
    
                    }
                    else {
                        dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
    
            return s.length() - dp[m][n];
    
        }
    };

    class Solution {
        public:
        
            int minInsertionsToMakePalindrome (string &s, int i, int j){
                if (i >= j) return 0;
        
                if (s[i] == s[j]) return minInsertionsToMakePalindrome(s,i +1 , j-1);
                else return 1 + min(minInsertionsToMakePalindrome (s,i,j-1),minInsertionsToMakePalindrome (s,i+1,j));
            }
            
            int minInsertions(string s) {
                
                int m = s.length();
                return minInsertionsToMakePalindrome(s,0,m-1);
                
                vector <vector <int>> dp (m+ 1,vector <int>(m + 1,0));
        
            }
        };




        class Solution {
            public:
            
                int minInsertionsToMakePalindrome (string &s, int i, int j,vector <vector <int>>&dp){
                    if (i >= j) return 0;
                    if(dp[i][j] != -1) return dp[i][j];
            
                    if (s[i] == s[j]) return dp[i][j] =  minInsertionsToMakePalindrome(s,i +1 , j-1,dp);
                    else return dp[i][j] =  1 + min(minInsertionsToMakePalindrome (s,i,j-1,dp),minInsertionsToMakePalindrome (s,i+1,j,dp));
                }
                
                int minInsertions(string s) {
                    
                    int m = s.length();
                   
                    vector <vector <int>>dp (m ,vector <int>(m,-1));
                   return minInsertionsToMakePalindrome(s,0,m-1,dp);
                }
            };