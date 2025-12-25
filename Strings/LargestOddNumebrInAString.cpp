class Solution {
public:
    string largestOddNumber(string num) {

        int n = num.length();

        if ((num[n-1] +  '0') % 2 != 0) return num;
        string result = "";
        
        for (int i = 0; i < n; i++){
            string temp = "";
            temp += num[i];
            char lastDigit = temp[temp.length() - 1];

            if ((lastDigit + '0') % 2 != 0){
                if (temp.length() > result.length() && temp > result){
                    result = temp;
                }
            }
            
            for (int j = i + 1; j < n; j++){
                temp += num[j];
                lastDigit = temp[temp.length() - 1];
                if ((lastDigit + '0') % 2 != 0){
                    if (temp.length() > result.length() && temp > result){
                        result = temp;
                    }
                }
            }
            if (result.length() == n -i) return result;
        
        }

        return result;
    }
};


 string largestOddNumber(string num) {
        
        int n = num.length();

        int index = -1;

        for (int i = n - 1; i >= 0; i--){
            int digit = num[i] + '0';
            if (digit % 2 != 0) {
                index = i;
                break;
            }
        }

        if (index == -1) return "";
        else return num.substr(0,index+1);
    }