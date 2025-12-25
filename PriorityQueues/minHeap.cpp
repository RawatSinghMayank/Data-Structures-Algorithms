#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class MinHeap {
private:
    vector<int> heap;

    void upHeapify(int cIndex) {
        while (cIndex > 0) {
            int pIndex = (cIndex - 1) / 2;
            if (heap[pIndex] > heap[cIndex]) {  
                std::swap(heap[pIndex], heap[cIndex]);
                cIndex = pIndex;
            } else {
                break;
            }
        }
    }

    void downHeapify(int parent) {
        
        int n = heap.size();
        int smallest = parent;
        int left = 2 * parent + 1;
        int right = 2 * parent + 2;

        if (left < n && heap[left] < heap[smallest]) {  
            smallest = left;
        }

        if (right < n && heap[right] < heap[smallest]) { 
            smallest = right;
        }

        if (smallest != parent) {
            std::swap(heap[parent], heap[smallest]);
            downHeapify(smallest);
        }
    }

public:
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
        if (empty()) return INT_MAX;  
        return heap[0];
    }

    void pop() {
        if (heap.empty()) return;

        heap[0] = heap.back();
        heap.pop_back();
        if (!heap.empty()) {
            downHeapify(0);
        }
    }

    void remove(int i) {
        if (i < 0 || i >= heap.size()) {
            cout << "Invalid index!" << endl;
            return;
        }

        heap[i] = heap.back();
        heap.pop_back();

        if (heap.empty()) return;

        if (i < heap.size()) {  
            if (i > 0 && heap[i] < heap[(i - 1) / 2])   
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

        if (newPriority < oldPriority)  
            upHeapify(i);
        else
            downHeapify(i);
    }
};

int main() {
    MinHeap hp;
    hp.push(50);
    hp.push(30);
    hp.push(40);
    hp.push(10);
    hp.push(20);
    hp.push(35);
    hp.push(37);
    hp.display();

    int x;
    cout << "Enter index you want to delete: ";
    cin >> x;
    hp.remove(x);
    hp.display();
    
    return 0;
}
