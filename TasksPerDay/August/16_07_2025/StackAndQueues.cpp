class Solution {
public:





    code is below.First solve yourself;























    bool isValid(string s) {

        stack <char> st;
        unordered_map <char,int> value = {{'(',1},{'{',2},{'[',3},{')',-1},{'}',-2},{']',-3}};

        for (auto &it : s){

            if (it == '(' || it == '[' || it == '{') {
                st.push(it);
            } else {
                
                if (st.empty()) return false;
                char ch = st.top();
                st.pop();
                if(value[ch] + value[it] != 0) return false;
            }
        }

        if (st.empty()) return true;
        return false;
    }
};