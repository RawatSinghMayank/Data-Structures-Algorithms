https://www.geeksforgeeks.org/problems/frogs-and-jumps--170647/0

  int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector <int> notVisited (leaves +1,0);
        
        for (int i = 0; i < N; i++){
            int ele = frogs[i];
            
            if (notVisited[ele] != 1){
            for (int j = ele; j  < notVisited.size(); j += ele){
                notVisited [j] = 1;
            }}
        }
        
        int count = 0;
        for (int i = 1; i < notVisited.size(); i++){
            if (notVisited[i] == 0){
                count++;
            }
        }
        return count;
    }