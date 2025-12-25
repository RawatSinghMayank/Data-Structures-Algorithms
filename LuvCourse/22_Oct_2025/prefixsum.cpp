#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> arr(n+ 1);

    // use 1 based index in prefix sum . easy to think and implement

    for (int i = 1;i <= n; i++){
		cin >> arr[i];
	 }

	int test;
	cin >> test;

	vector <long> prefixSum(n + 1);

	for (int i = 1; i<= n; i++) prefixSum[i] += prefixSum[i-1] + arr[i];
	
	while (test--){
		
		int l, r;
		cin >> l >> r;
		
		long long sum = 0;
		for (int i = l; i <= r; i++){
			sum += arr[i];
		}
		cout << "without prefix sum : " << sum << "\n";
		cout << "Using prefix Sum : " << prefixSum[r] - prefixSum[l-1] << "\n"; 
	}

	//Time Complexity of this code -> O(n) for taking input of the arry  + O(test) * O(n) because we take 
	// worst case scenario and in the worst case l = 1 and r = size of array 

	// after prefix sum : O(n) + O(test)
    return 0;
}