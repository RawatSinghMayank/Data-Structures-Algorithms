class Solution {
public:
    string frequencySort(string s) {
        
        priority_queue <pair <int,char> ,vector <pair <int,char>> , less <pair<int,char>>> pq;
        vector <int> freq(123,0);

        for (auto &it : s){
           freq[it]++;
        }

        for (int i = 0; i < 123; i++){
            pq.push({freq[i],char(i)});
        }

        

        string ans = "";
        while(!pq.empty()){
            char ch = pq.top().second;
            int frequency = pq.top().first;
            pq.pop();
            for (int i  = 0; i < frequency; i++){
                ans += ch;
            }
        }
        return ans;
    }
};