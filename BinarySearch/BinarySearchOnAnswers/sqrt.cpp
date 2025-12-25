 int floorSqrt(int n) {
        
        int low = 1;
        int high = n;
        
        while (low <= high){
            int mid = low + (high - low)/2;
            
            if (mid * mid == n){
                return mid;
            }
            else if (mid * mid < n){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return high;
    }


  int floorSqrt(int n) {
        int i;
        for ( i = 1; i <= n; i++){
            if (i * i == n) return i;
            else if (i * i > n)break;
        }
        return i - 1;
    }