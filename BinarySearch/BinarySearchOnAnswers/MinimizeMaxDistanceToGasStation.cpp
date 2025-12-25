#include <bits/stdc++.h>
double minimiseMaxDistance(vector<int> &stations, int k){
	
        int n = stations.size();
        
        vector <int> howManyPartitions (n - 1, 0);
        
        for (int gasStations = 1;  gasStations <= k; gasStations++){
            
            double maxSection = -1;
            int maxIndex = -1;
            for (int i = 0; i < n - 1; i++){
                int diff = stations[i+1] - stations[i];
                double partitionLength = diff / (double)(howManyPartitions[i] + 1);
                
                if (partitionLength > maxSection){
                    maxSection = partitionLength;
                    maxIndex = i;
                }
            }
            
            howManyPartitions[maxIndex]++;
        }
        
        double result = INT_MIN;
        
        for (int i = 0; i < n-1; i++){
            int diff = stations[i+1]-stations[i];
            
            result = max (result, diff/(double)(howManyPartitions[i]+ 1));
        }
        return result;
	

}
