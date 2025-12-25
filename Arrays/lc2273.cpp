vector<string> removeAnagrams(vector<string>& words) {
        
        vector <string> tempWords (words.begin(),words.end());

        for (int i = 0; i < tempWords.size(); i++){
            sort(tempWords[i].begin(),tempWords[i].end());
        }

        vector <string> result;
        int n = words.size();
        
        result.push_back (words[0]);
        for (int i = 1; i < n ; i++){
            if (tempWords[i] == tempWords[i - 1]){
                continue;
            }
            else{
                result.push_back (words[i]);
            }
        }

       return result;
  }

// Time Complexity: O(n * m log m)
// Space Complexity: O(n)