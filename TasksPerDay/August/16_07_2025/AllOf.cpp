#include <bits/stdc++.h>
using namespace std;

bool positive(int x) {
    return x > 0;
}

bool negative (int x){
    return x < 0;
}

bool multipleOfTwo (int x){

return x % 2 == 0;
}

int main (){

    int arr[] = {1,2,3,4,5,5,5,5,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> nums = {1,23,-3,143,5,5,5,5,5,6223,7};

    cout << all_of (arr,arr + n,positive) << "\n";

    cout << any_of (nums.begin(),nums.end(),negative) << "\n";

    cout << none_of (nums.begin(),nums.end(),multipleOfTwo) << "\n";
    return 0;
}