class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};



Solution 2: (Two-pass Hash Table)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        // Build the hash table
        for (int i = 0; i < n; i++) {
            numMap[nums[i]] = i;
        }

        // Find the complement
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement) && numMap[complement] != i) {
                return {i, numMap[complement]};
            }
        }

        return {}; // No solution found
    }
};


Solution 3: (One-pass Hash Table)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector <int> result;
        int n = nums.size();
        unordered_map <int,int> elements;
        for (int i = 0; i < n; i++){
            int num = nums[i];
            int remaining = target - num;
            if (elements.find(remaining) != elements.end()){

                result.push_back(i);
                result.push_back(elements[remaining]);
                break;
            }      
            elements[num] = i;
        }

        return result;
    }
};