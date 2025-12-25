#include <bits/stdc++.h>
using namespace std;

int main(){

	//initialisation; conditions; operations
	for (int i= 0; i< 10; cout << i ++<<endl); //correct

		//for (;;){} //infinite loop

		//for (int i = 10; ;i++) { cout << "infinite loop" << endl;}


		//for (int i= 10;true; i++)  {} infinite loop

		//Access last n digits of a number
		int num;
		cin >> num;

		int digit;
		cin >> digit;
		cout << num  % (int)pow(10,digit) << endl;
}