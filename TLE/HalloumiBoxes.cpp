#include <bits/stdc++.h>

using namespace std;

int main(){

    int test;
    cin >> test;

    while(test--){

        int n,k;    
        cin >> n >> k;
        vector <int> nums(n);
        for (int i = 0;i < n; i++){
            cin >> nums[i];
        }

    
        if (k >= 2 || is_sorted(nums.begin(),nums.end())) cout << "YES" << endl;
        
        else cout << "NO" << endl;

    }
    return 0;
}