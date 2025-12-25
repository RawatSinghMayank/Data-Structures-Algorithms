  int findKRotation(vector<int> &arr) {

        int n = arr.size();
        
        if (arr[0] > arr[1]) return 1;
        else if (arr[n-2] > arr[n-1]) return n - 1;
        
        for (int i = 1; i <= n - 2; i++){
            if (arr[i] <= arr[i-1] && arr[i] <= arr[i+1]) return i;
            
        }
        return 0;
    }

 int findKRotation(vector<int> &arr) {

        int n = arr.size();
        
        if (arr[0] > arr[1]) return 1;
        else if (arr[n-2] > arr[n-1]) return n - 1;
        
        int low = 1;
        int high = n - 2;
        
        while (low <= high){
            int mid = low + (high - low)/2;
            
            if (arr[mid] <= arr[mid-1] && arr[mid] <= arr[mid+1]){
                return mid;
            }
            
            else if (arr[mid] <= arr[high]) high = mid - 1;
            else low = mid + 1;
        }
        return 0;
    }


 int findKRotation(vector<int> &arr) {
        // position of smallest element will always tell u the number of times array had been rotated
        int low = 0;
        int high = arr.size() - 1;
        
        int result = INT_MAX;
        int idx = -1;
        while (low <= high){
            int mid = low + (high - low)/2;
            
            if (arr[low] <= arr[high]){
                if (arr[low] < result){
                    result = arr[low];
                    idx = low;
              
                }      break;
            }
            else if (arr[mid] <= arr[high]){
                if (arr[mid] < result){
                    result = arr[mid];
                    idx = mid;
                }
                high = mid - 1;
            }
            else{
                if (arr[low] < result){
                    result = arr[low];
                    idx = low;
                }
                low = mid + 1;
            }
        }
        return idx;
    }
