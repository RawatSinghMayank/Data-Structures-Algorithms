#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>

using namespace std;

int main(){


    multimap <int,int> topg;
    topg.insert({1,2});
    topg.insert({1,3});
    topg.insert({2,4});

    //multiplve values can have same keys

    for (auto &it : topg){
        cout << it.first << " " << it.second;
    }
    //IMPORTANT: */ unordered_map <pair <int,int>, int> m;
    //primitive data types he rkh skte hai bs unordered map mai
    //will work in map
    //valid keys datatype
    //complex data type not valid in unordered_map
    
    //reason: inbuilt implementation is by hashtable
    // unordered_map<pair<int,int>, int> doesn’t work by default because unordered_map needs a hash function,
    // and std::pair doesn’t have a built-in hash in C++
//     std::unordered_map is an unordered associative container implemented as a hash table.

// It needs:

// A hash function to map the key to a bucket.


// 
// std::map is an ordered associative container.

// Internally, it stores elements in a balanced binary search tree (like a Red-Black tree).

// It orders keys using the < operator (by default std::less<Key>).

// std::pair already has a built-in operator< (lexicographical comparison), so it just works:

// std::pair<int,int> a{1, 2};
// std::pair<int,int> b{1, 3};
// bool result = a < b; // true, since second element 2 < 3
    return 0;
}