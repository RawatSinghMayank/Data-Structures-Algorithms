#include <bits/stdc++.h>
using namespace std;

int fastPow (long long base,long long pow){

    long long mod = 1e9 + 7, result = 1;
    while (pow != 0){

        if (pow % 2 == 1){
            result = (result % mod * base % mod)%mod;
        }

        base = (base % mod * base) %mod;
        pow /= 2;
    }

    return result;
}
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    cout << fastPow (2,n);
}