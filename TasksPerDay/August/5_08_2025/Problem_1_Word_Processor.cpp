// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     freopen ("word.in","r",stdin);
//     freopen ("word.out","w",stdout);
//     int n, k;
//     cin >> n >> k;

//     vector <string> words;

//     string str,temp;
//     cin.ignore();
//     getline(cin,str);
  
//     stringstream tempString (str);
    
//     while (tempString >> temp){
//         words.push_back(temp);
//     }   

//     int length = 0;
//     temp = "";
//     for (int i = 0; i < n - 1; i++){
       
//         temp += words[i] + " ";
//         length += words[i].length();

//         if (length + words[i + 1].length() <= k) continue;
//         else {
//             temp.pop_back();
//             cout << temp << "\n";
//             temp = "";
//             length = 0;
//         }
            
//     }
    
//     cout << temp + words[n-1]<< "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen ("word.in","r",stdin);
    freopen ("word.out","w",stdout);
    int words, maxLength;

    cin >> words >> maxLength;
    cin.ignore();
    int currLength = 0;
    for (int i = 0; i < words; i++){

        string temp;
        cin >> temp;
        currLength += temp.length();

        if (currLength <= maxLength){

            if (i != 0) cout << " ";
            cout << temp;
        } else {
            cout << "\n";
            currLength = temp.length();
            cout << temp ;
        } 

        
    }
    return 0;
}