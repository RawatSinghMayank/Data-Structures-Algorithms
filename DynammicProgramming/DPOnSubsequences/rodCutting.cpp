https://www.geeksforgeeks.org/problems/rod-cutting0840/1


int maxPriceObtained (vector <int>&price,int size, int index, vector <vector <int>>&dp){
      
    if (index == 0){
         return size * price[0];
     }
    
    if(dp[index][size] != -1) return dp[index][size];
    int cut = 0, notCut = 0;

    int rodLength = index + 1;
    if (rodLength <= size){
        cut = price[index] + maxPriceObtained (price,size - rodLength,index,dp);
        
    }
    notCut = 0 + maxPriceObtained (price,size, index - 1,dp);
    
    return dp[index][size] =  max(cut,notCut);
      
    
  }
    
    int cutRod(vector<int> &price) {
       
       int n = price.size();
    vector <vector <int>> dp(n , vector<int>(n + 1,-1));
    return maxPriceObtained (price,n,n - 1,dp);
        

    }

    int cutRod(vector<int> &price) {
       
        int n = price.size();
         vector <int> dp(n+1);
         
         for (int i = 1; i <= n; i++) dp[i] = i * price[0];
         
         for (int i = 1; i < n; i++){
             int rodLength = i + 1;
             for (int j = 1; j <= n; j++){
                 int take = 0, notTake =0;
                 if (j >= rodLength){
                     take = price[i] + dp[j - rodLength];
                 }
                 notTake = dp[j];
                 dp[j] = max(take,notTake);
             }
         }
         
         return dp[n];
         
     }
