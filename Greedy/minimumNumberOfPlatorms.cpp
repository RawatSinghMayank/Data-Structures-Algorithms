 int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        int n = arr.size();
        int result = INT_MIN;
        for (int i = 0; i < n; i++){
        
         int count = 0;
         for (int j = 0; j < n; j++){
             if (arr[i] >= arr[j] && arr[i] <= dep[j]) count++;
         }
         
         result = max (result, count);
        }
        
        return result;
    }


int findPlatform(vector<int>& arr, vector<int>& dep) {

        int len1 = arr.size();
         
        vector <pair <int,char> > mergedArr (2 * len1);
        
        for (int i = 0; i < len1; i++){
            mergedArr[i].first = arr[i];
            mergedArr[i].second = 'A';
            mergedArr[i + len1].first = dep[i];
            mergedArr[i + len1].second = 'D';
        }
        
        sort (mergedArr.begin(),mergedArr.end());
        
        int maxContinuousCount = 0, result  = 0;
        for (int i = 0; i < mergedArr.size(); i++){
            if (mergedArr[i].second == 'A') maxContinuousCount++;
            else result = max (result,maxContinuousCount), maxContinuousCount--;
        }
        return result;
    }


int findPlatform(vector<int>& arr, vector<int>& dep) {

 T.C- 2 * (nlogn) + 2 * (n)
        sort (dep.begin(),dep.end());
        sort (arr.begin(),arr.end());
        int len1 = arr.size();
        int result = 0, count = 0;
        int i = 0, j = 0;
        while (i < len1 && j < len1){
            if (arr[i] <= dep[j]){
                i++;
                count++;
            }
            else{
                j++;
                count--;
            }
            result = max (result,count);
        }
        return result;
    }



 int findPlatform(vector<int>& arr, vector<int>& dep) {

      vector <int> timeArray (2360, 0);
      
      for (int i = 0; i < arr.size(); i++){
          
          for (int j = arr[i] ; j <= dep[i]; j++){
            
            timeArray[j]++;   
          }
      }
      
      int result = 0;
      for (int i = 0; i < 2360; i++){
          result = max (result,timeArray[i]);
      }
      return result;
    }