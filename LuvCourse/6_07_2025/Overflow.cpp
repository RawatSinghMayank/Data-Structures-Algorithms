#include <bits/stdc++.h>
using namespace std;

int main(){


	int a = 100000;
	int b = 100000;

	long long c = a * b; // This is wrong becuase calulation is first perfomed in int * int
	cout << c << endl;
	long long d = a * 1LL * b; // 1LL = A long integer with value = 1
	cout << d << endl;

	// Double has higher range then long long .But dont use it 
	//becuase they lost precision - not accurate


	// int -> -10^9 -> 10^9
	// long int ->   -10^12  -> 10^12
	// long long int ->  -10^18 -> 10^18

	cout << a *1ll * b << endl; //CORRECT
	return 0;
}