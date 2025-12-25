#include <iostream>
#include <set>
#include <string>
using namespace std;
// t.c - O(log(n))
void print(multiset <int>& nums){
    for (auto it : nums){   
        cout << it << " ";
    }
    cout << endl;
}
int main(){

    multiset <int> nums;

    nums.insert(100);
    nums.insert(200);
    nums.insert(150);
    nums.insert(10);
    nums.insert(10);
    nums.insert(150);

    print(nums);

    multiset <int> ::iterator it = nums.find(10);    
    if (it != nums.end())
        nums.erase(it); // remove only first occurence becaue iterator point to first element

    print(nums);

     nums.erase(10); // remove all occurences

     if (nums.find(10) != nums.end()) nums.erase(10); // all occurences
    print(nums);
    return 0;
}