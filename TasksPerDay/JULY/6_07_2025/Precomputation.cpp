#include <bits/stdc++.h>
using namespace std;

// 1 <= T <= 10^5
// 1 <= n <= 10^4

int main(){


	int t;
	cin >>t;

	vector <int> fact(1e4 + 1);

	fact[0] = fact[1] = 1;

	for (int i = 2; i <= 1e4; i++){
		fact[i] = fact[i-1] * i;
	}

	while(t--){

		int n;
		cin >> n;
		cout << fact[n] << "\n";
	}
	return 0;
}