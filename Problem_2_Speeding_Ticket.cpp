#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);
    int m, n;
    cin >> m >> n;

    vector <int> allowedSpeed (101,0);
    
    int pos = 1;
    for (int i = 0; i < m; i++){
        int length, speed;
        cin >> length >> speed;

        for (int j = 0; j < length; j++){
            allowedSpeed[pos++] = speed;
        }
    }
    pos = 1;
    int maxOverSpeed = 0;
    for (int i = 0; i < n; i++){
        int length, speed;
        cin >> length >> speed;

        for (int j = 0; j < length; j++){
            maxOverSpeed = max (maxOverSpeed, speed - allowedSpeed[pos++]);
        }
    }

    cout << maxOverSpeed << "\n";
    return 0;
}
