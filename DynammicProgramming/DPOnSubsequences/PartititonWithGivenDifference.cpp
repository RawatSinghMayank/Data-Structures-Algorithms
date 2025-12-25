#include <bits/stdc++.h> 
int mod = 1e9 + 7;
https://www.naukri.com/code360/problems/partitions-with-given-difference_3751628?leftPanelTabValue=PROBLEM


 int countSumwithTarget (vector <int>&arr, int target, int index,vector <vector <int>>&dp){
        
        if(index == 0){
            if (target == 0 && arr[0] == 0)return 2;
            if(target == 0 || arr[index] == target) return 1;
            else return 0;
        }
        
        if(dp[index][target] != -1) return dp[index][target];
        int take = 0,notTake = 0;
        
        if(arr[index] <= target){
            take = countSumwithTarget(arr,target-arr[index],index-1, dp);
        }
        notTake = countSumwithTarget (arr,target,index-1, dp);
        
        return dp[index][target] = (take + notTake)%mod;
    }
    int countPartitionss(vector<int>& arr, int d) {
       
        
        int n = arr.size();
        
        int sum = 0;
        
        for (auto it : arr){
            sum += it;
        }
        
         int target = (sum - d)/2;
        if (sum - d < 0 || (sum - d) % 2 != 0) return false;

        vector <vector <int>>dp (n, vector <int>(target + 1,-1));
        
       
        
        return countSumwithTarget (arr,target,n -1,dp);
        
    }
int countPartitions(int n, int d, vector<int> &arr) {
   return countPartitionss(arr,d);
}




#include <bits/stdc++.h> 
int mod = 1e9 + 7;
int countPartitions(int n, int d, vector<int> &arr) {
    
        
        int sum = 0;
        
        for (auto it : arr){
            sum += it;
        }
        
         int target = (sum - d)/2;
        if (sum - d < 0 || (sum -d) % 2 != 0) return false;
        
        vector <vector <int>>dp (n, vector <int>(target + 1,0));
        
       
        
        for (int i = 0; i < n; i++){
            dp[i][0] = 1;
        }
        
        if(arr[0] <= sum){
            if(arr[0] == 0) dp[0][0] = 2;
            else dp[0][arr[0]] = 1;
        }
        
        for (int i = 1; i < n; i++){
            for (int j = 0; j <= target; j++){
                int take = 0, notTake = 0;
                
                if (j >= arr[i]) take = dp[i-1][j-arr[i]];
                notTake = dp[i-1][j];
                
                dp[i][j] = (take + notTake)%mod;
            }
            
        }
        
        return dp[n-1][target];
}


