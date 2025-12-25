#include <iostream>
#include <vector>
#include <queue>

using std::cin;
using std::endl;
using std::vector;
using std::cout;


int main() {

	std::priority_queue <int> hp;		/* It's how it is by default:  std::priority_queue <int, vector<int>, std::less <int> > hp;*/
	
	
	hp.push(1);
	hp.push(2);
	hp.push(3);
	hp.push(4);
	hp.push(5);
	hp.push(6);
	hp.push(7);
	
	while(!hp.empty()){
		cout << hp.top() << " ";
		hp.pop();
	}
	cout << endl;

	std::priority_queue <int, vector <int> , std::greater <int> > lesshp;
	lesshp.push(1);
	lesshp.push(2);
	lesshp.push(3);
	lesshp.push(4);
	lesshp.push(5);
	lesshp.push(6);
	lesshp.push(7);
	
	while(!lesshp.empty()){
		cout << lesshp.top() << " ";
		lesshp.pop();
	}

	//Array or vector to priority queue

	vector <int> arr = {23,20,40,20,40,90};
	int arr2 [] = {56,52,56,2,5,53};
	std::priority_queue <int> q1 (arr.begin(),arr.end());
	std::priority_queue <int, vector <int> , std::greater<int> > q2(arr2,arr2+6);
	cout << endl;
	cout << q1.top() << endl << q2.top() << endl;
    return 0;
}

/*  lesser and greater then explanation
    In inbuilt priority_queue then are just comparing like this:
    inhone bus heap largest ko left side rkh diya hai

void downHeapify(int parent) {
        int n = heap.size();
        int largest = parent;
        int left = 2 * parent + 1;
        int right = 2 * parent + 2;

        if (left < n &&  heap[largest] < heap[left] ) {
            largest = left;
        }

        if (right < n &&   heap[largest] < heap[right]) {
            largest = right;
        }

        if (largest != parent) {
            std::swap(heap[parent], heap[largest]);
            downHeapify(largest);
        }
    } */
