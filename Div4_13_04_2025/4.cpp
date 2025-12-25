#include <bits/stdc++.h>
using namespace std;

int main (){

    deque <int> q;
    q.push_front(1);
    q.push_back(2);
    q.push_front(3);
    q.push_front(4);
    for (auto it : q){
        cout << it << " ";
        
    }

    cout << endl;
    cout << q[3] << endl;
    return 0;
}