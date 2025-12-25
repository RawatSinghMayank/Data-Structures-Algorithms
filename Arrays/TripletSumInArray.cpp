#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using std::cin;
using std::endl;
using std::cout;
using std::vector;
using std::set;


    bool hasTripletSumUsing3SumLogic1(vector<int> &nums, int target) {
      int n = nums.size();
        set <vector <int>> uniquePairs;

        for (int i = 0; i < n - 2; i++){
            for (int j = i + 1; j < n - 1; j++){
                for (int k = j + 1; k < n; k++)
                {
                    if (nums[i] + nums[j] + nums[k] == target){
                        vector <int> temp = {nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        uniquePairs.insert(temp);
                    }
                }
            }
        }

    vector <vector <int>> result(uniquePairs.begin(),uniquePairs.end());
    return result.size();
    }



    bool hasTripletSumUsing3SumLogic2(vector<int> &nums, int target) {
        
      int n = nums.size();
        set <vector <int>> uniquePairs;

        for (int i = 0; i < n - 2 ; i++){
            set <int> hashset;

           for(int j = i+1; j < n  ;j++){
                int third = target -(nums[i] + nums[j]);
                if (hashset.find(third) != hashset.end()){
                    
                    vector <int> temp = {nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    uniquePairs.insert(temp);
                }
                hashset.insert(nums[j]);
           }

        }
        
    vector <vector <int>> result(uniquePairs.begin(),uniquePairs.end());
    return result.size();
    }

    bool hasTripletSumUsing3SumLogic3(vector<int> &nums, int target) {
          std::sort(nums.begin(),nums.end());
        int n = nums.size();
        vector <vector<int>> result;

        for (int i = 0; i < n - 2; i++){
            if (i > 0 and nums[i] == nums[i-1]) continue;

            int j = i + 1;
            int k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == target){
                    result.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j < k &&  nums[j] == nums[j-1]) j++;
                    while(j < k &&  nums[k] == nums[k+1]) k--;
                }
                else if (sum > target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
    return result.size();
    }

bool hasTripletSumBrute(vector<int> &arr, int target) {
       
       int n = arr.size();
       
       for (int i = 0; i < n - 2; i++){
           for (int j = i + 1; j < n - 1; j++){
               for (int k = j + 1; k < n; k++){
                   if (arr[i] + arr[j] + arr[k] == target ) return true;
               }
           }
       }
       
       return false;
}



bool hasTripletSumBetter(vector<int> &arr, int target) {
       
       int n = arr.size();
       
       for (int i = 0; i < n; i++){
           
           unordered_set <int> hashset;
           
            int tempTarget = target - arr[i];
           for (int j = i + 1; j < n; j++){
               
               if (hashset.find(tempTarget - arr[j]) != hashset.end()){
                   return true;
               }
               else{
                   hashset.insert(arr[j]);
               }
           }
       }
       
       return false;
}



 bool hasTripletSumOptimal(vector<int> &arr, int target) {
       
// better use 3 sum logic becuase if duplicates are present then this code will fail
       int  n = arr.size();
       sort(arr.begin(),arr.end());
        
        for (int i = 0;i < n -2; i++){
            
            int j = i + 1;
            int k = n -1;
            while (j < k){
                if (arr[i] + arr[j] + arr[k] == target ) return true;
                else if (arr[i] + arr[j] + arr[k] < target ) j++;
                else k--;
            }
        }
        return false;
    }
int main(){

    int size;
    cin >> size;

    vector <int> inputArr(size);

    for (int i = 0; i < size; i++){
        cin >> inputArr[i];
    }

    vector <vector<int>> result = threeSumBetter(inputArr);

    for (auto &it : result){
        for( auto & ele : it){
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}