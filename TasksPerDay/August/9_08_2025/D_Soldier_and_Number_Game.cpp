#include <bits/stdc++.h>
using namespace std;

vector <int> factorial (){

    vector <int> fact (5e6 + 1);

    fact [0] = fact [1] = 1;

    for (int i = 2; i <= 5e6 + 1; i++){

        fact[i] = fact[i - 1] * i;
    }

    return fact;

}

int main(){

    int test;
    cin >> test;

    vector <int> fact = factorial ();
    while (test--){

        int num1, num2;
        cin >> num1 >> num2;

        

    }

    return 0;
}