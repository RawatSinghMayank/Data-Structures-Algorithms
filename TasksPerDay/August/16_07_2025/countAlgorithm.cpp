#include <bits/stdc++.h>
using namespace std;

int main (){

    int arr[] = {1,2,3,4,5,5,5,5,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> nums = {1,2,3,4,5,5,5,5,5,6,7};

    cout << count (arr + 7,arr + n,5) << "\n";
    cout << count (nums.begin(),nums.end(),5);

    auto it = find(arr,arr+ n,7);
    auto itt = find(nums.begin(),nums.end(),8);

    if (it != arr + n) cout << "YES " << *it << "\n";
    if (itt != nums.end()) cout << "YES" << "\n";
    else cout << "NO";
    return 0;
}