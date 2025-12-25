  string mergeAlternately(string word1, string word2) {
        
        string result;

        int n1 = word1.length();
        int n2 = word2.length();

        for (int i = 0; i < n1 || i < n2; i++){
            if (i < n1) result += word1[i];
            if (i < n2) result += word2[i];
        }
        return result;
    }

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string result;

        int n1 = word1.length();
        int n2 = word2.length();

        int i = 0, j = 0;

        while (i < n1 && j < n2){
            result += word1[i];
            result += word2[j];
            i++;              BIGGEST MISTAKE :I WAS ADDING THEM LIKE THIS: result += word1[i] + word2[j] 
                              syntax error
            j++;
        }
        while (i < n1){
            result += word1[i];
            i++;
        }

        while (j < n2){
            result += word2[j];
            j++;
        }
        return result;
    }
};