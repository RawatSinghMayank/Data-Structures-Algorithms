https://cses.fi/alon/task/1081

wrong approach //

#include <bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin >> n;

   vector <int> nums (n);

   for (int i = 0; i < n; i++) cin >> nums[i];


   map <int,int> factors;
   int result = 1;

   map <int,int> freq;
   for (auto&it : nums){
      freq[it]++;
   }

   for (auto& it : freq){
      if (it.second > 1){
         result = max(result,it.first);
      }
   } //6
//2 3 5 7 13 13

   for (int i = 0; i < n; ++i){
      int num = nums[i];

      for (int i = 2; i* i <= num; i++){
         if (num %i  == 0){
            if (factors.find(i) != factors.end()) result = max(result,i);
            factors[i]++;

         while(num %i == 0){
            num =  num /i;
         }
         }
      }
      if (num > 1) {if (factors.find(num) != factors.end()) result = max(result,num);
      factors[num]++;}
   }

   cout << result << "\n";
   return 0;
}

//But this code still fails for test case like this : 21,42  here answer should be 21 as 21 * 2 = 42 . But by
// doign factor wise it will give  wrong answer

