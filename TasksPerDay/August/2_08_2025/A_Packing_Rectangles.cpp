#include <bits/stdc++.h>
using namespace std;

bool canPackRectangles (long long width, long long height, long long numberOfRectangles, long long side){

    if (((side/width)  *  (side/height)) >= numberOfRectangles) return true;

    return false;
    
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long width, height, numberOfRectangles;

    cin >> width >> height >>  numberOfRectangles;

    long long low = 0, high = 1;
    long long ans = 0;

    while(!canPackRectangles (width, height,numberOfRectangles,high)){
        high *= 2;
    }

    //  Trick - As given that width, height , numberOfRectangles <= 10^9 
    //  then our previous high  = max (width, height) * numberOfRectangles can be 10^18
    //  So when we find mid can be in range <= 10^18. Suppose our mid is 10^14 then when we pass 
    //  side = 10^14 to above function. Suppose width = 10 and height = 10 then side/width = 10^13
    //  and side/height = 10^13   then this multiplication will go outside range of long long.

    //  So here is technique of calculating high . Which is 2^k so we will get value for which
    //  0 0 0 0 0 1 1 1 1 1 1 1 1   then we can apply binary search to reduce our side 

    while (low <= high){

        long long mid = low + (high - low)/2;

        if (canPackRectangles(width, height, numberOfRectangles, mid)){
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }


    cout << ans << "\n";

    return 0;
}