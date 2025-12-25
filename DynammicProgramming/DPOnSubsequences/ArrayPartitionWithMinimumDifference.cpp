


int minSubsetSumDifference(vector<int>& arr, int n)
{

    int sum = accumulate(arr.begin(),arr.end(),0);
    vector <vector <int>> dp (n,vector <int>(sum + 1,0));

    for (int i = 0; i < n; i++){
        dp[i][0] = 1;
    }

    if (arr[0] <= sum)
     dp[0][arr[0]] = 1;

    for (int i = 1; i < n; i++){
        for(int j = 1; j <= sum; j++){
            int take =0, notTake = 0;

            if (j >= arr[i]) take = dp[i-1][j-arr[i]];
            notTake= dp[i-1][j];
            dp[i][j] = (take || notTake);
        }
    }   

    int result = INT_MAX;

    for (int i = 0; i <= sum/2; i++){
       if(dp[n-1][i] == 1){
           int firstPart = i;
           int secondPart = sum - i;
           result = min(result,abs(firstPart-secondPart));
       }
    }

    return result;}





    int minSubsetSumDifference(vector<int>& arr, int n)
    {
    
        int sum = accumulate(arr.begin(),arr.end(),0);
        vector <int> prev(sum +1,0),curr(sum+ 1,0);
    
        prev[0] = curr[0] = 1;
    
        if (arr[0] <= sum)
         prev[arr[0]] = 1;
    
        for (int i = 1; i < n; i++){
            for(int j = 1; j <= sum; j++){
                int take =0, notTake = 0;
    
                if (j >= arr[i]) take = prev[j-arr[i]];
                notTake= prev[j];
                curr[j] = (take || notTake);
            }
            prev = curr;
        }   
    
        int result = INT_MAX;
    
        for (int i = 0; i <= sum/2; i++){
           if(prev[i] == 1){
               int firstPart = i;
               int secondPart = sum - i;
               result = min(result,abs(firstPart-secondPart));
           }
        }
    
        return result;}
    
    
    