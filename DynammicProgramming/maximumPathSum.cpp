https://www.geeksforgeeks.org/problems/path-in-matrix3805/1

// User function Template for C++

class Solution {
    public:
  
      int maximumPathSum (vector <vector <int>>& mat,int row,int col,int m, int n){
  
          
          if (m == row - 1  ){
              return mat[m][n];
          }
          T.C- O(3^n)*n
          S.C- O(n)
          
          int choice1 = 0,choice2 = 0, choice3 = 0;
          if (n > 0)
              choice1 = mat[m][n] + maximumPathSum(mat,row ,col, m + 1, n - 1);
               choice2 =mat[m][n] +  maximumPathSum(mat,row,col,m + 1,n);
          if (n + 1 < col)
               choice3 =mat[m][n] +  maximumPathSum(mat,row,col,m + 1,n + 1);
          
          return max(choice1, max(choice2,choice3));
  
      }
  
      int maximumPath(vector<vector<int>>& mat) {
          
      int row = mat.size();
      int col = mat[0].size();
      int maxi = 0;
      for (int i = 0; i < col; i++){
          maxi =  max (maxi,maximumPathSum(mat,row,col,0,i));
      }
          
       return maxi;
      }
  };
class Solution {
    public:
  
      int maximumPathSum (vector <vector <int>>& mat,int row,int col,int m, int n,vector <vector <int>>&dp){
  
          T.C- O(m * n)
          S.C - O(m * n) + O(m)
          if (m == row - 1  ){
              return mat[m][n];
          }
          if (dp[m][n] != -1) return dp[m][n];
          
          int choice1 = 0,choice2 = 0, choice3 = 0;
          if (n > 0)
              choice1 = mat[m][n] + maximumPathSum(mat,row ,col, m + 1, n - 1,dp);
               choice2 =mat[m][n] +  maximumPathSum(mat,row,col,m + 1,n,dp);
          if (n + 1 < col)
               choice3 =mat[m][n] +  maximumPathSum(mat,row,col,m + 1,n + 1,dp);
          
          return dp[m][n] = max(choice1, max(choice2,choice3));
  
      }
  
      int maximumPath(vector<vector<int>>& mat) {
          
      int row = mat.size();
      int col = mat[0].size();
      int maxi = 0;
      vector <vector <int>>dp (row,vector <int>(col,-1));
      for (int i = 0; i < col; i++){
          maxi =  max (maxi,maximumPathSum(mat,row,col,0,i,dp));
      }
          
       return maxi;
      }};



class Solution {
    public:
  
      int maximumPath(vector<vector<int>>& mat) {
          
      int row = mat.size();
      int col = mat[0].size();
      int maxi = 0;
      vector <vector <int>>dp (row,vector <int>(col,0));
      int result = 0;
      for (int i = 0; i < row; i++){
          
          for (int j = 0; j < col; j++){
              
              if (i == 0){
                  dp[i][j] = mat[i][j];
              }
              
              else {
                  int onePath = 0, secondPath = 0, thirdPath = 0;
                   onePath = mat[i][j] + dp[i -1][j];
                  if (j + 1 < col) secondPath = mat[i][j] + dp[i - 1][j + 1];
                  if (j > 0) thirdPath = mat[i][j] + dp[i -1][j - 1];
                  
                  int maxi = max (onePath,max(secondPath,thirdPath));
                  
                  dp[i][j] = maxi;
                  
              }
              result = max (result,dp[i][j]);
              
          }
      }
      
      return result;
       
      }};


      class Solution {
        public:
      
          int maximumPath(vector<vector<int>>& mat) {
              
          int row = mat.size();
          int col = mat[0].size();
          int maxi = 0;
          
          vector <int> dp (col),temp(col);
          
          int result = 0;
          for (int i = 0; i < row; i++){
              
              for (int j = 0; j < col; j++){
                  
                  if (i == 0){
                      temp[j] = mat[i][j];
                  }
                  
                  else {
                      int onePath = 0, secondPath = 0, thirdPath = 0;
                       onePath = mat[i][j] + dp[j];
                      if (j + 1 < col) secondPath = mat[i][j] + dp[j + 1];
                      if (j > 0) thirdPath = mat[i][j] + dp[j - 1];
                      
                       maxi = max (onePath,max(secondPath,thirdPath));
                      
                      temp[j] = maxi;
                      
                  }
                  result = max (result,temp[j]);
                  
              }
              dp = temp;
          }
          
          return result;
           
          }};