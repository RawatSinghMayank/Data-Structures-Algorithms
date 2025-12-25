https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/




first solve yourself. then scroll below to see solution











































priority queue solution
this is hint,scroll below to see code











#include <bits/stdc++.h>

using namespace std;
int main() {

	long long test;
	cin >> test;

	while (test--){

		long long size;
		cin >> size;

		long long time;
		cin >> time;

		priority_queue <long long> maxHeap;
		for (long long i = 0; i < size; i++){
			long long num;
			cin >> num;
			maxHeap.push(num);
		}

		long long result = 0;
		for (long long i = 0; i < time; i++){
			long long top = maxHeap.top();
			maxHeap.pop();

			result += top;
			top = floor(top/2);
			maxHeap.push(top);
		}
		cout << result <<  "\n";
	}

	return 0;
}



multimap solution




#include <bits/stdc++.h>
using namespace std;

int main() {

	long long test;
	cin >> test;

	while (test--){

		long long size;
		cin >> size;

		long long time;
		cin >> time;

		multiset <long long> maxHeap;
		for (long long i = 0; i < size; i++){
			long long num;
			cin >> num;
			maxHeap.insert(num);
		}

		long long result = 0;
		for (long long i = 0; i < time; i++){
			auto top = maxHeap.end();
			top--;
		
			long long val = (*top);
			maxHeap.erase(top);
			result += val;
			val /= 2;

			maxHeap.insert(val);

		}
		cout << result <<  "\n";
	}

	return 0;
}