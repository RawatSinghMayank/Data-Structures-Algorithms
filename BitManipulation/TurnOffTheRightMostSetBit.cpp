#include <bits/stdc++.h>
using namespace std;

void solve(int n){

     int pos = 0;

    if (n == 0){
        cout << 0 << "\n";
        return;
    }
    while (((n >> pos) & 1) == 0){
        pos++;
    }

    cout << (n ^ (1 << pos)) << endl;
    // can also do (n - (1 << pos))
}

int  main(){

    int n;
    cin >> n;

   solve(n);
   int ans = n & (n - 1);
   
   cout << ans << "\n";

   int ans2 = (n - (n & (-n)));
   cout << ans2 << endl;
    return 0;
}