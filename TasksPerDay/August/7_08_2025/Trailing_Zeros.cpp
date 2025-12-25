#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    long long result = 0;
    
    for (long long i = 5; i <= n; i *= 5){

        result += n / i;
    }
    cout << result <<  "\n";
    return 0;
}