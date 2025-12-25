https://leetcode.com/problems/partition-equal-subset-sum/description/

class Solution {
    public:
    
        int countOfHalfSum (vector <int>&nums,int sum, int index, vector <vector <int>>&dp){
    
            if (sum == 0) return 1;
            if (index == 0) return nums[0] == sum;
    
            if (dp[index][sum] != -1) return dp[index][sum];
            int take = 0, notTake = 0;
            
            notTake = countOfHalfSum (nums,sum,index -1, dp);
            
            if(sum >= nums[index]){
                take = countOfHalfSum(nums,sum - nums[index],index-1,dp);
            }
    
            return dp[index][sum] = (take || notTake);
        }
    
        bool canPartition(vector<int>& nums) {
            
            int n = nums.size();
            int sum = accumulate(nums.begin(),nums.end(),0);
            if (sum %2 != 0) return false;
    
            vector <vector <int>>dp (n, vector <int>(sum/2 + 1,-1));
    
            return countOfHalfSum (nums,sum/2,n-1,dp);
        }
    
    };