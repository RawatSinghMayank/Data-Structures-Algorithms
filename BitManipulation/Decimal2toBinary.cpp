#include <bits/stdc++.h>
using namespace std;

string convert2Binary (int n){

    string result;

    while (n != 0){
        if (n % 2 == 1){
            result.push_back ('1');
        }else{
            result.push_back ('0');
        }
        n /= 2;
    }

    reverse(result.begin(),result.end());
    return result;
}
//T.C - O(log(n)) and S.C - O(log(n)) becuase numbers of bits added to resutl is same as numbers of steps taken to reduce n to zero which is log(n)
  int binaryToDecimal(string &b) {
     
      int ans = 0;
      int len = b.size(),power = 1;
      
      for (int i = len - 1; i >= 0 ; i--){
          
        if (b[i] == '1'){
            ans += power;
        }
        power *= 2;
      }
      return ans;
}
//t.c - O(len of string) s.c-o(1)
int rightShift (int n, int k){
    return (n >> k);
}
// left and right shift takes O(1) time becuase cpu does entire shifting in one step
int leftShift (int n, int k){
   return (n << k);

}

void  swapTwoNum (int &num1, int &num2){

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    // 1.num1 = num1 ^ num2;
    // 2.num2 = (num1 ^ num2) ^ num2;  (num2 ^ num2) cancelled -> num2 = num1;

    // Put value of updated num2 in 3rd step
    // 3.num1 = (num1 ^ num2) ^ (num1)   -> num1 , num1 cancelled -> num1 = num2


}
int main(){

    int num;
    cin >> num;

    cout << convert2Binary (num) << "\n";

    int k;
    cin >> k;
    cout << "Enter no of positions " <<"\n";
    cout <<"Right shift : " << rightShift (num,k) << "\n";
    cout << "Left shift : " << leftShift (num ,k) << "\n";


    cout << "Enter first and second num for swapping : " <<"\n";
    int first, second;
    cin >> first >> second;
    swapTwoNum(first, second);
    cout << first << "  " << second << "\n";
    return 0;
}