#include <iostream>
#include <vector>
using namespace std;

void downHeapify(vector<int>& heap, int parent, int n) {
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
        swap(heap[parent], heap[largest]);
        downHeapify(heap, largest, n);
    }
}

vector<int> sortArray(vector<int>& heap) {
    int n = heap.size();

    // Build Max Heap (Heapify process)
    for (int i = n / 2 - 1; i >= 0; i--) {
        downHeapify(heap, i, n);
    }

    // Heap Sort
    for (int i = n - 1; i > 0; i--) {
        swap(heap[0], heap[i]);  // Move the largest element to the end
        downHeapify(heap, 0, i); // Restore heap property on reduced heap
    }

    return heap;
}

// Driver Code
int main() {
    vector<int> arr = {4, 10, 3, 5, 1};
    vector<int> sortedArr = sortArray(arr);

    cout << "Sorted Array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
