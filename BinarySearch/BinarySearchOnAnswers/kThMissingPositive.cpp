class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n = arr.size();
        int count = 1;
        for (int i = 0; k > 0 && i < n;){
            
            if (arr[i] == count){
                count++;
                i++;
            }
            else{
              
                k--;
                  if (k > 0)count++;
            }
        }
        
    while (k  > 0){
        k--;
       if( k > 0) count++;
    }
        return count;
    }
};


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int low = 0,  high = arr.size() - 1;

        while (low <= high){
            int mid = low + (high - low)/2;

            if (arr[mid] - (mid + 1) < k) low = mid + 1;
            else high =  mid - 1;
        }
        return 1 + high + k;
    }
};