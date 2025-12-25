#include <bits/stdc++.h>
using namespace std;

int main(){

    string str = "53.54353";
    cout << stod(str) + 1 << endl;

    string nig = "99";
    cout << stoi(nig) + 1 << endl;

    cout <<  stoll(nig) << endl;

    double temp = -10.000000001;

    cout << to_string(temp) << endl;
    
}