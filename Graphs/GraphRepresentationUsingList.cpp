#include <bits/stdc++.h>
using namespace std;


// That's an excellent question! It highlights a common point of confusion for C++ programmers, especially when dealing with graph representations.

// The two lines of code you provided represent two different ways to declare an array of vectors in C++. While they can both be used to represent an adjacency list, their underlying structure and memory allocation are fundamentally different.

// Let's break down the differences:

// 1. vector <int> adjM[v + 1];
// Type: This is a static C-style array where each element is a vector<int>.

// Memory Allocation: The size of the array v + 1 is determined at compile time. The compiler needs to know exactly how much memory to allocate for the array on the stack.

// Initialization: The vectors themselves are default-initialized. This means adjM[0], adjM[1], etc., are each an empty vector<int>. You can then use adjM[u].push_back(v) to add elements to a specific vector.

// Limitations:

// The size v + 1 must be a compile-time constant. You cannot use a variable v whose value is only known at runtime (e.g., from cin). This will result in a compiler error in standard C++.

// This is a common "trick" or non-standard feature in some compilers (like GCC) as a "variable-length array" (VLA) but is generally not considered good practice and can lead to stack overflow if v is large.

// You are stuck with the size v + 1 once the program is compiled. You can't resize this array.

// 2. vector <vector <int>> adjM2(v + 1);
// Type: This is a single std::vector whose elements are themselves std::vector<int>. This is a C++ standard library container.

// Memory Allocation: The size v + 1 is determined at runtime. When the line of code is executed, the std::vector constructor is called, and it dynamically allocates memory on the heap to hold v + 1 empty vector<int> objects.

// Initialization: All v + 1 inner vectors are default-initialized to be empty. You can then use adjM2[u].push_back(v) to add elements.

// Advantages:

// The size v + 1 can be a variable whose value is read from input, making it flexible and scalable. This is the correct and standard way to handle dynamically sized arrays of vectors.

// Memory is allocated on the heap, which has much more space than the stack, avoiding potential stack overflows for large graphs.

// You can resize the outer vector later using adjM2.resize(), although this is not common for graph representation.

// Summary Table
// Feature

// vector<int> adjM[v + 1];

// vector<vector<int>> adjM2(v + 1);

// Declaration Type

// Static C-style Array

// Dynamic std::vector

// Size Determination

// Compile-time

// Runtime (from variable v)

// Memory Location

// Stack

// Heap

// Flexibility

// Fixed size, no resizing

// Resizable and dynamic

// Standard C++

// Non-standard VLA (compiler-specific extension)

// Standard and recommended

// Use Case

// Small, fixed-size graphs

Any graph, especially with unknown size at compile-time
int main (){

    int v,e;

    cin >> v >> e;

   vector <int> adjM[v + 1];
   vector <vector <int>> adjM2(v + 1);

 
    for (int i = 0; i< e; i++){
        
        int u,v;
        cin >> u >> v;

        adjM[u].push_back(v);
        adjM[v].push_back(u);

        adjM2[u].push_back(v);
        adjM2[v].push_back(u);
    }

    for (int i = 0; i <6; i++){
        for (int j = 0; j < adjM[i].size(); j++){
            cout << adjM[i][j] << " ";
            

        }
        cout << endl;
    }


    cout << "Check" << endl;
    for (int i = 0; i <6; i++){
        for (int j = 0; j < adjM[i].size(); j++){
            cout << adjM2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}