#include <iostream>
#include <queue>
#include <vector>

using  namespace std;

class MedianFinder {
public:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    MedianFinder() {
    }
    void addNum(int num) {
        maxHeap.push(num);
        minHeap.push(maxHeap.top());
        maxHeap.pop();
        if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    double findMedian() {
        if (maxHeap.size() > minHeap.size()) return maxHeap.top();
        return (maxHeap.top() + minHeap.top()) / 2.0;
    }
};

/* If all integer numbers from the stream are in the range [0, 100], how would you optimize your solution?
If 99% of all integer numbers from the stream are in the range [0, 100], how would you optimize your solution?*/
#include <iostream>
#include <vector>
using namespace std;

class FollowUpMedianFinder {
private:
    vector<int> x;
    int count;

public:
    FollowUpMedianFinder() {
        x = vector<int>(101, 0); // Initialize all to 0
        count = 0;
    }

    void addNum(int num) {
        x[num]++;
        count++;
    }

    double medianFinder() {
        int total = 0;
        if (count % 2 == 0) {
            int mid1 = count / 2 - 1;
            int mid2 = count / 2;
            int m1 = -1, m2 = -1;
            for (int i = 0; i <= 100; ++i) {
                total += x[i];
                if (m1 == -1 && total > mid1) m1 = i;
                if (m2 == -1 && total > mid2) {
                    m2 = i;
                    break;
                }
            }
            return (m1 + m2) / 2.0;
        } else {
            int mid = count / 2;
            for (int i = 0; i <= 100; ++i) {
                total += x[i];
                if (total > mid)
                    return i;
            }
        }
        return -1.0; // fallback
    }
};

int main() {
    FollowUpMedianFinder obj;
    obj.addNum(5);
    obj.addNum(4);
    obj.addNum(3);
    obj.addNum(2);
    obj.addNum(1);
    obj.addNum(0);

    cout << obj.medianFinder() << endl;  // Should output 2.5
    return 0;
}
