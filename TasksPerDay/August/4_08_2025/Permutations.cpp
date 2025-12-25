#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    if (n == 2 || n == 3){
        cout << "NO SOLUTION" << "\n";
    } else if (n == 4){

        cout << 2 << " " << 4 << " " << 1 << " " << 3;
        
    } else {

        int start = 1;
         for (int i = start; i <= n; i += 2){
                cout << i  << " ";
            }

            start++;
            
            for (int i = start; i <= n; i += 2){
                cout << i  << " ";
            }
        
    }

    return 0;
}