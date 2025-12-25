#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map <vector <int> ,vector <int>> nig;

    map <vector <pair <int,int>>,pair<int,int>> nigg;

    vector <pair <int,int>> f = {{1,2},{3,4}};
    nigg[f] ={5,6};

    for (auto &it : nigg){
        cout << it.first[0].first  << " " << it.second.first << endl;
    }

    //we can't insert complex ds in key in unordered_map

    unordered_map <int ,vector <int>> nigx;

    unordered_map<int,pair<int,int>> niggx;

    nigx[0].push_back(1);
    niggx[0] = {2,3};

    map <vector <int>,int>b;
    vector <int> temp = {343,343,5,3};
    b[temp] = 20;
    cout <<b[temp] << endl;
    

}