#include <bits/stdc++.h>
using namespace std;
 
   int main(){
 //CSES problem on longest common subsequence :
 //  https://cses.fi/problemset/task/3403
	int n,m;
	cin >> n>> m;	
 
	vector <int> s1(n), s2(m);
	vector <vector <int>> dp (n + 1, vector <int>(m + 1,0));
	for (int i = 0; i < n; i++) cin >> s1[i];
	for (int j = 0; j < m; j++) cin >> s2[j];
 
	
 
	
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                if (s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
 
		vector <int>result;
 
		
               int i = n, j = m;
        while(i > 0 && j > 0){
            if(s1[i-1] == s2[j-1]){
		result.push_back(s1[i-1]);
		     i--;
                j--;
            }
            else {
                if (dp[i-1][j] > dp[i][j-1]){
                    i--;
                }
                else{
                    j--;
                }
            }
        }
 
     
	cout << dp[n][m] << endl;
	for (int i = result.size() - 1; i >= 0; i--) cout << result[i] << " ";
	return 0;
}




string findLCS(int n, int m,string &s1, string &s2){

        vector <vector <int>> dp (n + 1, vector <int>(m + 1,0));

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                if (s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }//T.C- O(M* N)
            }
        }

        string result;
        int i = n, j = m;
        while(i > 0 && j > 0){
            if(s1[i-1] == s2[j-1]){
                result =  string(1,s1[i-1]) + result;
                i--;
                j--;
            } //Time  Complexity - at worst case - O(m  + n)
            else {
                if (dp[i-1][j] > dp[i][j-1]){
                    i--;
                }
                else{
                    j--;
                }
            }
        }

      return result;

}