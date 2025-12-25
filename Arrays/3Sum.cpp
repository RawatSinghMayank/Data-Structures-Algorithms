#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using std::cin;
using std::endl;
using std::cout;
using std::vector;
using std::set;

//T.C - O(N^3 + log(no of triplets) S.C- O(answer array  + 2 * O(no of triplets)
vector<vector<int>> threeSumBrute(vector<int>& nums) {
        
        int n = nums.size();
        set <vector <int>> uniquePairs;

        for (int i = 0; i < n - 2; i++){
            for (int j = i + 1; j < n - 1; j++){
                for (int k = j + 1; k < n; k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0){
                        vector <int> temp = {nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        uniquePairs.insert(temp);
                    }
                }
            }
        }

    vector <vector <int>> result(uniquePairs.begin(),uniquePairs.end());
    return result;
}


vector<vector<int>> threeSumBetter(vector<int>& nums) {
        
// T.C- O(n^2 * log(m))  m = Variable set size  S.C - O(M) which is max size of set + O(no of unique triplets to return answer)
        int n = nums.size();
        set <vector <int>> uniquePairs;

        for (int i = 0; i < n - 2 ; i++){
            set <int> hashset;

           for(int j = i+1; j < n  ;j++){
                int third = -(nums[i] + nums[j]);
                if (hashset.find(third) != hashset.end()){
                    
                    vector <int> temp = {nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    uniquePairs.insert(temp);
                }
                hashset.insert(nums[j]);
           }

        }
        
    vector <vector <int>> result(uniquePairs.begin(),uniquePairs.end());
    return result;
}


vector<vector<int>> threeSumOptimal(vector<int>& nums) {
        
// T.c - nlogn + n^2  S.c  - answer size  only
        std::sort(nums.begin(),nums.end());
        int n = nums.size();
        vector <vector<int>> result;

        for (int i = 0; i < n - 2; i++){
            if (i > 0 and nums[i] == nums[i-1]) continue;

            int j = i + 1;
            int k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0){
                    result.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j < k &&  nums[j] == nums[j-1]) j++;
                    while(j < k &&  nums[k] == nums[k+1]) k--;
                }
                else if (sum > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
    return result;
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