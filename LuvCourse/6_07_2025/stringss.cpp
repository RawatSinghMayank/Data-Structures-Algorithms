#include <bits/stdc++.h>
using namespace std;

int main(){

	string a = "string";

	a[0] = 'n';
	// error : str[0] mai string thodi daal skte hai a[0] = "g";


	int n;
	cin >> n;
	cin.ignore();

// 	int n;
// cin >> n;          // reads the number, but leaves '\n' in buffer
// string s;
// getline(cin, s);  
// this error will not happen when you simply read a string like cin >> str but happend when getline(cin,s) // reads the leftover '\n' as an empty line!


	string mayank = "mayank";
	mayank.push_back('a'); //T.c- O(1)
	cout << mayank;

	mayank = mayank + 'a';
	//time complexity - O(n) n = size of string
	
	string sentence;
	getline(cin,sentence);
	cout << sentence << "\n";

	stringstream parts(sentence);

	string temp;

	int count = 0;
	while(parts >> temp){
		cout << temp << " " << ++count<< " ";
	}

	return 0;
}