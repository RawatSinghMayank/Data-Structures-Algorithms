#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> arr[10];

    // kind of 2d vector.Where row is fixed = 10;
    // arr[0] is a vector , arr[1] is a vector
    // array of vector
    for (int i = 0; i < 10; i++){

        int size;
        cin >> size;

        for (int j = 0; j < size; j++){
            int x;
            cin >> x;

            arr[i].push_back(x);
        }
    }

    for (int i = 0; i < 10; i++){

        for (int j = 0; j < arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}