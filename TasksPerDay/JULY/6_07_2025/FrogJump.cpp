#include <bits/stdc++.h> 

https://www.geeksforgeeks.org/problems/geek-jump/1

https://atcoder.jp/contests/dp/tasks



int minEnergy (vector <int>&heights, vector <int>&dp, int index){

  int oneStepJump = INT_MAX, twoStepJump = INT_MAX;
  if (index == 0){
      return 0;
  }

  if (dp[index] != -1) return dp[index];
  oneStepJump = minEnergy(heights,dp,index - 1) + abs(heights[index] - heights[index-1]);

  if (index > 1)
    twoStepJump = minEnergy(heights,dp,index-2) + abs(heights[index] - heights[index-2]);

  return dp[index] =  min(oneStepJump,twoStepJump);

}

int frogJump(int n, vector<int> &heights)
{

  vector <int> dp (heights.size() + 1, -1);
  return  minEnergy(heights,dp,heights.size() - 1);

}

#include <bits/stdc++.h> 

int minEnergy (vector <int>&heights, vector <int>&dp, int index){

  int oneStepJump = INT_MAX, twoStepJump = INT_MAX;
  if (index == 0){
      return 0;
  }

  if (dp[index] != -1) return dp[index];
  oneStepJump = minEnergy(heights,dp,index - 1) + abs(heights[index] - heights[index-1]);

  if (index > 1)
    twoStepJump = minEnergy(heights,dp,index-2) + abs(heights[index] - heights[index-2]);

  return dp[index] =  min(oneStepJump,twoStepJump);

}

int frogJump(int n, vector<int> &heights)
{

  vector <int> dp (heights.size() + 1, -1);
  return  minEnergy(heights,dp,heights.size() - 1);

}


#include <bits/stdc++.h> 

int frogJump(int n, vector<int> &heights)
{

  vector <int> dp (heights.size() + 1);
  dp[0] = 0;

  for (int i = 1; i < heights.size(); i++){
    
    int oneStep = INT_MAX, twoStep = INT_MAX;

    oneStep = dp[i- 1] + abs(heights[i] - heights[i-1]);
    if (i > 1)
     twoStep = dp[i - 2] + abs(heights[i] - heights[i-2]);

    dp[i] = min (oneStep,twoStep);  
    
    }
  
 return dp[n - 1];
}