#include <bits/stdc++.h>
using namespace std;

int main(){

	//initialisation; conditions; operations
	for (int i= 0; i< 10; cout << i ++<<endl); //correct

		//for (;;){} //infinite loop

		//for (int i = 10; ;i++) { cout << "infinite loop" << endl;}

		//for (int i= 10;true; i++)  {} infinite loop

		//Access last n digits of a number
		
		cout << "How many digits you want " << endl;

		int n;
		cin >> n;

		cout << "Enter the number" << endl;
		int num;
		cin >> num;

		cout << num % (int)(pow (10,n)) << "\n";
}