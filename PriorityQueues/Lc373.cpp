
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        priority_queue <pair <int,pair <int,int>>, vector <pair <int,pair <int,int>>>, greater <pair <int, pair <int,int>>>> result;
        int len1 = nums1.size();
        int len2 = nums2.size();

        for (int i = 0; i < len1; i++){
            for (int j = 0; j < len2; j++){
                result.push({nums1[i] + nums2[j] ,{nums1[i], nums2[j]}});
            }
        }

        vector <vector <int>> finalans;
        while(k--){
            pair <int,pair<int,int>> ans = result.top();
            result.pop();
            finalans.push_back({ans.second.first,ans.second.second});
        }
            return finalans;

    }
};/*
Time Complexity Analysis:
1. Constructing the Min-Heap:
   - We insert all possible pairs (nums1[i], nums2[j]) into the heap.
   - This results in O(len1 * len2) pairs being inserted.
   - Each insertion takes O(log(len1 * len2)).
   - Total time: O(len1 * len2 * log(len1 * len2)).

2. Extracting k elements from the Min-Heap:
   - The while-loop runs k times.
   - Each extraction (pop()) takes O(log(len1 * len2)).
   - Total time: O(k log(len1 * len2)).

Total Time Complexity:
O(len1 * len2 * log(len1 * len2)) + O(k log(len1 * len2)) = O(len1 * len2 * log(len1 * len2)).

- This is **very inefficient** when len1 and len2 are large because we are storing and sorting all possible pairs.

Space Complexity Analysis:
- The min-heap stores all possible pairs, which is O(len1 * len2).
- The result vector stores k pairs, which is O(k).
- Total Space Complexity: O(len1 * len2) (dominant term).
*/








#define pp pair <int, pair <int,int>>
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        priority_queue <pp, vector <pp> ,greater<pp>> minHeap;
        
        int len1 = nums1.size();
        int len2 = nums2.size();

        for (int i = 0; i < len2; i++){
            minHeap.push({nums1[0] + nums2[i],{0,i}});
        }
        
        pp ans;
        vector <vector <int>> result;
        while(k-- && !minHeap.empty()){
            
            ans = minHeap.top();
            minHeap.pop();
            int nums1Index = ans.second.first;
            int nums2Index  = ans.second.second;
            result.push_back({nums1[nums1Index],nums2[nums2Index]});
            if (nums1Index + 1 < nums1.size()){
                minHeap.push({nums1[nums1Index+1]+nums2[nums2Index],{nums1Index+1,nums2Index}});
            }
        }

    return result;
    }
};


/*
Time Complexity Analysis:
1. Initial Heap Insertion:
   - We insert the first element of `nums1` paired with each element of `nums2`.
   - This results in `O(len2 log len2)` operations (inserting len2 elements into the min-heap).

2. Extracting k pairs from the Min-Heap:
   - The while-loop runs `k` times.
   - Each extraction (`pop()`) takes O(log len2).
   - Each extracted element may insert a new element into the heap (at most k insertions).
   - Each insertion takes O(log len2).
   - Total time: O(k log len2).

Total Time Complexity:
O(len2 log len2) + O(k log len2) = O((len2 + k) log len2).

- Worst case: If k = len1 * len2 (all pairs are needed), then the worst case is O(len1 * len2 log len2).

Space Complexity Analysis:
- The min-heap stores at most `min(k, len2)` elements at a time.
- The result vector stores `k` pairs.
- Total Space Complexity: O(min(k, len2) + k) = O(k).
*/
