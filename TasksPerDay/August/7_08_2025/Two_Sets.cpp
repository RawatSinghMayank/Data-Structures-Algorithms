// #include <bits/stdc++.h>
// using namespace std;
//1st approach
// int main(){

//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     long long n;
//     cin >> n;

//     long long sum = n * (n + 1)/2;

//     if (sum % 2 == 1){
//         cout << "NO" << "\n";
//     } else {

//         cout <<"YES" << "\n";
//         vector <int> nums1, nums2;

//         long long sum1 = 0, sum2 = 0;
//         for  (int i = n; i >= 1; i--){
//             if (sum1 <= sum2){
//                 nums1.push_back(i);
//                 sum1 += i;
//             } else {
//                 nums2.push_back(i);
//                 sum2 += i;
//             }
//         }

//         int size1 = nums1.size(), size2 = nums2.size();

//         cout << size1 << "\n";
//         for (int i = size1 - 1; i >= 0; i--){
//             cout << nums1[i] << " ";
//         }
//         cout << "\n";

//         cout << size2 << "\n";
//         for (int i = size2 - 1; i >= 0; i--){
//             cout << nums2[i] << " ";
//         }
        
//         cout << "\n";
//     }
    
//     return 0;
// }


//2nd approach
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;

    long long sum = n * (n + 1)/2;

    if (sum % 2 == 1){
        cout << "NO" << "\n";
    } else {

        cout <<"YES" << "\n";
        vector <int> nums1, nums2;

        sum /= 2;

        for (int i = n; i >= 1; i--){

            if (sum >= i){
                nums1.push_back(i);
                sum -= i;
            } else {
                nums2.push_back(i);
            }
        }

        int size1 = nums1.size(), size2 = nums2.size();

        cout << size1 << "\n";
        for (int i = size1 - 1; i >= 0; i--){
            cout << nums1[i] << " ";
        }
        cout << "\n";

        cout << size2 << "\n";
        for (int i = size2 - 1; i >= 0; i--){
            cout << nums2[i] << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}