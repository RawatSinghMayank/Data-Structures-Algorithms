#include <bits/stdc++.h>
using namespace std;

vector <int> allFactors (int k) {

	vector <int> factors;

	for (int index = 1; index * index <= k; index++){
		if (k % index == 0){
			factors.push_back(index);

			if ((k/index) != index){
				factors.push_back(k/index);
			}
		} 	
	}

return factors;
}


int main (){
	
	int test;
	cin >> test;

	while (test--){

		int n, q;
		cin >> n >> q;

		vector <int> nums (n);

		map <int, vector <int>> eleIndexes;
		for (int i = 0; i < n; i++){
		 cin >> nums[i];
		 eleIndexes[nums[i]].push_back(i);
		}
	
		for (int i = 0; i < q ; i++){
			int k,left,right;
			cin >> k >> left >> right;
			int result = 0;
		

		while (left <= right ){

			int minIndex = right;
			for (int  factor :  allFactors(k)){

				
				auto it = lower_bound (eleIndexes[factor].begin(),eleIndexes[factor].end(), left);

				if (it != eleIndexes[factor].end()){
					minIndex = min (minIndex, *it);	
				}
			}
				result += (minIndex - left) * k;

				while (k % nums[minIndex] == 0) k = k / nums[minIndex];

				result += k;
				left = minIndex + 1;
			}

		cout <<  result << endl;
		}
	}

	return 0;
}