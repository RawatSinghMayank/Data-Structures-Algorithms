#include <bits/stdc++.h>
bool canAllocateBooks (vector <int> &arr,int pages,int students){

    int noOfStudents = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if (sum > pages){
            noOfStudents++;
            sum = arr[i];
        }
    }
    noOfStudents++;
   if (noOfStudents <= students) return true;
   return false;

}

int findPages(vector<int>& arr, int n, int m) {
    
    if (m > n)return -1;
    int low = *max_element (arr.begin(),arr.end());
    int high = accumulate (arr.begin(),arr.end(),0);
    int result = INT_MAX;

    while (low <= high){
        int mid = low + (high - low)/2;

         
        if (canAllocateBooks(arr,mid,m)){
           result =  min (result , mid);
            high = mid -1;
        }
        else{
            low =  mid + 1;
        }
      
    }
   
    return result;
}