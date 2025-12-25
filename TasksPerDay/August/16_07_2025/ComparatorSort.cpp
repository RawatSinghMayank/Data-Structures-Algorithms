#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print (vector <int>& nums){

    for (auto &it : nums){
        cout << it << " ";
    }
    cout << "\n";
}


bool shouldISwap (int a, int b){

    return a > b;

}

bool shouldISwap (pair <int,int> &first, pair <int,int> &second){

    if (first > second) return true;
    else if (first.first == second.first){
        if (first.second < second.second) return true;
        else return false;
    }
    return false;
}
/*output:
5 563
5 5
7 3
35 634

*/



int main(){


    vector <int> arr = {1,6,2,4,3,6,64,3,6,3};

    int n = arr.size();
    for (int i = 0; i < n; i++){

        for (int j = i + 1; j < n; j++){
            // if (arr[i] < arr[j]) swap (arr[i],arr[j]);
            // If i do arr[i] > arr[j] then this will sort the array in ascending order
            // So the sorting nature depends only on this condition . Now I put this if condition in 
            // above function. That's how comparator function works underneath.
            if (shouldISwap (arr[i],arr[j]))
                swap (arr[j] ,arr[i]);
        }
    }

    print (arr);

    vector <pair <int,int>> pp = {{5,5},{5,563},{7,3},{35,634}};
     for (int i = 0; i < pp.size(); i++){

        for (int j = i + 1; j < pp.size(); j++){
            if (shouldISwap (pp[i],pp[j]))
                swap (pp[i],pp[j]);
        }
    }

    for (auto & it : pp){
        cout << it.first << " " << it.second <<"\n";
    }
    return 0;
}