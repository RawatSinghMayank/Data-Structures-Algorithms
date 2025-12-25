#include <bits/stdc++.h>
using namespace std;
int  main(){

    long long t;
    cin >> t;

    while(t--){

        long long n;
        cin >> n;

        vector <long long> nums (n);

        for (long long i = 0; i < n;i++) cin >> nums[i];


        long long sum =0;
      
        for (long long i = 0; i < n; i++){
            sum += (nums[i] == 0) ? 1 : nums[i];
        }
       cout << sum << "\n";
    }
}