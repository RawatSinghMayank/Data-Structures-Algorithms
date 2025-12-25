 public int nthRoot(int n, int m) {
        // code here
        int low = 1, high = m;
        long  result = 1;
        while (low <= high){
            int mid = low + (high - low)/2;
            result = 1;
            
            for (int i = 1; i <= n; i++){
                result *= mid;
            }
            
            if (result == m) return mid;
            else if (result < m) low =  mid + 1;
            else high = mid - 1;
            
        }
            return -1;
    }



this one time complexity = log(m) * log (n) (log(m) for binary search and log(n) for power exponential)
*** This solution will be failed in coding ninjas platform.
Reason: 1 <= n <= 30
1 <= m <= 10^9

Think m is 10^9 and our mid came around 10^5 and n 30 . Then (10^9)^ 30 overflow ,extreme overflow condition
see the modification in below code

 static  int  pow (int x , int  n){
            
            int result = 1;
            
            while (n != 0){
            
                if (n % 2 != 0){
                    result *= x;
                }    
              x = x* x;
                n =  n /2;
            }
            return result;
    }
    
    public int nthRoot(int n, int m) {
        // code here
        int low = 1, high = m;
        long  result = 1;
        while (low <= high){
            int mid = low + (high - low)/2;
       
            result = pow (mid, n);
            if (result == m) return mid;
            else if (result < m) low =  mid + 1;
            else high = mid - 1;
            
        }
            return -1;
    }




the exponential power calculation method will not work because it can cause overflow
The function pow(x, n, m) could still overflow when computing large powers.

Instead of checking result > m, we should compare result step-by-step.
public class Solution {

    static long pow(int x, int n, int m) {
       
       long result = 1;
       for (int i = 1; i <= n; i++){
           result *= x;
           if (result > m) break;
       }
       return result;
    }

    public static int NthRoot(int n, int m) {
        int low = 1, high = m;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long result = pow(mid, n, m);

            if (result == m) return mid;
            else if (result > m) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }


}
