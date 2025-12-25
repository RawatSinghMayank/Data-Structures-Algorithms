#include <bits/stdc++.h>
using namespace std;

bool isInteger (string &str){

      for (char ch : str){

        if (ch == '+' || ch == '-') continue;
        if (!isdigit(ch)) return false;
    }

    return true;
}
int main(){

     string str;
    cin >> str;

    if (str.find('.') != string::npos){
        cout << "decimal" << endl;
    } else if (isInteger(str))
        cout << "Integer";
    else
        cout << "Invalid number";

    
}