#include <bits/stdc++.h>
using namespace std;

bool check (int k, vector <double> &nums, double mid){

    int count = 0, n = nums.size();

    for (int i = 0; i < n; i++){

        count += floor(nums[i]/mid);
    }

    return count >= k;
}

int main(){

    int n, k;
    cin >> n >> k;

    vector <double> nums (n);

    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    double low = 0.0,  high = 1e7, ans = 0.0;

    const double epsilon = 1e-6; // tolerance value

    // while (high - low > epsilon){  problem in this is this may run inifinite as if tolearance 
    //     value is something like this 1e-18 then there are infinte number possible between 
    //      high and low such that difference is more than epsilon. So inifinte loop will be formed.
    //      so instead of  this do a fixed number of iterations.

    //     long long -> 10^18    ->binary search time complexity is log(n) ->  log(10^18) is 
    //      approx 60 . Means standard binary search will take 60 iterations if we have
    //      integers . So for safer side we are taking 100 iterations.You can decrease to 70-60 
    //     if your code give time limit exceeded.

    //     double mid = low + (high - low)/2;
    //     if (check(k,nums,mid))ans = mid, low = mid;
    //     else high = mid;
    // }


    for (int i = 0 ;i < 100; i++){
        double mid = low + (high - low)/2;
        if (check(k,nums,mid))ans = mid, low = mid;
        else high = mid;
    }
    cout << setprecision(20) << ans << "\n";

    return 0;

}

// Binary serach for floating points numbers
bool binary_search(double x, int n) {
  double left = 0, right = n;
  const double epsilon = 1e-12; // tolerance value
  
  while (left <= right) {
    double mid = left + (right - left) / 2;
    if (abs(mid - x) < epsilon) 
      return true;
    else if (mid < x) 
      left = mid;
    else 
      right = mid;
  }

  return false;
}