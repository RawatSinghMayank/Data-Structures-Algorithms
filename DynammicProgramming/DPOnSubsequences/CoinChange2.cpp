class Solution {
    public:
        int change(int amount, vector<int>& coins) {
            
        int n = coins.size();
        vector <int> prev(amount + 1), curr(amount+1);
    
       
        for (int i = 0; i <= amount; i++){
            if(i %coins[0] == 0) prev[i] = 1;
        }
         
    
        for (int index = 1; index < n; index++){
    
            for (int amt = 0; amt <= amount; amt++){
                long long take = 0,notTake = 0;
                    if(amt >= coins[index]) take = curr[amt - coins[index]]; // see curr here unbounded knapsack
                    notTake = prev[amt];
                curr[amt] = take + notTake;
            }
            prev = curr;
        }
        return prev[amount];
                    
        }
    
    };


    class Solution {
        public:
            int change(int amount, vector<int>& coins) {
                
            int n = coins.size();
            vector <int> dp(amount + 1);
        
           
            for (int i = 0; i <= amount; i++){
                if(i %coins[0] == 0) dp[i] = 1;
            }
             
        
            for (int index = 1; index < n; index++){
        
                for (int amt = 0; amt <= amount; amt++){
                    long long take = 0,notTake = 0;
                        if(amt >= coins[index]) take = dp[amt - coins[index]];
                        notTake = dp[amt];
                    dp[amt] = take + notTake;
                }
               
            }
            return dp[amount];
                        
            }
        
        };