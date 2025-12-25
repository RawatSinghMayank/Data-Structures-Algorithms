#include <iostream>
#include <vector>
#include <algorithm>  // Needed for sort()
#include <queue>
using std::cin;
using std::endl;
using std::vector;
using std::cout;
using std::priority_queue;

int lastStoneWeight(vector<int>& stones) {
    while (stones.size() > 1) {
        sort(stones.begin(), stones.end()); // Sort stones in ascending order

        int last = stones.back();     // Largest stone
        stones.pop_back();
        int secondLast = stones.back(); // Second largest stone
        stones.pop_back();

        if (last != secondLast) {
            stones.push_back(last - secondLast); // Push the difference back
        }
    }

    return stones.empty() ? 0 : stones[0]; // Return remaining stone or 0
}


    int lastStoneWeightOptimized(vector<int>& stones) {
        
        priority_queue <int> weight (stones.begin(),stones.end());
        int n = stones.size();

        while(weight.size() > 1){

            int heaviest = weight.top();
            weight.pop();
            int secondHeaviest = weight.top();
            weight.pop();

            if (heaviest > secondHeaviest) weight.push(heaviest - secondHeaviest);


        }
        
        return weight.empty() ? 0 : weight.top();
    }


int main() {
    int n;
    cout << "Enter number of stones: ";
    cin >> n;
    
    vector<int> stones(n);
    cout << "Enter stone weights: ";
    for (int i = 0; i < n; i++) {
        cin >> stones[i];
    }

    int result = lastStoneWeight(stones);
    cout << "Last stone weight: " << result << endl;

    return 0;
}
