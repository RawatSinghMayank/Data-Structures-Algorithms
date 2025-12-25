#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--){

        int pile1, pile2;
        cin >> pile1 >> pile2;

        // Time limit exceeded:
        // while (pile1 > 0 && pile2 > 0){

        //     if (pile1 > pile2){
        //         pile1 -= 2;
        //         pile2 -= 1;
        //     } else{
        //         pile1 -= 1;
        //         pile2 -= 2;
        //     }
        // }

        // if (pile1 == 0 && pile2 == 0){
        //     cout << "YES\n";
        // } else{
        //     cout << "NO\n";
        // }

        if (pile2 > pile1) swap (pile1,pile2);

        if ((pile1 + pile2 ) % 3 == 0 && pile1 <= 2 * pile2 ) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}