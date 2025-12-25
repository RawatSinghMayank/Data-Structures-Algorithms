#include <bits/stdc++.h>
using namespace std;

https://atcoder.jp/contests/dp/tasks/dp_b



int minTotalCost (vector <int>&stones, int k , int n, vector <int>&dp){

	if (n == 0) return 0;
	int mini = INT_MAX;
	if (dp[n] != -1) return dp[n];

	for (int i = 1; i <= min(k,n); i++){
		if (abs(n - i) >= 0){
			mini = min (mini,abs(stones[n] - stones[n - i]) + minTotalCost (stones, k, n - i,dp));
		}
	}
	return dp[n] = mini;			
}

int main (){

	int n, k;
	cin >> n >> k;
	vector <int> stones(n);
	vector <int> dp(n,-1);

	for (int i = 0; i < n; i++){
		cin >> stones[i];
	}

	cout << minTotalCost(stones,k,n -1,dp) << endl;

	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int minEnergyToReachTop (vector <int>&stones,vector <int>&dp, int k,int n){

	int minEnergy = INT_MAX;
	for (int i = 1; i <= n; i++){
		 minEnergy = INT_MAX;
		for (int j = 1; j <= min(n,k); j++){
		if (i - j >= 0)
			minEnergy = min (minEnergy,abs(stones[i] - stones[i - j]) + dp[i - j]);
		}
		dp[i] = minEnergy;
			
	}
	return dp[n];
		
}

int main(){

	int n, k;
	cin >> n >> k;
		
	vector <int> stones(n), dp(n,0);

	for (int i= 0;i < n; i++) cin >> stones[i];

	cout << minEnergyToReachTop(stones,dp,k,n - 1);
	return 0;
}