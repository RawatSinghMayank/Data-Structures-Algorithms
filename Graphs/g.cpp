#include <bits/stdc++.h>
using namespace std;
class DisjointSet {
    vector<int> rank, parent, size;
    multiset <int> ms;
public:

    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 1 ; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
            ms.insert(i);
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void merge (int u, int v){

        int pu = findUPar(u);
        int pv = findUPar(v);

        ms.erase(ms.find(size[pu]));
        ms.erase(ms.find(size[pv]));

        ms.insert(size[pu] + size[pv]);


    }

    int diff (){
        return (*ms.rbegin()) - (*ms.begin());
    }
    void unionBySize(int u, int v) {

        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if (ulp_u == ulp_v){
            return;
        }

        merge(u , v);
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];

        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }

       
    }
};


int main(){


    int n;
    cin >> n;

    DisjointSet dsu(n);

    int q;
    cin >> q;

    while(q--){
        int u, v;
        cin >> u >> v;
        dsu.unionBySize(u , v);

        cout << dsu.diff() << "\n";

    }
}