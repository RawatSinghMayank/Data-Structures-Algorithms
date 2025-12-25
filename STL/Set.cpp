#include <iostream>
#include <set>
#include <string>

/* unordered_map<int, vector<int>> mp; CORRECT This works because int has a default hash function defined in the C++ Standard Library. unordered_map relies on hashing the key, and int is a primitive type, so the STL knows how to hash it.
unordered_map<vector<int>, int> mp; WRONG This does NOT work by default because vector<int> does not have a built-in hash function in the STL.

*/

// Ordered set is implement by red black tree and unordered_set 
// is implement by hash table 
// We cannot use complex things inside unordered_set like
// unordered_set <pair <int,int>> etc only we can use primitive data types like integer,float ,double,string,etc

// Reason: not defined in stl libraries but can made your own implementation
// all operations of unorederd_set done in O(1) but worst can be O(n) due to collosion.

// multlset    : again log(n) and red black tree implementation
using namespace std;
void print (set <string>& s){

    for (auto &it : s){
        cout << it << " ";
    }cout <<endl;
    for (set <string> ::iterator it = s.begin(); it != s.end(); it++){
        cout <<(*it) << " ";
    }cout << endl;

    for (auto it = s.begin() ; it != s.end(); it++){    
        cout << (*it) << " " ;
    }

}
int main (){

    set <string> s;

    s.insert("Mayank"); // log(n)
    s.insert("Singh");
    s.insert("Rawat");

    print(s);

    auto it = s.find("Singh"); // log(n) // it = iterator s.find return iterator.If element is not present it will return s.end() iterator 
    cout << *it << endl;

    it = s.find("abcd");
    if (it != s.end()){
        cout << *it << endl;   
    }

    it = s.find("Mayank");
    if (it != s.end()){
        s.erase(it);
    }

    s.erase("Singh");
    cout << "Elements of set " << endl;
    print(s);

    return 0;
}