 int bs (vector <int> & arr,int low ,int high,int k){
      
         
        if (low > high) return -1;
            int mid = low + (high - low)/2;
            
            if (arr[mid] == k) {
               int minIndex = bs (arr,low,mid - 1,k);
               if (minIndex != -1) return minIndex;
               else return mid;
            }
            if (arr[mid] > k)return bs(arr,low,mid-1,k) ;
            else return bs(arr,mid +1,high,k);
            
        
       
      
  }
    int binarysearch(vector<int> &arr, int k) {
        return bs(arr,0,arr.size()-1,k);
     
    }