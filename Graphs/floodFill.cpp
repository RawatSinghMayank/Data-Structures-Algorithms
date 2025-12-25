class Solution {
public:
void bfs (vector <vector <int>> &result,vector <vector <int>> &image, vector <vector <int>>& visited,int sr, int sc, int newColor){
        
        int m = result.size(), n = result[0].size();
        
        visited[sr][sc] = 1;
        result [sr][sc] = newColor;
        queue <pair <int,int>> q;
        q.push({sr,sc});
        
        int delRow [] = {-1 , 1, 0 ,0};
        int delCol[] = {0,0,-1,1};
        
        while (!q.empty()){
            
            sr = q.front().first;
            sc = q.front().second;
            q.pop();
            
                    for (int i = 0; i < 4; i++){
                        int col = sc + delCol[i] , row = sr + delRow[i];
                        if (col >= 0 && col < n && row >= 0 && row < m 
                        && image[row][col] == image[sr][sc] && !visited[row][col]){
                            visited[row][col] = 1;
                            result[row][col] = newColor; 
                            q.push({row,col});
                        }
                    }
                }
            }
            
 
 
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int  m = image.size(), n = image[0].size();
        
        vector <vector <int>> visited (m,vector <int> (n,0));
        vector <vector <int>> flood (image.begin(),image.end());
        
        bfs (flood,image,visited,sr,sc,newColor);
        
        return flood;
    }
};