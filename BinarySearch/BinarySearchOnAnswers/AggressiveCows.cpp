int canPlaceCows (vector <int> stalls, int distance, int k){
    
        int cows = 1;    
        int lastCowPosition = stalls[0];
        
        for (int i = 1; i < stalls.size(); i++){
            if (stalls[i] - lastCowPosition >=  distance){
                cows++;
                lastCowPosition = stalls[i];
            }
             if (cows >= k) return true;
        }
        
       
         return false;
    }

    int aggressiveCows(vector<int> &stalls, int k) {

        sort (stalls.begin(),stalls.end());
        
        int result = INT_MIN;
        
        
        
        
        // int consecutiveDistance = 0;
        // for (int i = 1; i< stalls.size(); i++){
        //     consecutiveDistance = min (consecutiveDistance,stalls[i] - stalls[i-1]);
        // } 
        low can be consecutiveDistance if you want to be
        int low = 1,  high = stalls[stalls.size() - 1] - stalls[0];
        
        while (low <= high){
            int mid = low + (high - low)/2;
            
            if (canPlaceCows (stalls,mid,k)){
                result = max (result,mid);
                low = mid + 1;
            }
            else{
                high =  mid - 1;
            }
        }
        
        return result;
        
    }