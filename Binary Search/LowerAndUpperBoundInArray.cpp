#include <bits/stdc++.h>
using namespace std;


int main(){

    int len;
    cin >> len;

    int nums[len];

    for (int i = 0 ; i < len; i++){
        cin >> nums[i];
    }

    int target;
    cin >> target;

    int index = lower_bound (nums, nums + len, target) - nums;
	int *value = lower_bound (nums, nums + len, target);
	
	cout << nums << " " << *nums << "\n";
	cout << index << " " << value << " " << *value <<  "\n";

	cout << "Now turn for vector " << "\n";
	vector <int> arr(len);
	for (int i = 0; i < len; i++){
		cin >> arr[i];
	}
	
	int index1 = lower_bound (arr.begin(), arr.end(),target) - arr.begin();
	vector <int> :: iterator it = lower_bound (arr.begin(), arr.end(), target);
	
	cout << index1 << " "<< " " << *it << "\n";

    return 0;
}