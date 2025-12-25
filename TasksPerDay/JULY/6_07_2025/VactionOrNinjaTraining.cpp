// #include <bits/stdc++.h>
// using namespace std;
// https://atcoder.jp/contests/dp/tasks/dp_c


// int maxPoints (int n, vector <vector <int>>&points,int last){

// 	if (n == 0){
// 		int  maxi = 0;
// 		for (int i = 0; i < 3; i++){
// 			if (i != last){
// 				maxi = max (maxi,points[0][i]);
// 			}
// 		}
// 		return maxi;
// 	}
    
// 	int maxi = 0;
// 	for (int i = 0; i < 3; i++){

// 		if (i != last){
// 			maxi = max(maxi ,points[n][i] + maxPoints(n-1,points,i));
// 		}
// 	}

// 	return maxi;


// }
// int ninjaTraining(int n, vector<vector<int>> &points)
// {
// 	return maxPoints(n-1,points,3);
// }

// int main (){
	
// 	int n;
// 	cin >> n;
// 	vector <vector <int>> points(n,vector <int>(3));

// 	for (int i = 0;i < n; i++){
// 		for (int j = 0;j  <3; j++){
// 			cin>> points[i][j];
// 		}
// 	}
	
// 	vector <vector <int>>dp(n,vector <int>(3,-1));
// 		cout<<ninjaTraining(n,points);
	
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int maxPoints (int n, vector <vector <int>>&points,int last,vector <vector<int>>&dp ){

// 	int maxi = 0;
// 	if (n == 0){
	
// 		for (int i = 0; i < 3; i++){
// 			if (i != last){
// 				maxi = max (maxi,points[0][i]);
// 			}
// 		}
// 		return maxi;
// 	}
//     if(dp[n][last] != -1) return dp[n][last];
	
// 	for (int i = 0; i < 3; i++){

// 		if (i != last){
// 			maxi = max(maxi ,points[n][i] + maxPoints(n-1,points,i,dp));
// 		}
		
// 	}

// 	return dp[n][last] = maxi;


// }
// int ninjaTraining(int n, vector<vector<int>> &points)
// {
// 	vector <vector <int>>dp(n,vector <int>(4,-1));
// 	return maxPoints(n-1,points,3,dp);
// }
// int main (){
	
// 	int n;
// 	cin >> n;
// 	vector <vector <int>> points(n,vector <int>(3));

// 	for (int i = 0;i < n; i++){
// 		for (int j = 0;j  <3; j++){
// 			cin>> points[i][j];
// 		}
// 	}
	
// 	cout << ninjaTraining(n,points);
	
// 	return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int maxPoints (int n, vector <vector <int>>&points){

// 	vector <vector <int>>dp(n,vector <int>(3,0));

// 	dp[0][0] = points[0][0],dp[0][1] = points[0][1], dp[0][2] = points[0][2];

// 	for (int i = 1; i < n; i++){	
	
// 		for (int j = 0; j <  3; j++){
// 			int maxi = 0;
// 			for (int k = 0; k < 3; k++){
// 				if (j != k){
// 					maxi = max (maxi,points[i][j] + dp[i -1][k]);
// 				}
// 			}
// 			dp[i][j] = maxi;
// 		}
// 	}

// 	return max(dp[n -1][0],max(dp[n - 1][1],dp[n -1][2]));
		
		
// }

// int main (){
	
// 	int n;
// 	cin >> n;
// 	vector <vector <int>> points(n,vector <int>(3));

// 	for (int i = 0;i < n; i++){
// 		for (int j = 0;j  <3; j++){
// 			cin>> points[i][j];
// 		}
// 	}
	
// 	cout << maxPoints(n,points);
	
// 	return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int maxPoints (int n, vector <vector <int>>&points){

// 	vector <int> prevMax(3);

// 	prevMax[0] = points[0][0],prevMax[1] = points[0][1], prevMax[2] = points[0][2];

// 	for (int i = 1; i < n; i++){	
	
// 		vector <int>temp(3);
// 		for (int j = 0; j <  3; j++){
// 			int maxi = 0;
// 			for (int k = 0; k < 3; k++){
// 				if (j != k){
// 					maxi = max (maxi,points[i][j] +prevMax[k]);
// 				}
// 			}
// 			temp[j]= maxi;
// 		}
// 		prevMax = temp;		
// 	}

// 	return max(prevMax[0],max(prevMax[1],prevMax[2]));
		
		
// }

// int main (){
	
// 	int n;
// 	cin >> n;
// 	vector <vector <int>> points(n,vector <int>(3));

// 	for (int i = 0;i < n; i++){
// 		for (int j = 0;j  <3; j++){
// 			cin>> points[i][j];
// 		}
// 	}
	
// 	cout << maxPoints(n,points);
	
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
	cout<< "Mayank Singh Rawat" << endl;
	return 0;
}