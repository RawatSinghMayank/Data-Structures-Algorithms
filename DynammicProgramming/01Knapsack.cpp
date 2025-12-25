

class Solution {
    public:
    
      int valuesMaximized (int W, vector <int>&val, vector <int>&wt,int index,vector <vector <int>>&dp){
      
          if (index  == 0){
              
              if (wt[0] <= W){
                  return val[0];
              }
              else return 0;
          }        
          
          if (dp[index][W] != -1) return dp[index][W];
          
          int notTake = valuesMaximized (W,val,wt,index - 1,dp);
          int take = 0;
          if (W >= wt[index])
           take = val[index] + valuesMaximized(W - wt[index],val,wt,index - 1,dp);
  
          return dp[index][W] = max(notTake,take);
      }
      int knapsack(int W, vector<int> &val, vector<int> &wt) {
          
        int n = val.size();
        vector <vector <int>> dp(n,vector <int>(W+1,-1));
        
         return  valuesMaximized(W,val,wt,n -1,dp);
         
          
      }
  };

int knapsack(int W, vector<int> &val, vector<int> &wt) {
    
  int n = val.size();
  vector <vector <int>> dp(n,vector <int>(W+1,0));
  
    for (int i = 0; i <= W; i++){
        if (wt[0] <= i){
            dp[0][i] = val[0];
        }
    }
   
   for (int i = 1 ; i < n; i++){
       
       for (int j = 0; j <= W; j++){
           int take = 0, notTake = 0;
           if (j >= wt[i]){
               take = val[i] + dp[i-1][j-wt[i]];
           }
           notTake = dp[i-1][j];
           dp[i][j] = max(take,notTake);
       }
   }
   
   return dp[n-1][W];
}



int knapsack(int W, vector<int> &val, vector<int> &wt) {
        
    int n = val.size();
   vector <int> prev(W + 1),curr(W+1);
    
      for (int i = 0; i <= W; i++){
          if (wt[0] <= i){
              prev[i] = val[0];
          }
      }
     
     for (int i = 1 ; i < n; i++){
         
         for (int j = 0; j <= W; j++){
             int take = 0, notTake = 0;
             if (j >= wt[i]){
                 take = val[i] + prev[j-wt[i]];
             }
             notTake = prev[j];
             curr[j] = max(take,notTake);
         }
         prev = curr;
     }
     
     return prev[W];
  }

  int knapsack(int W, vector<int> &val, vector<int> &wt) {
        
    int n = val.size();
   vector <int> prev(W + 1);
    
      for (int i = 0; i <= W; i++){
          if (wt[0] <= i){
              prev[i] = val[0];
          }
      }     
     
     for (int i = 1 ; i < n; i++){
         
         for (int j =  W; j >= 0; j--){
             int take = 0, notTake = 0;
             if (j >= wt[i]){
                 take = val[i] + prev[j-wt[i]];
             }
             notTake = prev[j];
             prev[j] = max(take,notTake);
         }
       
     }
     
     return prev[W];
  }