#include <bits/stdc++.h>
using namespace std;

// 1 <= T <= 10^5
// 1 <= n <= 10^4

int main(){

	int t;
	cin >>t;

	vector <int> factorial (10001);

	factorial [0] = factorial [1] = 1;
	for (int i = 2; i <= 10000 ;i++){
		
		factorial [i] = factorial[i-1] * i;
	}

	while(t--){

		int n;
		cin >> n;
		
		cout << factorial[n] << endl;
	}
	return 0;
}