#include <bits/stdc++.h>
using namespace std;

long long minLengthOfSide (long long w, long long h, long long n){

    long long side1 = 0, side2 = 0, side3 = 0, side4 = 0;

    side1 = n / w;`
    if (n % w == 0){
        side2 = side1;
    } else {
       side2 = side1 + 1;
   }

   side3 = n / h;
   if (n % h == 0){
    side4 = side3;
   } else {
    side4 = side3 + 1;
   }

    long long result1 = (side1 * w >= n) ? side1 * w : INT_MAX;
    long long result2 = (side2 * w >= n) ? side2 * w : INT_MAX;

    long long result3 = (side3 * h >= n) ? side3 * h : INT_MAX;
    long long result4 = (side4 * h >= n) ? side4 * h : INT_MAX;

   return min (result1, min (result2, min (result3, result4)));

}

int  main (){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long w , h , n;

    cin >> w >> h >> n;

    cout << minLengthOfSide (w, h , n);


    return 0;
}