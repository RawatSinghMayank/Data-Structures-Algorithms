https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1

int countSubsets (vector <int>&arr, int target, int index, vector <vector <int>>&dp){
      
    if (index == 0){
        if (target == 0 && arr[0] == 0) return 2;
        if (target == 0 || arr[0] == target) return 1;
        else return 0;
    }
    
    if (dp[index][target] != -1) return dp[index][target];
   int take = 0,notTake = 0;
   if(target >=arr[index])
   take = countSubsets(arr,target -arr[index],index-1,dp);
   notTake = countSubsets(arr,target,index-1,dp);
     return dp[index][target] = (notTake + take);
     
     
 }
   int perfectSum(vector<int>& arr, int target) {
      
      int n = arr.size();
      vector <vector <int>>dp (n, vector <int>(target + 1,-1));
      return countSubsets(arr,target,n-1,dp);
     
   }




   int perfectSum(vector<int>&arr, int target) {
       
    int n = arr.size();
    vector <vector <int>>dp (n, vector <int>(target + 1,0));
    
    for (int i = 0; i < n; i++){
        dp[i][0] = 1;
    }
    
    if(arr[0] <= target){
        if(arr[0] == 0){
            dp[0][arr[0]] = 2;
        }
        else{
            dp[0][arr[0]] = 1;
        }
    } 
    
    
    
     for (int i = 1; i < n;i++){
         for (int j= 0;j <= target; j++){
             int take = 0,notTake = 0;
             
             if(j >= arr[i])
                 take = dp[i-1][j-arr[i]];
                 
             notTake = dp[i-1][j];
             dp[i][j] = take + notTake;
         }
     }
     
     return dp[n-1][target];
     
 }