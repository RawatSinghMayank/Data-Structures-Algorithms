class Solution {
    public:
    
        int LCS (string &text1, string &text2 , int index1, int index2){
    
            if (index1 < 0 || index2 < 0) return 0;
            int left = 0, right = 0;
            if (text1[index1] == text2[index2])   return 1 + LCS (text1,text2, index1-1, index2-1);
            else {
             left = LCS (text1,text2, index1-1,index2);
             right = LCS (text1,text2,index1,index2-1);
            }
            return max(left,right);
        }
    
        int longestCommonSubsequence(string text1, string text2) {
            
            return LCS (text1,text2,text1.length()-1,text2.length()-1);
        }
    };



    class Solution {
        public:
        
            int LCS (string &text1, string &text2 , int index1, int index2,vector <vector <int>>&dp){
        
                if (index1 < 0 || index2 < 0) return 0;
                int left = 0, right = 0;
                if (dp[index1][index2] != -1) return dp[index1][index2];
        
                if (text1[index1] == text2[index2])   return dp[index1][index2] =  1 + LCS (text1,text2, index1-1, index2-1,dp);
                else {
                 left = LCS (text1,text2, index1-1,index2,dp);
                 right = LCS (text1,text2,index1,index2-1,dp);
                }
                return dp[index1][index2] = max(left,right);
            }
        
            int longestCommonSubsequence(string text1, string text2) {
                
                int n1 = text1.length(), n2 = text2.length();
        
                vector <vector <int>> dp (n1, vector <int>(n2,-1));
                return LCS(text1,text2,n1 -1 ,n2-1,dp);
               

            }
        };




        SHIFTING OF INDEX ALSO GIVES SAME ANSWER.IMPORTANT TO LEARN FOR TABULATION 



        class Solution {
            public:
            
                int LCS (string &text1, string &text2 , int index1, int index2,vector <vector <int>>&dp){
            
                   if (index1 == 0 || index2 == 0) return 0;
                    int left = 0, right = 0;
                    if (dp[index1][index2] != -1) return dp[index1][index2];
            
                    if (text1[index1- 1] == text2[index2 - 1])   return dp[index1][index2] =  1 + LCS (text1,text2, index1-1, index2-1,dp);
                    else {
                     left = LCS (text1,text2, index1-1,index2,dp);
                     right = LCS (text1,text2,index1,index2-1,dp);
                    }
                    return dp[index1][index2] = max(left,right);
                }
            
                int longestCommonSubsequence(string text1, string text2) {
                    
                    int n1 = text1.length(), n2 = text2.length();
            
                    vector <vector <int>> dp (n1 + 1, vector <int>(n2 + 1,-1));
                    return LCS(text1,text2,n1 ,n2,dp);
                
                }
            };


            class Solution {
                public:
                
                    
                
                    int longestCommonSubsequence(string text1, string text2) {
                        
                        int n1 = text1.length(), n2 = text2.length();
                
                        vector <vector <int>> dp (n1 + 1, vector <int>(n2 + 1,0));
                    
                        for (int i = 0; i <= n1; i++){
                            dp[i][0] = 0;
                        }
                
                        for (int i = 0; i <= n2; i++){
                            dp[0][i] = 0;
                        }
                
                        for (int i = 1; i <= n1; i++){
                            for (int j = 1 ; j <= n2; j++){
                                int take = 0, notTake = 0;
                                if ( text1[i-1] == text2[j-1])
                                     dp[i][j] = 1 + dp[i-1][j-1];
                                else 
                                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                                }
                            }
                    
                        return dp[n1][n2];
                    }
                };



                class Solution {
                    public:
                        int longestCommonSubsequence(string text1, string text2) {
                            
                            int n1 = text1.length(), n2 = text2.length();
                    
                            vector <int> prev (n2 + 1), curr(n2 + 1);
                        
                            for (int i = 0; i <= n2; i++){
                                prev[i] = 0;
                            }
                    
                    
                            for (int i = 1; i <= n1; i++){
                                for (int j = 1 ; j <= n2; j++){
                                    int take = 0, notTake = 0;
                                    if ( text1[i-1] == text2[j-1])
                                         curr[j] = 1 + prev[j-1];
                                    else 
                                        curr[j] = max(prev[j],curr[j-1]);
                                    } prev = curr;
                                }
                        
                            return prev[n2];
                        }
                    };