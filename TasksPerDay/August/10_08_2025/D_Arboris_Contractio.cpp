#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--){

        int V;
        cin >> V;

        int minOperations = 0;

        int prevU , prevV;
        cin >> prevU >> prevV;


        for (int i = 1; i < V - 1; i++){

            int u, v;
            cin >> u >> v;

            if (prevU != u && prevU != v && prevV != u && prevV != v){
                minOperations++;
            }
            
            prevU = u;
            prevV = v;
        }

        cout << minOperations << "\n";
    }
    return 0;
}