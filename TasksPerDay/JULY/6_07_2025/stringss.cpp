#include <bits/stdc++.h>
using namespace std;

int main(){

	string a = "string";

	a[0] = 'n';
	a[1] = 'x';
	cout << a << "\n";
	// error : str[0] mai string thodi daal skte hai a[0] = "g";


	int n;
	cin >> n;
	cin.ignore();
	string xx;
	getline(cin,xx);
	cout << xx << "\n";

	while(n--){
		string str;
		getline(cin,str);
		cout << str << endl;
	}



	string mayank = "mayank";
	mayank.push_back('a'); //T.c- O(1)
	cout << mayank;

	mayank = mayank + 'a';
	//time complexity - O(n) n = size of string
	
}