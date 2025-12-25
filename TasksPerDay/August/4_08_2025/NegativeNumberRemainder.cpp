#include <bits/stdc++.h>
using namespace std;


int main(){


    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    int m;
    cin >> m;
    
    num %= m;
    if (num < 0) num += m; 
    cout << num << "\n";

    double x = 0.3 * 3 + 0.1;
    printf ("%.20f\n",x);

    //comparing floating point number

    double a = x;
    double b = 1;

    if (abs (a-b) < 1e-9){
        cout << "a and b are equal" << "\n";
    } else {
        cout << "a and b are not equal" << "\n";
    }

    cout << "Number of digits " << floor(log10(232230)) + 1 << endl;
    return 0;
}