 
  int findFirstOccurrence(const vector<int>& arr, int key) {

    int low = 0;
    int high = arr.size() - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            result = mid;
            high = mid - 1; 
        } 
        else if (arr[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return result;
}

int findLastOccurrence(const vector<int>& arr, int key) {

    int low = 0;
    int high = arr.size() - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            result = mid;
            low = mid + 1; 
        } 
        else if (arr[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return result;
}
    int countFreq(vector<int>& arr, int target) {
        
        int x = findFirstOccurrence(arr,target);
        int y =findLastOccurrence(arr,target);
        if (x == -1 )return 0;
        return y - x + 1;
    }