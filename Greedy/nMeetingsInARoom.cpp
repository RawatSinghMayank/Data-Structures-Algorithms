#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Meeting {
public:
    int start;
    int finish;
    
    Meeting(int start, int finish) {
        this->start = start;
        this->finish = finish;
    }
};

// Comparator function for sorting meetings based on finish time
bool compareMeetings(const Meeting& m1, const Meeting& m2) {
    return m1.finish < m2.finish;
}

int maxMeetings(vector<int>& start, vector<int>& end) {
    int len = start.size();
    if (len == 0) return 0; // Handle empty input case

    vector<Meeting> endAndStartTime;

    // Create Meeting objects and push them into the vector
    for (int i = 0; i < len; i++) {
        endAndStartTime.push_back(Meeting(start[i], end[i]));
    }

    // Sort meetings by their finishing times
    sort(endAndStartTime.begin(), endAndStartTime.end(), compareMeetings);

    int count = 1;  // We can always pick the first meeting
    int freeTime = endAndStartTime[0].finish;

    // Iterate over the meetings and count the maximum non-overlapping meetings
    for (int i = 1; i < len; i++) {
        if (freeTime < endAndStartTime[i].start) {
            count++;
            freeTime = endAndStartTime[i].finish;
        }
    }
    return count;
}

// Driver code for testing
int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    cout << "Maximum number of meetings: " << maxMeetings(start, end) << endl;
    return 0;
}
