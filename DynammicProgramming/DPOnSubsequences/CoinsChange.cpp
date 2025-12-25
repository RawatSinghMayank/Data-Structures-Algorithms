class Solution {
    public:

    
    https://leetcode.com/problems/coin-change/

        int minCoins (vector <int>& coins, int amount, int index, vector <vector <int>>&dp){
    
            if (amount == 0) return 0;
            if (index == 0){
                if (amount % coins[0] == 0) return (amount /coins[0]);
                else return 1e8;
            }
    
            if (dp[index][amount] != -1 ) return dp[index][amount];
    
            int take = 1e8, notTake = 1e8;
            notTake = 0 + minCoins (coins,amount,index - 1,dp);
    
            if(coins[index] <= amount){
                take = 1 +  minCoins (coins,amount - coins[index], index,dp);
            }
    
            return dp[index][amount] = min(notTake,take);
    
        }
    
        int coinChange(vector<int>& coins, int amount) {
            
            int n = coins.size();
            vector <vector <int>>dp (n, vector <int>(amount + 1,-1));
    
            int result = minCoins(coins,amount,n - 1,dp);
    
            return result == 1e8 ? -1 : result;
        }
    };

    class Solution {
        public:
            int coinChange(vector<int>& coins, int amount) {
                
                int n = coins.size();
                vector <vector <int>>dp (n, vector <int>(amount + 1,0));
        
               for (int i = 0; i <= amount; i++){
                if (i % coins[0] == 0)
                    dp[0][i] = i / coins[0];
                else 
                    dp[0][i] = 1e8;
               }
        
        
                for (int index = 1; index < n; index++){
        
                    for (int amt = 0; amt <= amount; amt++){
        
                        int take = 1e8,notTake = 1e8;
                         notTake = 0 + dp[index -1][amt];
        
                            if(coins[index] <= amt){
                                take = 1 +  dp[index][amt - coins[index]];
                            }
                        dp[index][amt] = min(take,notTake);
                    }
                }
                int result = dp[n -1][amount];
        
                return result == 1e8 ? -1 : result;
            }
        };