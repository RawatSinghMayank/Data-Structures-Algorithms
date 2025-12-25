#include <iostream>

#include <set>

using namespace std;

int main(){


    multiset <int> st;

    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(1);
    st.insert(4);
    st.insert(1);
    st.insert(3);

    for (auto &it : st){
        cout << it << " ";
    }
//multiset operations are also O(log(N)) becuase implemented by red black tree
    auto it = st.find(1);

    if(it != st.end()){
        st.erase(it);
    }

    //if I do st.erase(1) then all occurences of 1 will be deleted
    cout << "\n";
        for (auto &it : st){
        cout << it << " ";
    }
    return 0;
}


