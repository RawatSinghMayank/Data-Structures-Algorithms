#include <bits/stdc++.h>
using namespace std;

int main(){

    
    freopen ("buckets.in","r",stdin);
    freopen ("buckets.out","w",stdout);
    int barnRow, barnCol;
    int rockRow, rockCol;
    int riverRow,riverCol;

    for (int i = 0; i < 10; i++){

        string row;
        cin >> row;

        for (int j = 0; j < 10; j++){
            if (row[j] == 'B'){
                barnRow = i;
                barnCol = j;
            }

            else if (row[j] == 'L'){
                riverRow = i;
                riverCol = j;
            }

            else if (row[j] == 'R'){
                rockRow = i;
                rockCol = j;
            }
        }
    }

    int bestCasePossible = abs (barnRow - riverRow) + abs (barnCol - riverCol);

    if (barnRow == riverRow && riverRow == rockRow 
        && (barnCol < rockCol && rockCol < riverCol || riverCol < rockCol && rockCol< barnCol))
         cout << bestCasePossible + 1 << "\n";
    else if (barnCol == riverCol && riverCol == rockCol 
        && (barnRow  < rockRow  && rockRow < riverRow || riverRow < rockRow && rockRow  <  barnRow))
         cout <<bestCasePossible + 1<< "\n";
    else cout << bestCasePossible - 1 << "\n";

    return 0;
}