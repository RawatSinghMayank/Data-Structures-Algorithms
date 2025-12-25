#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> arr = {1,2,3,4,5};
    for (int value : arr){

        value++;
    }

    for (int value : arr){ // value mai jo values aa rhi hai wo copy of vector aari hai
        cout << value << " " ;
    }
    cout << "\n";

    for (int &value : arr){ // actual values in value
        value++;
    }
    for (int value : arr){
        cout << value << " ";
    }

    // values changes becuase of reference
    cout << "\n";
    return 0;
}