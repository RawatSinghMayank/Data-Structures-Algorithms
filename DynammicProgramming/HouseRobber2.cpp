class Solution {
    public:
    
        int houseRobber (vector <int>nums){
    
            int n = nums.size();
            int prev2 = 0, prev = nums[0];
    
            for (int i = 1; i < n; i++){
                int take = INT_MIN,notTake = INT_MIN;
    
                take = nums[i];
                if (i > 1) take += prev2;
    
                notTake = prev;
    
                prev2 = prev;
                prev = max(take,notTake);
            }
            return prev;
        }
    
        int rob(vector<int>& nums) {
            
            int n = nums.size();
            if (n == 1) return nums[0];
            
            int robHousesTwoToLast = houseRobber(vector <int>(nums.begin() + 1,nums.end()));
            int robHouseOneToSecondLast = houseRobber(vector <int> (nums.begin(),nums.begin() + n - 1));
            return max(robHousesTwoToLast,robHouseOneToSecondLast);
        }
    };




    class Solution {
        public:
        
            int houseRobber (vector <int>nums,int start,int end){
        
                int prev2 = 0, prev = nums[start];
        
                for (int i = start; i < end; i++){
                    int take = INT_MIN,notTake = INT_MIN;
        
                    take = nums[i];
                    if (i > 1 + start) take += prev2;
        
                    notTake = prev;
        
                    prev2 = prev;
                    prev = max(take,notTake);
                }
                return prev;
            }
        
            int rob(vector<int>& nums) {
                
                int n = nums.size();
                if (n == 1) return nums[0];
        
                int robHousesTwoToLast = houseRobber(nums,0,n -1);
                int robHouseOneToSecondLast = houseRobber(nums,1,n);
                return max(robHousesTwoToLast,robHouseOneToSecondLast);
        
            }
        
        };