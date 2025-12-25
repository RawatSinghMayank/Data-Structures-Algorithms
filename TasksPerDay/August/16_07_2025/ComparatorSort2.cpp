#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct comp {

    bool operator() (int a, int b)const{
        return a > b;
    }

};

bool comparator (int a, int b){
    return a > b;
}

int main (){

    vector <int> nums = {6,3,6,64,43,634,3};
    // priority_queue <int,vector <int>,greater<int>> q;
    // Both are same
    priority_queue <int,vector <int>,comp> q;
    //Ascending order
    q.push(1);
    q.push(2);
    q.push(3);

    sort (nums.begin(),nums.end(),comparator);
    // sort (nums.begin(),nums.end(),greater <int>());
    //Both are equal and this is slightly different then priority_queue . Here greater <int>(), or a > b in comparator .it swaps when it's return false.So when a > b is true means 6 ,5, 4,3 always return true . so it won't swap the array
    //Hence result will be in descending order Unlike other where if it return true then it perform swap operation 
    // Descending order
    
    for (auto &it : nums){
        cout << it << " ";
    }

    // priority_queue <int,vector <int>, greater <int>> temp = q;
     priority_queue <int,vector <int>,comp> temp = q;
     //Both are same

    cout << "Queue" << "\n";    
    while (!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
}

// A functor (also called a function object) is simply a class or struct that overloads the operator() so that objects of that class can be called like a function.

//In short: Object that behaves like a function.

//Example: Simple Functor
// #include <iostream>
// using namespace std;

// struct Square {
//     int operator()(int x) const {   // overload ()
//         return x * x;
//     }
// };

// int main() {
//     Square sq;          // create an object
//     cout << sq(5);      // call it like a function: sq(5)
// }
