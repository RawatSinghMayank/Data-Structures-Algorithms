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

	vector <vector <int>> prefixSum (n + 1, vector <int> (n + 1, 0));
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> nums[i][j];
            prefixSum[i][j] = nums[i][j] + prefixSum[i-1][j] + prefixSum[i][j-1] - prefixSum[i-1][j-1]; 
		}
	}
    


	int test;
	cin >> test;

	while (test--){

		int x1,x2,y1,y2;
		cin >> x1 >> x2 >> y1 >> y2;
	
		cout << prefixSum[y1][y2] - prefixSum[y1][x2-1] - prefixSum[x1-1][y2] + prefixSum[x1-1][x2-1] << "\n";  
		
	}

}
signed main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
	 solve();
   
    return 0;
}