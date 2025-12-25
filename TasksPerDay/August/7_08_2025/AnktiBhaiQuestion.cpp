#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin >> n;

    vector <int> nums (n);
 
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    // Mera hisab sai 0 1 0 1 0 1 0 1 
    // 0 1 1 1 0 0 0 1 1 1 1 1 pattern hona chiya

    bool flag = true;

    if (nums[0] == 1) cout << "NO" << "\n";
    else {
        cout << "YES" << "\n";
    }


    return 0;
}