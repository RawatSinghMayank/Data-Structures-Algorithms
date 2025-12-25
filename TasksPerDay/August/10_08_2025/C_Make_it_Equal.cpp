#include <iostream>
#include <vector>

using namespace std;

int main(){

    int test;
    cin >> test;

    while (test--){

        int size, constant;

        cin >> size >> constant;

        vector <int> nums1(size), nums2 (size);
        for (int i = 0; i < size; i++){
            cin >> nums1[i];
        }

        for (int i = 0; i < size; i++){
            cin >> nums2[i];
        }

        

    }

    return 0;
}