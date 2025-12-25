
    void downHeapify (vector <int>& arr, int parent){
        
        int n = arr.size();
        int leftChild = 2 * parent + 1;
        int rightChild = 2 * parent + 2;
        int largest = parent;
        
        if (leftChild < n && arr[leftChild] > arr[largest]){
            largest = leftChild;
        }
        if (rightChild < n && arr[rightChild] > arr[largest]){
            largest = rightChild;
        }
        
        if (largest != parent){     
            swap (arr[largest], arr[parent]);
            downHeapify (arr, largest);
        }
        
    }
    void convertMinToMaxHeap(vector<int> &arr, int N){
    
        for (int i = N / 2 - 1; i >= 0; i--){
            downHeapify (arr, i);
        }
    }