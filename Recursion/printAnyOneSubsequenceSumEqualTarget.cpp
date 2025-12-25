#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
	
using namespace std;
 void printSubsequenceSumEqualTarget (vector <int> &nums, vector <int> &temp, vector <vector <int>> &result, int target, int index){
        
        if (target == 0){
            result.push_back (temp);
            return;
        }
        
        if (index < 0){
            return;
        }
        
        if (target >= nums[index]){
            temp.push_back (nums[index]);
            printSubsequenceSumEqualTarget (nums, temp, result, target - nums[index], index - 1);
            temp.pop_back();
        }
        
        printSubsequenceSumEqualTarget (nums, temp, result, target, index - 1);
        
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
	printSubsequenceSumEqualTarget (nums, temp,result, target, n - 1);
	
	
	for (auto &row : result){
		for (auto &ele : row){
			cout << ele << " ";
		}
		cout << endl;
	}
	 
	return 0;
}