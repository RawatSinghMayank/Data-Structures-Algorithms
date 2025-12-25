class Solution1 {
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        for (int i = 0; i < n; i++){

            for (int j = i + 1; j < n; j++){
                if (nums[i] > nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
};


class Solution2 {
public:
    vector<int> sortArray(vector<int>& arr) {

        int n = arr.size();
        bool swapped = false;

        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
        return arr;
    }
};


class Solution3{
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        for (int i = 0; i < n - 1; i++){
            int minIndex = i;

            for (int j = i + 1; j < n; j++){
                if (nums[j] < nums[minIndex]){
                    minIndex = j;
                }
            }
            if (i != minIndex){
               swap (nums[minIndex],nums[i]);
            }
         
        }
        return nums;
    }
};


class Solution4 {
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        for (int i = 1; i < n; i++){
            int j = i - 1, curr = nums[i];

            while (j >= 0 && nums[j] > curr){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = curr;
        }
        return nums;
    }
};

class Solution5 {
public:

    void recursiveBubbleSort (vector <int> &nums, int i,int n){

        if (i >= n - 1){
            return;
        }

        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++){
            if (nums[j] > nums[j + 1]){
                swap (nums[j],nums[j+1]);
                swapped = true;
            }
        }
        if (!swapped){
            return;
        }

        recursiveBubbleSort (nums, i + 1, n);
    }

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        recursiveBubbleSort (nums, 0, n);
        return nums;
    }
};


class Solution6 {
public:

    void recursiveSelection (vector <int> &nums, int i,int n){

        if (i >= n - 1){
            return;
        }

        int minIndex = i;
        for (int j = i + 1; j < n; j++){
            if (nums[j] < nums[minIndex]){
               minIndex = j;
            }
        }
        if (minIndex != i){
            swap (nums[minIndex],nums[i]);
        }

        recursiveSelection (nums, i + 1, n);
        
    }

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        recursiveSelection (nums, 0, n);
        return nums;
    }
};


class Solution7 {
public:

    void recursiveInsertionSort (vector <int> &nums, int i,int n){

        if (i >= n){
            return;
        }

        int j = i - 1, curr = nums[i];
        while (j >= 0 && nums[j] > curr){
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j+1] = curr;
        recursiveInsertionSort (nums, i + 1, n);
    }

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        recursiveInsertionSort (nums, 1, n);
        return nums;
    }
};


class Solution8 {
public:

    void merge (vector <int> &nums, int low, int mid, int high){

        int i = low, j = mid + 1;

        vector <int> tempnums;
        while (i <= mid && j <= high){
            if (nums[i] <= nums[j]){
                tempnums.push_back (nums[i]);
                i++;
            }else{
                tempnums.push_back (nums[j]);
                j++;
            }
        }

        while (i <= mid){
            tempnums.push_back (nums[i]);
            i++;
        }

        while (j <= high){
            tempnums.push_back (nums[j]);
            j++;
        }

        int start = 0;
        for (int i = low; i <= high; i++){
            nums[i] = tempnums[start++];
        }
        
    }

    void mergeSort (vector <int> &nums,int low, int high){

        if (low >= high){
            return;
        }

        int mid = low + ((high - low) >> 1);

        mergeSort (nums, low, mid);
        mergeSort (nums, mid + 1, high);
        merge (nums, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        mergeSort(nums, 0, n - 1);
        return nums;
    }
};



class Solution {
public:

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        quickSort (nums, 0, n - 1);
        return nums;
    }
};

