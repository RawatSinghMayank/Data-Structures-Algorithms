#include <bits/stdc++.h>
using namespace std;

bool 
int main(){

    int n, k;
    cin >> n >> k;

    int mini = 1, maxi = INT_MAX;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        maxi = min (maxi,x);
    }


    return 0;
}