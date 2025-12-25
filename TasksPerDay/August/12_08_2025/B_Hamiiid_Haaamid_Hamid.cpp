#include <bits/stdc++.h>
using namespace std;

inline int minDaysHamidNeedToEscape (string &grid, int n, int startPos){

    if (startPos == 1 || startPos == n) return 1;
    int left = startPos - 1, right = startPos ;

    while (left >= 0 && grid[left] == '.'){
        left--;
    }

    while (right < n && grid[right] == '.'){
        right++;
    }

    if (left < 0 && right == n) return 1;

    
    if (left + 2 < n - right + 1)
        return min (startPos,n - right + 1);
    
    else 
        return min (left + 2,n - startPos + 1);
    
}

int main(){

    int test;
    cin >> test;

    while (test--){

        int sizeOfGrid;
        cin >> sizeOfGrid;

        int startPos;
        cin >> startPos;

        string grid;
        cin >> grid;

        cout << minDaysHamidNeedToEscape (grid,sizeOfGrid,startPos) << "\n";

    }

    return 0;
}