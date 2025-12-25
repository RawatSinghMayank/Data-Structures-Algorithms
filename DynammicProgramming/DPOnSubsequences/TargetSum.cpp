class Solution {
    public:
    
        int noOfWaysToMakeTarget (vector <int>&nums, int target, int index, vector <vector <int>>&dp){
    
            if (index == 0){
                if (target == 0 && nums[0] == 0) return 2;
                if (target == 0 || nums[0] == target) return 1;
                else return 0;
            }
    
            if (dp[index][target] != -1) return dp[index][target];
    
            int take = 0, notTake = 0;
            if (target >= nums[index]){
                take = noOfWaysToMakeTarget (nums,target - nums[index],index - 1,dp);
            }
            notTake = noOfWaysToMakeTarget (nums,target, index - 1,dp);
    
            return dp[index][target] = take + notTake;
    
        }
    
        int findTargetSumWays(vector<int>& nums, int target) {
            
                    int sum = accumulate(nums.begin(),nums.end(),0);
                  
            int n =nums.size();
            if ((sum - target) < 0 || (sum - target) % 2 ) return 0;
            target = (sum - target)/2;
            vector <vector <int>>dp (n, vector <int>(target + 1,-1));
            return noOfWaysToMakeTarget (nums,target, n - 1,dp);
        }
    };