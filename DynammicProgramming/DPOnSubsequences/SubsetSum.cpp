bool isSumPossible (vector <int>&arr, int index, int sum,vector <vector <int>>&dp){
        
    if (sum == 0) return true;
    if (index == 0) return (sum == arr[0]);
    
    if (dp[index][sum] != -1) return dp[index][sum];
    bool notTake = isSumPossible(arr,index - 1,sum,dp);
    bool take = false;
    
    if (sum >= arr[index]){
        take = isSumPossible(arr,index - 1,sum - arr[index],dp);
    }
    
   return dp[index][sum] =  (take || notTake);
}

bool isSubsetSum(vector<int>& arr, int sum) {
    
    int n = arr.size();
    vector <vector <int>> dp(n,vector <int>(sum + 1, -1));
    return isSumPossible(arr,n - 1,sum,dp);
    
}





bool isSubsetSum(vector<int>& arr, int sum) {
      
    int n = arr.size();
    vector <vector <bool>>dp (n,vector <bool>(sum + 1,0));
    
    for (int i = 0; i < n; i++){
        dp[i][0] = true;
    }
   
    dp[0][arr[0]] = true;
    
    
    for (int i = 1; i < n; i++){
        
        for (int j = 1; j <= sum; j++){
            bool take = false, notTake = false;
            notTake = dp[i-1][j];
            
            if (j >= arr[i])
              take = dp[i-1][j - arr[i]];
          dp[i][j] = (take || notTake);    
        }
        
    }}



    bool isSubsetSum(vector<int>& arr, int sum) {
      
        int n = arr.size();
        vector <bool> prev (sum + 1),curr(sum + 1);
        
        prev[0] = curr[0] = true;
        prev[arr[0]] = true;
        
        for (int i = 1; i < n; i++){
            
            for (int j = 1; j <= sum; j++){
                bool take = false, notTake = false;
                notTake = prev[j];
                
                if (j >= arr[i])
                  take = prev[j - arr[i]];
              curr[j] = (take || notTake);    
            }
            prev = curr;
            
        }
          
          return prev[sum];
      }