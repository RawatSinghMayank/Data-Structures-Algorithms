https://codeforces.com/problemset/problem/451/B


//Wrong approach
#include <bits/stdc++.h>
using namespace std;

bool canSort (vector <int>&nums, int n,int &l , int &r){

   if (n <= 1) return true;

   bool exhaustedOneLimit = false;

   for (int i = 0; i < n - 1; i++){

      int j = i;

      if (nums[j] > nums[j+1]){
         if(exhaustedOneLimit) return false;
         exhaustedOneLimit = true;
         l = j;
      while (j < n -1 && nums[j] >= nums[j+1]){
         j++;
      }
      r = j;
         if (j + 1 < n && nums[j+1] < nums[i]) return false;
        i = j;
      }
   }

   return true;
}

int main(){

  int n;
  cin >> n;
  int l =0,r = 0;
  
  vector <int> nums(n);

  for (int i = 0; i < n; i++) cin >> nums[i];

 if (canSort(nums,n,l,r)) cout << "yes"<<"\n" << l + 1 <<" " << r + 1 ;
 else cout << "no" << "\n";
   return 0;
}