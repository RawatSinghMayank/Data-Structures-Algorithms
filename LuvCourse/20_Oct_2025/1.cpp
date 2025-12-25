#include <bits/stdc++.h>
using  namespace std;

// void f(int row,int col,int arr[row][col]){

//     return;
// }//not valid in c++ 1.use vectors or 2.user pointers like below or 3.simply make array global

void f(int row,int col, int**arr){
    arr[0][0] = 32;
}

const int N = 1e4;
int xrr[N][N];

void nx(){

    xrr[0][0] = 34343;
}
int main(){

    int n,m;
    cin >> n >> m;

    int ** arr = new int*[n];
    for (int i = 0;i < n; i++){
        arr[i] = new int[m];
    }

    f(n,m,arr);
    cout << arr[0][0] << endl;

    for (int i = 0;i < n; i++){
        delete[]arr[i];
    }
    nx();
    cout << xrr[0][0] << endl;
    return 0;
}