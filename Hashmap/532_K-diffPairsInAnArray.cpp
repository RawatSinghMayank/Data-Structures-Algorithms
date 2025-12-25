#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    /* Creating and Populating the unordered_map (hash):
The function iterates through the vector nums once, with a loop from i = 0 to nums.size() - 1.
For each element, it performs an insertion into the unordered_map.
Inserting into an unordered_map has an average time complexity of O(1) per insertion (assuming no hash collisions and a good hash function).
Therefore, populating the map takes O(n), where 

n=nums.size().
Iterating Through nums to Find Pairs:
The function iterates through nums again, with a loop from i = 0 to nums.size() - 1.
For each element nums[i], it:
Looks up nums[i] + k in the unordered_map using hash.find(), which has an average time complexity of O(1).
If found and the index is different (

hash[nums[i]+k]!=i), it creates a pair and inserts it into the set.
Creating and comparing pairs (including the conditional logic for ordering) is O(1) per operation.
Inserting into a set (which maintains order) has a time complexity of O(log m), where 
𝑚
m is the current number of elements in the set. However, since the number of unique pairs is at most 
𝑛
/
2
n/2 (in the worst case), 
𝑚
m is bounded by O(n), so each insertion is O(log n).
There are 
𝑛
n iterations, and for each iteration, we perform O(1) lookups and potentially O(log n) insertions into the set.
Thus, this step takes O(n) for the loop iterations, plus O(n log n) for the set insertions in the worst case (if every pair is unique and inserted).
Returning the Size of the uniquePairs Set:
This is O(1), as it simply returns the size of the set.
Total Time Complexity
Populating the unordered_map: O(n).
Finding pairs and inserting into the set: O(n) for iterations + O(n log n) for set insertions = O(n log n).
Returning the size: O(1).
Combining these, the dominant term is O(n log n), so the overall time complexity of the findPairs function is O(n log n).

Space Complexity
Unordered Map (hash): Stores up to 
𝑛
n elements, so O(n) space.
Set (uniquePairs): Stores up to 
𝑛
/
2
n/2 pairs in the worst case (if every element pairs with another), so O(n) space.
Total space complexity: O(n).
Notes on Worst-Case Scenarios
The O(n log n) time complexity arises primarily from the set insertions, where each insertion could take O(log n) and there could be up to O(n) insertions (e.g., if every element pairs uniquely with another).
The unordered_map lookups are O(1) on average, but in the worst case (poor hash function or many collisions), they could degrade to O(n). However, in practice and assuming a good hash function, O(1) is typical.
The set ensures uniqueness of pairs, which is critical to avoid counting duplicates, but it introduces the log factor due to its balanced tree structure (e.g., red-black tree in C++).
Optimality
This solution is efficient for the problem, as finding pairs in an unsorted array inherently requires at least O(n) to scan the elements, and the need to ensure uniqueness (via the set) introduces the log factor.
If the array were sorted, we could potentially use two-pointer techniques or binary search to achieve O(n log n) or better, but the current problem doesn’t specify sorting, so the hash map approach is appropriate.
Thus, the time complexity of the findPairs function is O(n log n), and the space complexity is O(n)*/


    int findPairs(vector<int>& nums, int k) {
        
        unordered_map<int, int> hash;  // Store element and its index

        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i;
        }

        set<pair<int, int>> uniquePairs;  // Store unique pairs

        for (int i = 0; i < nums.size(); i++) {
            // Check if nums[i] + k exists and it's not the same element
            if (hash.find(nums[i] + k) != hash.end() && hash[nums[i] + k] != i) {
                pair<int, int> temp;

                // Store pair in ascending order to avoid duplicates
                if (nums[i] + k > nums[i]) 
                    temp = {nums[i], nums[i] + k};
                else 
                    temp = {nums[i] + k, nums[i]};

                uniquePairs.insert(temp);
            }
        }

        return uniquePairs.size();
    }


    int findPairsSecondApproach(vector<int>& nums, int k) {

        // TIME COMPLEXITY : O(N)
        // SPACE COMPLEXITY : O(N)
        unordered_map <int,int> hash;

        for (auto &it :  nums){
            hash[it]++;
        }

        int count = 0;
        for (auto &it : hash){
            if (k == 0 ){
              if (it.second > 1)  count++;
            }
            else{
                if (hash.find(it.first + k) != hash.end()){
                    count++;
                }
            }
        }
        return count;
    }
    

};


int main() {
    Solution sol;
    vector<int> nums = {1,3,1,5,4};
    int k = 0;
    cout << "Number of unique k-diff pairs: " << sol.findPairsSecondApproach(nums, k) << endl;

    return 0;
}
