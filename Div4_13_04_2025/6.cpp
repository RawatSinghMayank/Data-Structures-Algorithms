#include <bits/stdc++.h>
using namespace std;

int main (){
	

	int test;
	cin >> test;

	while (test--){

		int n, m , k;
		cin >> n >> m >> k;

			for (int i = 0; i < n; i++){
				for (int j = 0; j< m; j++){
					if (m % k == 0)
					cout << 1 + (i + j)%k << " ";
					else 
					cout << 1 + (i * m + j)% k << " ";
				}
				cout << endl;

		}
	}


	return 0;}