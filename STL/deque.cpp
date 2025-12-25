#include <bits/stdc++.h>
using namespace std;

int main (){

   deque <int> dq;
   dq.push_back(1);
   for (auto &it : dq){
    cout << it << " ";
   }
   cout << endl;
   dq.push_front(2);
   for (auto &it : dq){
    cout << it << " ";
   }
   cout << endl;
   dq.pop_back();
   for (auto &it : dq){
    cout << it << " ";
   }
   cout << endl;
   dq.pop_front();
   for (auto &it : dq){
    cout << it << " ";
   }
   cout << endl;
    return 0;
}