#include <bits/stdc++.h>
using namespace std;

void print (vector <long long> &nums){


    for (long long ele : nums){
        cout << ele << " ";
    }
    cout << endl;

}

bool shoudISwap (long long first, long long second){

    if (first > second){
        return true;
    }
    return false;
}

bool shouldISwap2 (pair <long long,long long> &first, pair <long long,long long> &second){

    // sort in ascending order : if first of both is
   // same then sort second in descending order
    if (first.first != second.first){
        if (first.first > second.first){
            return true;
        }else{
            return false;
        }
    }else{
        if (first.second < second.second){
            return true;
        }else{
            return false;
        }
    }

}

void print2 (vector <pair <long long,long long>>& nums){
    
    for (pair <long long,long long> ele : nums){
        cout << ele.first << " " << ele.second << "\n";
    }
    
}

bool comparator (pair <long long, long long> &first, pair <long long, long long> &second){
    // comparator works in reverse fashion in inbulit sorting function so trick to learn is -> in which order you want to sort return true in that order. see example

    if (first.first != second.first){

        if (first.first < second.first){
            return true;
        }else{
            return false;
        }
    }else{

        if (first.second > second.second){
            return true;
        }else{
            return false;
        }
    }
}

int main(){


    long long len;
    cin >> len;


    vector <long long> nums (len);

    for (long long i = 0; i < len; i++){
        cin >> nums[i];
    }

    for (long long i = 0; i < len; i++){

        for (long long j = i + 1; j < len; j++){
            // if (nums[i] > nums[j]){
            //     swap (nums[i],nums[j]);
            // }

            if (shoudISwap (nums[i],nums[j])){
                swap (nums[i],nums[j]);
            }
            // this if logic i can pass in function should i swap
        }
    }

    vector <pair <long long,long long >> nums2 = {{1,2},{1,3},{6,3}};

    // for (long long i = 0; i < 3; i++){

    //     for (long long j = i + 1; j < 3; j++){
    //         // if (nums[i] > nums[j]){
    //         //     swap (nums[i],nums[j]);
    //         // }

    //         if (shouldISwap2 (nums2[i],nums2[j])){
    //             swap (nums2[i],nums2[j]);
    //         }
    //         // this if logic i can pass in function should i swap
    //     }
    // }

    sort (nums2.begin(),nums2.end(),comparator);
    print2 (nums2);

    return 0;
}