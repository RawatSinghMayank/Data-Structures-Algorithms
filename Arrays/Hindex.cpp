class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n = citations.size();
        vector <int> paperCounts (n + 1, 0);

        // maximun answer can be size of citations
        // If citations[i] >= n then we can store it in last element becuase we
        // can get number of atleast papers that have citated less or equal 


        for (int i = 0; i < n; i++){
            int citation = citations[i];
            if (citation <= n){
                paperCounts[citation]++;
            }
            else{
                paperCounts[n]++;
            }
        }

// Start from last index and keep on adding last freq to previous 
// becuase in this way we can get atlesast paper citated more than
// index value
        int count = 0;
        for (int i = n  ; i >= 0; i--){
            count += paperCounts[i];
            if (count >= i) return i;
        }
        return 0;
    }
};



class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        sort (citations.begin(),citations.end());
        int n = citations.size();
        int low = 0, high = n - 1;
        
        int result = 0;
        for (int i = 0; i < n; i++){
            if (citations[i] >= n - i) return n - i;
        }
        return result;
    

    }
};