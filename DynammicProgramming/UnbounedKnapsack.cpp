BEST
class Solution {
    public:
      
      int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
          
          
          int n = val.size();
          vector <int> dp(capacity + 1);
          
          for (int i = 0; i <= capacity; i++){
              if (wt[0] <= i){
                  dp[i] = val[0] * (i/wt[0]);
              }
          }
          
          for (int index = 1 ; index< n; index++){
              for (int cap = 0; cap <= capacity; cap++){
                  
                  int take =0,notTake = 0;
                   if (wt[index] <= cap){
                  take =  val [index] + dp[cap - wt[index]];
              }
              notTake = dp[cap];
              
               dp[cap] =  max(take,notTake);
              }
          }
          
          return dp[capacity];
          
      }
  };



class Solution {
  public:
    
int unboundedKnapSack (vector <int>& val ,vector <int>& wt, int capacity, int index,vector <vector <int>>&dp){
        
           
            if (index == 0){
                if (wt[0] <= capacity){
                    return val[0] * (capacity/wt[0]);
                }
                else return 0;
            }
            
            if (dp[index][capacity] != -1) return dp[index][capacity];
            int take = 0, notTake = 0;
            
            if (wt[index] <= capacity){
                take =  val [index] + unboundedKnapSack (val,wt,capacity - wt[index],index ,dp);
            }
            notTake = unboundedKnapSack (val,wt,capacity ,index - 1 ,dp);
            
            return dp[index][capacity] =  max(take,notTake);
    }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        
        
        int n = val.size();
        vector <int> prev(capacity + 1),curr(capacity + 1);
        
        for (int i = 0; i <= capacity; i++){
            if (wt[0] <= i){
                prev[i] = val[0] * (i/wt[0]);
            }
        }
        
        for (int index = 1 ; index< n; index++){
            for (int cap = 0; cap <= capacity; cap++){
                
                int take =0,notTake = 0;
                 if (wt[index] <= cap){
                take =  val [index] + curr[cap - wt[index]];
            }
            notTake = prev[cap];
            
             curr[cap] =  max(take,notTake);
            }prev = curr;
        }
        
        return prev[capacity];
        
    }
};


class Solution {
    public:
      
  int unboundedKnapSack (vector <int>& val ,vector <int>& wt, int capacity, int index,vector <vector <int>>&dp){
          
             
              if (index == 0){
                  if (wt[0] <= capacity){
                      return val[0] * (capacity/wt[0]);
                  }
                  else return 0;
              }
              
              if (dp[index][capacity] != -1) return dp[index][capacity];
              int take = 0, notTake = 0;
              
              if (wt[index] <= capacity){
                  take =  val [index] + unboundedKnapSack (val,wt,capacity - wt[index],index ,dp);
              }
              notTake = unboundedKnapSack (val,wt,capacity ,index - 1 ,dp);
              
              return dp[index][capacity] =  max(take,notTake);
      }
      int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
          
          
          int n = val.size();
          vector <vector <int>>dp (n, vector <int>(capacity + 1,0));
          
          for (int i = 0; i <= capacity; i++){
              if (wt[0] <= i){
                  dp[0][i] = val[0] * (i/wt[0]);
              }
          }
          
          for (int index = 1 ; index< n; index++){
              for (int cap = 0; cap <= capacity; cap++){
                  
                  int take =0,notTake = 0;
                   if (wt[index] <= cap){
                  take =  val [index] + dp[index][cap - wt[index]];
              }
              notTake = dp[index - 1][cap];
              
               dp[index][cap] =  max(take,notTake);
              }
          }
          
          return dp[n-1][capacity];
          
      }
  };


  class Solution {
    public:

      int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
          
          
          int n = val.size();
          vector <int> prev(capacity + 1),curr(capacity + 1);
          
          for (int i = 0; i <= capacity; i++){
              if (wt[0] <= i){
                  prev[i] = val[0] * (i/wt[0]);
              }
          }
          
          for (int index = 1 ; index< n; index++){
              for (int cap = 0; cap <= capacity; cap++){
                  
                  int take =0,notTake = 0;
                   if (wt[index] <= cap){
                  take =  val [index] + curr[cap - wt[index]];
              }
              notTake = prev[cap];
              
               curr[cap] =  max(take,notTake);
              }prev = curr;
          }
          
          return prev[capacity];
          
      }
  };



