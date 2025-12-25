#include <iostream>
#include <vector>

using namespace std;

int main(){

    int test;
    cin >> test;

    while (test--){

        int n;
        cin >> n;

        string str;
        cin >> str;

        int len  = 0;
        int maxEmptyInRow = 0;
        int countEmptyCells = 0;
        for (int i = 0; i < n; i++){
            if (str[i] == '.'){
                len++;
                countEmptyCells++;
                maxEmptyInRow = max (maxEmptyInRow,len);
            }
            else {
                len = 0;
            }
        }

        if (maxEmptyInRow >= 3) cout << 2 << endl;
        else cout << countEmptyCells << endl;
    }
}