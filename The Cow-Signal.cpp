#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int row, col, k;
    cin >> row >> col >> k;

    vector <string> after;
    vector <string> before;
    for (int i = 0; i < row; i++){
        string temp;
        cin >> temp;
     
       before.push_back(temp);
    }

    for (int i = 0; i< row; i++){
        string result;
        for (int j = 0; j< col; j++){
            result += before[i][j];
            result += before[i][j];
        }
      
        for (int j = 0;j < k; j++){
            after.push_back(result);
           
        }
    }   
   
    for (auto &it : after){
        cout << it << "\n";
    }

    return 0;
}
