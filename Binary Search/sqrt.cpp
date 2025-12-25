#include <bits/stdc++.h>
using namespace std;

int main(){

    double x;
    cin >> x;


    double low = 0, high = max(1.0,x);

    while (high - low > 1e-6){
        double mid = low + (high - low)/2;

        if (mid * mid < x){
            low = mid;
        }else{
            high = mid;
        }
        //t.c - lg(x * (10^d)) where d = accuracy like here t.c is  log(x * 1000000) bcz between two integers number
        //ex-> 2 and 3 there are infinite numbers and we are running our code till 1e6 accuracy . so total = log(x * 1e6) 
    }

    double low1 = 0, high1 = max(1.0,x);
   for (int i = 0; i < 100; i++){
        double mid1 = low1 + (high1 - low1)/2;

        if (mid1 * mid1 < x){
            low1 = mid1;
        }else{
            high1 = mid1;
        } //t.c  o(100)
    }

    // take input as 0.04 -> it's square root is 0.02 and if you take low = 0,high = 0.04
    //then 0.02 is outside range of low and high

    cout << "Using high - low " << low << " " << high <<"\n" << "using fixed iterations is more precise and avoid infinite loops :"<< " " << low1<< " " << high1 << " "  << pow (x,1.0/2.0) << "\n";
    return 0;
}