
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        priority_queue <int,vector <int> , greater <int>> pq;
        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j < matrix[i].size(); j++){
                pq.push(matrix[i][j]);
            }
        }
       /* O(n ^2 logn)+O(klogn)=O(n^2logn)
        space  = O(n^2) */
       for (int i = 0; i < k -  1;i ++){
        pq.pop();
       }
       
       return pq.top();
        
    }
};

/*
Time Complexity Analysis:
1. Initial Heap Insertion:

   - We push the first element of up to min(n, k) rows into the min-heap.
   - Each insertion takes O(log n).
   - Total time: O(min(n, k) log n).

2. Extracting k elements from the Min-Heap:
   - We extract the smallest element from the heap k times.
   - Each extraction (pop()) takes O(log n).
   - Each extracted element may insert one new element, also taking O(log n).
   - Total time: O(k log n).

Total Time Complexity:
O(min(n, k) log n) + O(k log n) = O((min(n, k) + k) log n).

- Worst case: If k = n², then O(n² log n).

Space Complexity Analysis:
- The min-heap stores at most min(n, k) elements at any time.
- Each element is a pair {value, {row, col}}, which takes constant space.
- Total Space Complexity: O(min(n, k)).
*/


#define pp pair <int, pair<int,int>>
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        priority_queue < pp, vector <pp>, greater <pp>> minHeap;

        int n = matrix.size();
        for (int i = 0; i < min(n,k); i++){
            minHeap.push({matrix[i][0],{i,0}});
        }

        pp ans;

        while (k-- and !minHeap.empty()){
            ans = minHeap.top();
            minHeap.pop();
            int row = ans.second.first;
            int col = ans.second.second;
            if (col + 1 < matrix[row].size()){
                minHeap.push({matrix[row][col+1],{row,col+1}});
            }
        }

        return ans.first;

    }
};



