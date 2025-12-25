#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    cout << 1 << "\n";
    printf("%d\n", 2);
    cout << 3 << "\n";
    printf("%d\n",4);

    // 1
    // 2
    // 3
    // 4


  

    cout <<"print" << "\n";
    int x;
    cin >> x;
    cout << x << "\n";
    cout << "print " << x <<"\n";

    //ios::sync_with_stdio is a setting that turns off the automatic synchronization between the C++ I/O streams (cin, cout, etc.) and the C standard I/O streams (scanf, printf, etc.).

    //cin.tie(nullptr) hold cout will NOT be automatically flushed before a cin operation.
//     cin no longer flushes cout

// cout output may stay in the buffer
//if you use endl then cin.tie(nullptr) is of no use
//becuse endl also moves to new line and flushes buffer


    return 0;
}