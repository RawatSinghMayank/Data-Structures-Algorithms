#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

// . How std::lower_bound works

// std::lower_bound(first, last, key) is a generic algorithm.

// It works by doing binary search on iterators.

// For containers with random access iterators (like vector, deque, array), it can jump directly to the middle (begin() + n/2) in O(1).

// For containers with bidirectional iterators (like set, map), it cannot jump — it can only move step by step (++ or --).

// To simulate "middle", it calls std::advance() from the beginning each time → O(n) per step.

// So overall complexity = O(n log n) in worst case for set/map.

// ⚙️ 2. How set::lower_bound / map::lower_bound works

// set and map are implemented as balanced binary search trees (Red-Black Tree).

// The container knows its tree structure, so .lower_bound(key) walks the tree in O(log n) time directly.

// Much faster than the generic algorithm.


int main(){

    int arr[] = {1,2,3,4,5,54,6,3,6,7};

    int n = sizeof(arr)/sizeof(arr[0]);
    sort (arr,arr + n);


    //compulsort to sort before using lower and upper bound
    vector <int> nums = {1,2,3,54,54,3,4,5,7};
    sort (nums.begin(),nums.end());
    //In case of array lower_bound and upper_bound return pointer and in case of vector it return iterator

    cout << *lower_bound (arr,arr + n,6) << " " << *lower_bound (nums.begin(),nums.end(),6) << "\n";

    if (lower_bound (arr,arr+ n , 8) == arr + n){
        cout << "Element not found" << "\n";
    } else {
        cout << *lower_bound(arr,arr + n, 8) << "\n";
    }

    set <int> st;
    st.insert(2);
    st.insert(5);
    st.insert(20);
    st.insert(40);
    st.insert(50);

    set <int> :: iterator it = st.lower_bound (6); // can also use auto instaed of this 
    cout << *it << "\n"; 

    map <int,int>  mp ={{2,3},{3,5},{5,2}};

    map <int,int> ::iterator itt = mp.upper_bound (3); // can also use auto instead of this
    if (itt != mp.end()){
        cout << (*itt).first << " " << (*itt).second << "\n";
        cout << itt -> first << " " << itt -> second << "\n";
    }
        return 0;
}


