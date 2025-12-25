#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int main (){

   int n;
    cin >> n;
    
    set <int> s;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert (x);
    }

//     int x;
//     cin >> x;
//     auto it = lower_bound (s.begin(),s.end(),x); // don't use this this is O(n) 
// // instead use this below

//     auto fast = s.lower_bound(x);
    
//     for (auto it : s) cout << it << " ";
//     cout << endl;
//     cout << (*it) << endl;
//     cout << (*fast) << endl;


//     map <int,int> mp;
//     mp[1] = 2;
//     mp[2] = 3;
//     mp[4] = 10;
//     mp[5] = 230;

//     auto map_ = mp.lower_bound(3);
//     auto map__ = mp.upper_bound(3);
//     cout << (*map_).first <<" " << (*map_).second << " " << (*map__).first << " " << (*map__).second <<endl;

    int find;
    cin >> find;

    set <int> ::iterator it = s.lower_bound(find);

    if (it == s.end()){
        cout << "NO" << endl;
    }else{
        cout << "YES" << *it <<endl;
    }

    set <int> :: iterator itt = s.upper_bound(find);
    
    if (itt == s.end()){
        cout << "NO" << endl;
    }else{
        cout << "YES" << *itt <<endl;
    }

    map <int,int> hash;
    cin >> n;
    while(n--){
        int x;
        cin >> x;

        hash[x]++;
    }

    cin >> find;
    map <int,int> :: iterator nig = hash.lower_bound(find);
  

    if (nig == hash.end()){
        cout << "NO" <<endl;
    }else{
        cout << "YES " << nig -> first << " " << nig->second << " again " << (*nig).first << " " << (*nig).second << endl; 
    }

    return 0;
}