#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;

    while(t--){

        int q;
        cin >> q;

        deque <int> frontQ, reverseQ;
        long long frontSum = 0, reverseSum = 0, frontRizziness = 0, reverseRizziness = 0;

        while(q--){

            int s;
            cin >> s;

            if (s == 1){

                int size = frontQ.size();
                int lastElement = frontQ.back();
                frontQ.pop_back();

                frontSum -= lastElement;
                frontRizziness -= lastElement * size;;
                frontRizziness += lastElement + frontSum;
                frontSum += lastElement;

                int frontElement = reverseQ.front();
                reverseQ.pop_front();

                reverseSum -= frontElement;
                reverseRizziness -= frontElement;
                reverseRizziness += (-reverseSum) + frontElement * size;
                reverseSum += frontElement;

            }
            else if (s == 2){

                swap (frontQ,reverseQ);
                swap (frontRizziness, reverseRizziness);
               
            }

            else {

                int num;
                cin >> num;

                frontQ.push_back(num);
                reverseQ.push_front(num);
            
                int size = frontQ.size();

                frontSum += num;
                frontRizziness += (size) * num;

              
                reverseRizziness += reverseSum + num;
                reverseSum += num;

            }
            cout << frontRizziness << "\n";
        }
    }
    return 0;
}