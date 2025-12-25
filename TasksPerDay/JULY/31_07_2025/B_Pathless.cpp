#include <bits/stdc++.h>
using namespace std;

int  main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;

    while(t--){

        long long n, s; 
        cin >> n >> s;

        vector <long long> nums(n);
        long long one = 0, two = 0, zero = 0, sum = 0;

        for (int i = 0; i < n; i++){

            cin >> nums[i];

            if (nums[i] == 0) zero++        ;
            else if (nums[i] == 1) one++;
            else two++;

            sum += nums[i];
        }

        if ( sum == s || s - sum > 1) cout << -1 << "\n";
        else {
            while(zero--){
                cout << 0 << " ";
            }
            while(two--){
                cout << 2 << " ";
            }
            while(one--){
                cout << 1 << " ";
            }
            cout << "\n";
        }

       
    }
        
    
}