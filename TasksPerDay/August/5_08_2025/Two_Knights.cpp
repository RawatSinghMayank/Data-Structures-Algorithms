

// Answer = x - y;
// x = number of ways to place 2 knights (don't care about attacks)
// y = number of ways to place 2 knights so they would attack each other

// becuase we can't find number of ways to  place 2 knights so they won't attack each other becuase 
// there are so many possiblities


// x = n * (n-1)/2 

// knight1...knight2 is same as 
// knight2...knight1




#include <bits/stdc++.h>
using namespace std;
int main(){


    int n;
    cin >> n;

    for (long long i = 1; i <= n; i++){

        long long size = i * 1LL * i;
        long long totalWays = size * (size-1)/2;

        long long  waysInKnightsAttack = 0;

        waysInKnightsAttack += (i-4 )* (i-4) * 8;
        // see erichto solution and see chesboard given in cses

        waysInKnightsAttack += (i-4) *4 *  6;
        waysInKnightsAttack += (i-3) *  4 *4;
        waysInKnightsAttack += 3 * 8;
        waysInKnightsAttack += 4 * 2;

        waysInKnightsAttack /= 2;

        cout << totalWays - waysInKnightsAttack << "\n";
        
    }
    
    return 0;
}