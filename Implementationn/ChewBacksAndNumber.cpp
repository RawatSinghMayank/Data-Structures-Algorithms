#include <iostream>

using namespace std;

/* 
Integer to String : int num = 457;  string str = to_string(num);

String to Integer: int num = stoi(num);

Integer to char = int num = 7 , char ch = num + '0';

Char to Integer : char ch = '5' ,int num = ch - '0';


*/

int main(){

    string num;
    cin >> num;

    int len = num.length();

    for (int i = 0; i < len; i++){
        int  number  = num[i] - '0';
        int invertedNum = number;
        if (number > 4){
            invertedNum = 9 -  number;
        }

        if (i == 0 && invertedNum == 0) continue;
        else num[i] = invertedNum + '0';
    }

    cout << num;
    
    return 0;
}