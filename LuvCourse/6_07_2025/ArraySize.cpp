#include <bits/stdc++.h>
using namespace std;

// global array size can be in range of 1e7 approx 2e7 will also work
const int x = 1e7;
int xrr[x];
// xrr[x-1] = 10;
// cout << xrr[x-1] << endl; this is error we have to write this inside some function

int main(){
	
	//becuae local vairiable stored inside stack which has space around 7 8 mb so it gets full
	// but global variabel are stored in data segment which doesn't have fix space
	

	int n = 1e5;
	int arr[n];

	arr[n-1] = 10;
	cout << arr[n-1] << endl;

	//approx size can be 1e5 
	xrr[x-1] = 99;
	cout << xrr[x-1];

	return 0;
}