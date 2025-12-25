#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        map <int,int> nums;

        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            nums[x]++;
        }

        if (nums.size() <= 2){
            if (nums.size() == 1){
                if (nums.find(0) == nums.end()) cout << "YES" << "\n";
                else cout << "NO" << "\n";
            }
    
            else {
                if (nums.find(0) != nums.end()) cout << "NO" << "\n";
                else if (nums.find(-1) != nums.end()) cout << "YES" << "\n";
                else cout << "NO" << "\n";
            }
        } else{
            cout  << "NO" << "\n";
        }
        



    }
    return 0;
}