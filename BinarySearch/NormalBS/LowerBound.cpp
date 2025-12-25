int lowerBound(vector<int> arr, int n, int x) {

    lower bound = smallest index such that arr[idx] >= x
    and Floor is about finding the greatest element ≤ x.

    T.c - (log(n))
    int low = 0;
    int high = n - 1;

    int result = n;
    while (low <= high){
        int mid = low + (high - low)/2;
        if (arr[mid] >= x){
            result = mid;
            high =  mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return result;
}


// This one if floor code : 
 static int findFloor(int[] arr, int x) {
        // write code here
        int low = 0;
        int high = arr.length - 1;
        
        int result  = -1;
        
        while (low <= high ){
            int mid = low + (high - low)/2;
            
            if (arr[mid] <= x){
                result = Math.max (result,mid);
                low = mid + 1;
            }
            else if (arr[mid] < x){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return result;
        
    }