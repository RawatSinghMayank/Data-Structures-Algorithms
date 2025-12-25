
#include <bits/stdc++.h>
using namespace std;


int main (){
    
    int test;
    cin >> test;
    cin.ignore();

    while (test--){

    	int n;
    	cin >> n;
    	vector <int> nums(n);
        vector <int> bits (30);

    	for (int i = 0; i < n; i++) cin >> nums[i];

        // marking bits

        for (int i = 0; i < n; i++){

            int num = nums[i];

            for (int j = 0; j < 30; j++){
                bits[j] += ((num >> j) & 1);
            }
        }

        long long result = 0;

        for (int i = 0; i < n; i++){

                long long num = nums[i], temp = 0;
            for (int j = 0; j < 30; j++){

                int bit = ((num >> j) & 1);
                if (bit) temp += (long long)(n - bits[j]) * (1 << j); // if j = 29 then 2^29 is big integer then multipling with (n-bits[j]) can be overflowed before
                // answer get stored in result
                else temp += (long long)bits[j] * (1 << j);
            }

            result = max (result, temp);
        }
        cout << result << endl;

    }

    return 0;
}