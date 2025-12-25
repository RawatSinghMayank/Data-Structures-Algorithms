#include <bits/stdc++.h>
using namespace std;

int main(){

    
    freopen ("teleport.in","r",stdin);
    freopen ("teleport.out","w",stdout);
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int ans = 0;
    ans = abs(min(a,b) - min(x,y)) + abs(max(a,b) - max(x,y));

    cout << min (abs(b - a),ans) << "\n";

    return 0;
}