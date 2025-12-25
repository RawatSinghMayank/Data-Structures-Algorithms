class Solution {
public:

    int fibo (vector <int>&dp , int n){
        if (n <= 1) return n;
        if (dp[n] != -1) return dp[n];

        else return dp[n] = fib(n-1) + fib(n-2); 
    }
    
    int fib(int n) {
        // if (n <= 1) return n;
        // else return fib(n-1) + fib(n-2);

       // vector <int> dp(n + 1, -1);
      //  return fibo(dp,n);

    //     if (n <= 1) return n;
    //   dp[0] = 0, dp[1] = 1;
    //   for (int i = 2; i <= n; i++){
    //     dp[i] = dp[i-1] + dp[i-2];

    //   }

     // return dp[n];

     if (n <= 1) return n;

     int prev = 1, prev2 = 0;
    int curr;
     for (int i = 2; i <= n; i++){
         curr = prev + prev2;
        prev2 = prev;
        prev = curr;
     }


     return  curr;

    }
};