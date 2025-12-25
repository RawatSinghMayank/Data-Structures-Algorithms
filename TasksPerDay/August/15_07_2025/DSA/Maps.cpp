#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){

    map <int, string> g;

    g[1] = "abc";
    // Time complexity to insert - O(log(n))
    g.insert({4,"mayank"});

    map <int,string> :: iterator it = g.begin();

    for (it; it != g.end();it++){
        cout << it -> first << " " <<it -> second;
    }

    for (auto &it : g){
        cout << it.first << " " << it.second << "\n";
    } // this loop time complexity is O(n)

    g[6];

    // be defualt empty string is inserted and its' time complexity is O(log(n))
    // keya are unique

    // Access karne ke time compexity is also O(log(n))

    //insert,delete,access,find,update all time complexity is O(log(n)) becuase it is implemented by red black tree which takes O(log(n)) time for these opearations

    //Moving from one iterator to the next is O(log n) amortized to O(1) when doing a full traversal (tree pointer changes without re-searching).
    // so total time - O(n)

// You visit exactly n nodes once.

// std::unordered_map (hash map)

// Implemented using hash tables.

// Elements are not stored in sorted order.

// Traversal (using iterators):

// Visiting all elements still takes O(n) because:


// Accessing the next element is O(1) on average.
// so time complexity = O(n)


    auto x = g.find(7);

    if (x == g.end()){
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
    }

    g.erase(1); //time complexity = O(log(n))

    g.clear();
    cout << g.size() << "\n";
        return 0;
}