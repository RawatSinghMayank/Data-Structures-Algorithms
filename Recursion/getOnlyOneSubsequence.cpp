#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
	
using namespace std;
 bool getOneSubsequenceEqualTarget (vector <int> &nums, vector <int> &temp, vector <vector <int>> &result, int target, int index){
        
        if (target == 0){
            result.push_back (temp);
            return true;
        }
        
        if (index < 0){
            return (target == 0);
        }
        
        if (target >= nums[index]){
            temp.push_back (nums[index]);
            if (getOneSubsequenceEqualTarget (nums, temp, result, target - nums[index], index - 1)){
            	return true;
            }
            temp.pop_back();
        }
        
        if (getOneSubsequenceEqualTarget (nums, temp, result, target, index - 1)){
        	return true;
        }
        
        
        return false;
    }

int  main(){

	ios::sync_with_stdio(false);
	cin.tie (nullptr);
	
	int n;
	cin >> n;
	
	vector <int> nums (n);
	for (int i = 0; i < n; i++){
		cin >> nums[i];
	}
	
	int target;
	cin >> target;
	vector <int> temp;
	vector <vector <int>> result;
	getOneSubsequenceEqualTarget (nums, temp,result, target, n - 1);
	
	
	for (auto &row : result){
		for (auto &ele : row){
			cout << ele << " ";
		}
		cout << endl;
	}
	 
	return 0;
}