#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using std::cin;
using std::endl;
using std::vector;
using std::cout;

class MaxHeap {
private:
    vector<int> heap;

    void upHeapify(int cIndex) {
        while (cIndex > 0) {
            int pIndex = (cIndex - 1) / 2;
            if (heap[pIndex] < heap[cIndex]) {
                std::swap(heap[pIndex], heap[cIndex]);
                cIndex = pIndex;
            } else {
                break;
            }
        }
    }


    void downHeapify(int parent) {
        int n = heap.size();
        int largest = parent;
        int left = 2 * parent + 1;
        int right = 2 * parent + 2;

        if (left < n && heap[left] > heap[largest]) {
            largest = left;
        }

        if (right < n && heap[right] > heap[largest]) {
            largest = right;
        }

        if (largest != parent) {
            std::swap(heap[parent], heap[largest]);
            downHeapify(largest);
        }
    }

public:
    MaxHeap(vector <int> heap){
	this -> heap = heap;
	int n = heap.size();
	for (int i = n/2 - 1; i >=0; i--){
	    downHeapify(i);
	}

    }
    void push(int ele) {
        heap.push_back(ele);
        upHeapify(heap.size() - 1);
    }

    void display() {
        for (int x : heap) cout << x << " ";
        cout << endl;
    }

    bool empty() {
        return heap.size() == 0;
    }

    int peek() {
        if (empty()) return INT_MIN;
        return heap[0];
    }

    void pop() {
        if (heap.empty()) {
            return;
        }

        heap[0] = heap[heap.size() - 1];
        heap.pop_back();
        if (!heap.empty()) {
            downHeapify(0);
        }
    }

    void remove(int i) {
       
        if (i < 0 || i >= heap.size()){
            cout << "Invalid index" << endl;
            return;
        }

        heap[i] = heap.back();
        heap.pop_back();

       if (i < heap.size()) {  
        if (i > 0 && heap[i] > heap[(i - 1) / 2])   
            upHeapify(i);
        else
            downHeapify(i);
        }
    }

    void changePriority(int i, int newPriority) {
        if (i < 0 || i >= heap.size()) {
            cout << "Invalid index!" << endl;
            return;
        }

        int oldPriority = heap[i];
        heap[i] = newPriority;

        if (newPriority > oldPriority)
            upHeapify(i);
        else
            downHeapify(i);
    }
};

int main() {
   
    vector <int> arr = {9 ,6, 1, 19, 3, 2, 8, 12, 5};
    MaxHeap hp(arr);
    hp.push(100); 
    hp.display();
    return 0;
}
