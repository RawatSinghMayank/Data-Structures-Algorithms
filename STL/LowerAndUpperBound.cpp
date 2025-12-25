#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort (arr,arr+n);

    // In arrays case it will return pointer and in vectors it will return iterator

    for (int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout  << endl;

    int x;
    cout << "Enter element whose upper and lower bound u want to find " << endl;
    cin >> x;
    int *ptr1 = lower_bound (arr,arr + n,x);
    if (ptr1 == arr +n ) {
        cout << "Nth location pointer means element not found and it will contain garbage value " << endl;
        cout << *ptr1 << endl;
    }
    int *ptr2 = upper_bound (arr,arr+ n , x);
    cout << (*ptr1) << endl << (*ptr2) << endl;

    time coplexity - O(log(n))


    int *lb = lower_bound (arr,arr+n,5);
    int *ub = upper_bound (arr,arr + n,5);

    if (lb == arr + n)cout <<"Not in array" << "\n";
    else cout << *lb << "\n";

    if (ub == arr + n) cout <<"Not in array " <<"\n";
    else cout << *ub << "\n";

    return 0;
}