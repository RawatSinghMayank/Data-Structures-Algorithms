https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
 
	int n;
	cin >> n;
	//map <int,multiset <string>,greater <int>> stu;
	//without greater <int>
 
	map <int,multiset <string> > stu;
	for (int i = 0; i < n; i++){
 
		string name;
		int marks;
		cin >> name >> marks;
 
		stu[marks].insert(name);
	}
 
	auto it = stu.end();
	while (true){
		it--;
		auto list = (*it).second;
		for (auto &student : list){
			cout << student << " " << (*it).first << "\n";
		}
		if (it == stu.begin()) break;
	}
	return 0;
}
Language: C++17
