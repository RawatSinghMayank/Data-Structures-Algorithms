#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int x;
        cin >> x;

        string str;
        cin >> str;

        int leftBlock = 0, rightBlock = 0;

        int i = x - 1, j = x;
        int pos = -1;
        while(i--){
            if (str[i] == '#') leftBlock++;
        }

        while(j < n){
            if (str[j] == '#') {
                rightBlock++;
                pos = j;
            }
            j++;
        }

        if ((leftBlock == 0 && rightBlock == 0) || x == 1 || x == n){
            cout << 1 << "\n";
        }
          else {
            cout << min (x,n -x + 1) << "\n";
          }




    }
    return 0;
}