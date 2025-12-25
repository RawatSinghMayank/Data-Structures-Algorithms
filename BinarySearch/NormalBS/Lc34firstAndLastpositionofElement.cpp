class Solution {
    
    static int getLowerBound (int []arr ,int x){

        int n = arr.length;
        int low = 0;
        int high = n - 1;
        int result = -1;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (arr[mid] == x){
              result = mid;
                high = mid -1;
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
    
    static int getUpperBound (int []arr, int x){
           int n = arr.length;
        int low = 0;
        int high = n - 1;
        int result = -1;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (arr[mid] == x){
               result = mid;
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

    public int[] searchRange(int[] nums, int target) {
        
        int floor = getLowerBound (nums,target);
        if (floor == -1) return new int []{-1,-1};
        int ceil = getUpperBound (nums,target);
        int [] arr = new int [2];
       arr[0] = floor;
       arr[1]= ceil;
        return arr;
        
    }
} 