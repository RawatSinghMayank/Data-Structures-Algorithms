#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);
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
          
            for (int j1 = 0; j1 < k; j1++)
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


2nd approach

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);
    int row, col, k;
    cin >> row >> col >> k;

    for (int i = 0; i < row; i++){
        string before;
        cin >> before;

        string after;

        for (auto & ch : before){
            char current = ch;
            for (int j = 0;j < k; j++){
                after += current;
            }
        }

        for (int j = 0; j < k; j++){
            cout << after << "\n";
        }

    }
  

    return 0;
}
