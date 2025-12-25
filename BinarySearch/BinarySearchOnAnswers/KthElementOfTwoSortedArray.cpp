
class Solution {
  public:
  
  void merge(vector<int>&nums1,vector<int>&nums2,vector<int>&nums3){

int i=0,j=0;
int n1=nums1.size();
int n2=nums2.size();
while(i< n1 && j<n2){
    if(nums1[i]<=nums2[j]){
        nums3.push_back(nums1[i]);
    i++;}
    else {
        nums3.push_back(nums2[j]);
        j++;
    }

}
while(i<n1){
    nums3.push_back(nums1[i]);
    i++;
}
while(j<n2){
    nums3.push_back(nums2[j]);
    j++;
}

}
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        
        vector <int> result;
        merge(a,b,result);
        
        return result[k-1];
    }
};



class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
       
       int counter = 0;
       int i = 0, j= 0;
       int value1 , value2;
       while(counter < k && i < a.size() && j < b.size()){
           if (a[i] <= b[j]){
             value1 = a[i];  i++;
               counter++;
               
           }
           else {
              
               value1= b[j]; j++;
               counter++;
           }
       }
       
       while (i < a.size() && counter < k){
          
           value1 = a[i]; i++;
           counter++;
       }
       while(j < b.size() && counter < k){
          
           value1= b[j]; j++;
           counter++;
       }
       
       return value1;
       
       
       
    }
};