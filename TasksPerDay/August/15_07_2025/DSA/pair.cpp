#include <iostream>
#include <utility>

using namespace std;

int main(){

    pair <int, string> p;
    p = make_pair (2, "mayank");

    //p = {2,"mayank"}; this is also valid
    cout << p.first << " " << p.second << "\n";


     pair <int, string> &p1 = p; // this is a reference
    //  pair <int, string> p1 = p; this is a copy
    
     p1.second = "pankaj";

     cout << p.first << " " << p.second << "\n";

     pair <int,string> arr[3]; // array of pair
     arr[0] = {1,"g"};
     cout << arr[0].first << " " << arr[0].second << "\n";
     

     pair <int,int> input;
     cin >> input.first; // defualt value is zero
     cout << input.first  << " " << input.second << "\n";
    return 0;
}