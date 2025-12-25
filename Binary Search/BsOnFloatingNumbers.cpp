#include <bits/stdc++.h>
using namespace std;

bool possibleToCutRopes (vector <double>& ropes, int kpieces, double mid){

	int countOfPieces = 0;
	
	for (int i = 0;i < ropes.size(); i++){

		countOfPieces += floor(ropes[i]/mid);
	}

	return countOfPieces >= kpieces;

}

int main(){


/*
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




//One way to do this is this way but this is not the best way
// becuase 
// while (r - l > 1e-6)
// is not always reliable because:

// ❌ 1️⃣ Floating-point precision issues
// Floating-point numbers (double/float) are not exact.

// Rounding errors can accumulate.

// Sometimes (r - l) might stop shrinking due to precision limits → infinite loop OR inaccurate stopping.
#include <bits/stdc++.h>
    // }
  */
	long long nropes,kpieces;
	cin >> nropes >> kpieces;

	vector <double> ropes(nropes);	
	
	double low = 0, high = 0;
	for (long long i = 0; i < nropes; i++){
		cin >> ropes[i];
		high = max (high ,ropes[i]);
	}

	double ans = 0.0;
	for (long long i = 0; i < 100; i++){
		
		double mid = low + (high - low)/2;

		if (possibleToCutRopes (ropes, kpieces, mid)){
			ans = mid;
			low = mid;
		}else{
			high = mid;
		}
	}

	cout << setprecision(20) << ans << "\n";


	return 0;
}