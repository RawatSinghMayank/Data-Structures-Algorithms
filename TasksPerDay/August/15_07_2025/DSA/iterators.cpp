#include <iostream>
#include <vector>

using namespace std;


int main(){

    // v.begin() points to v[0]
    // v.end() points to next to last (LAST KA BAAD)

    // An iterator is an object like a pointer that points to an element inside the container. We can use iterators to move through the contents of the container. 
    // We can also use iterators to iterate containers that
    // don't have indexes



    vector <int> v = {1,2,3,4,5};

    vector <int> ::iterator it = v.begin();


    for (it; it != v.end(); it++){
        cout << (*it) << "\n";
    }

    vector <pair <int,int>> v_p = {{1,2},{3,4},{5,6}};

    vector <pair <int,int>> ::iterator itt = v_p.begin();

    for (itt; itt != v_p.end(); itt++){
        //cout << (*itt).first << " " << (*itt).second << "\n";
      //Both syntax are correct
        cout <<  itt -> first << " " << itt -> second << "\n";
    }

    // but when c++ 11 comes here comes the new feature
    // of auto keyword and range based loops . So we can write shorted code for iterators
    return 0;
}