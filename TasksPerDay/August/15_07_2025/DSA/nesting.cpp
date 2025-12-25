#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main(){

    set <int> s1 = {1,2,3};
    set <int> s2 = {1,2};

    if (s1 < s2){
        cout << "wrong";
    } else {
        cout << "yes";
    }

    map <pair <string,string>, vector <int> > m;

    for (int i = 0; i < 4; i++){
        string firstName, lastName;

        cin >> firstName >> lastName;

        int x;
        cin >> x;

        for (int i = 0; i < x; i++){
            int num;
            cin >> num;
            m[{firstName,lastName}].push_back(num);
        }
    }

    for (auto &it : m){

        cout << it.first.first << " " << it.first.second << "\n";
        for (auto &t : it.second){
            cout << t << " ";
        }
        cout << "\n";
    }

    return 0;
}