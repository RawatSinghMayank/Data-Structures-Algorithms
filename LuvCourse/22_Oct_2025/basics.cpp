// generally 10^7 -10^8 iterations per second

// suppose 10^7

// then 10^8 will take : 10 sec
// 10^9 : 100 sec
// ans so on....


//Precomputation technqiues ex-> prefix sum, factorial using array method, hashing 

ex-> find count of 2,3,4, in array
brute force, run a for loop for 2,3,4  time complexity - 3(n)

instead store count of all the elements of the array in another array -> arr[nums[i]]++;

-> this is also called hashing 



we can also hash negative numbers
1.using inbuilt map
2.[-3,10,-6] 
 substract min number and hash them in new position 
-3 -(-6) = 3
10 -(-6) =16
-6-(-6) = 0 


int n = 100;
int arr[n]; O(n)
int arr[n][n]; O(n^2)
#include <bits/stdc++.h>
using namespace std;

biggest data type in c++ : 
unsigned long long 
int main(){


    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << j << " ";
        }cout << endl;
    }
    return 0;
}