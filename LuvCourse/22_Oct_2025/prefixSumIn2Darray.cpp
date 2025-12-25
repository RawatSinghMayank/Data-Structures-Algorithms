// Given a 2d grid of n * n integers. Given four points a,b representing top points and c,d
 //representing below points . Find the sum of rectangle formed by four points.

/*

1 <= N <= 10^3
1 <= a[i] <= 10^9
1 <= test <= 10^5
1 <= a,b,c,d <= N

*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve(){	
	
	int n;
	cin >> n;

	vector <vector <int>> nums (n+1, vector <int> (n+1,0));

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> nums[i][j];
		}
	}
    

	vector <vector <int>> prefixSum (n + 1, vector <int> (n + 1, 0));
	
	for (int i = 1; i <= n; i ++){
		for (int j = 1; j <= n; j++){
			prefixSum[i][j] = prefixSum[i][j-1] + nums[i][j];
		}
	}


	int test;
	cin >> test;

	while (test--){

		int x1,x2,y1,y2;
		cin >> x1 >> x2 >> y1 >> y2;
	
		int  sum = 0;

		for (int i = x1 ; i <= y1; i++){
			sum += prefixSum[i][y2] - prefixSum[i][x2-1];
		}		

		cout << sum << "\n";
	}

}
signed main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
	 solve();
   
    return 0;
}