#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;

    while (t--){


        int n;
        cin >> n;

        vector <int> nums1 (n), nums2(n);

        for (int i = 0; i < n; i++){
           cin >> nums1[i];
        }

        for (int i = 0; i < n; i++){
          
            cin >> nums2[i];
        }

       
        int result = 0;
        for (int i = 0; i < n;i++){

            if (nums1 [i] > nums2[i])
            result += nums1[i] - nums2[i];
        }

        cout << result + 1 << "\n";

    }

    return 0;
}