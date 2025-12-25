 

https://www.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
vector<int> topKFrequent(vector<int> &arr, int k) {
        
        int n = arr.size();
        unordered_map <int,int> freq;
        
        for (auto &it : arr){
            freq[it]++;
        }
        
        priority_queue <pair <int,int>> topFreq;
        
        for (auto it : freq){
            topFreq.push({it.second,it.first});
        }
        
        vector <int> result;
        while (result.size() < k && !topFreq.empty()){
            result.push_back(topFreq.top().second);
            topFreq.pop();
        }
        
        return result;
    }
This behavior comes from the way std::pair defines its comparison. The default operator< for pairs performs a lexicographical comparison:

First, it compares the first elements (here, the frequencies).
Then, if those are equal, it compares the second elements (the actual numbers).
Because your max-heap (std::priority_queue) uses this comparison, it considers {2, 5} greater than {2, 4} when frequencies are equal. So, it's not an inherent property of the heap itself—it's the pair's comparison operator that the heap leverages to order its elements.

