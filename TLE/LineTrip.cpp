#include <iostream>
#include <vector>

using namespace std;

int minFuelRequired (vector <int>& nums, int x ){

    int n = nums.size();

    int maxDiff = 0;
    
    int index = n - 1;
    while (index >= 0 && x < nums[index]) index--;// No need of this line because after solvind problem
    // i came to know that x in always greater then nums[n-1]
   
    for (int  i = 1; i <=  index; i++){
            maxDiff = max(maxDiff,nums[i]-nums[i-1]);
    }

    return max(maxDiff,2 * (x- nums[index]));

}

int main(){

    int test;
    cin >> test;

    while(test--){
        int n, x;
        cin >> n >> x;

        vector <int> nums(n + 1);
        nums[0] = 0;
        for (int i = 1; i <= n; i++){
            cin >> nums[i];
        }

        cout << minFuelRequired (nums,x) << endl;

    }

return 0;
}

// // editorial soltuion

// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){

//     int test;
//     cin >> test;

//     while(test--){
//         int n, x;
//         cin >> n >> x;

//         int previous = 0, result  = 0;
//         for (int i = 0; i< n; i++){
//             int ele;
//             cin >> ele;
//             result =  max (result,ele-previous);
//             previous = ele;
//         }
//         cout << max (result,  2 * (x - previous)) << endl;

//     }

// return 0;
// }
