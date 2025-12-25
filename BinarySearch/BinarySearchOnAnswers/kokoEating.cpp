class Solution {
public:

    long long numberOfHours(vector<int> &piles, double  speed) {
    long long hours = 0;
    for (auto it : piles) {
        hours += ceil(it /speed);
    }
    return hours;
}

WITHOUT USING CEIL
/*  long long numberOfHours(vector<int> &piles, int  speed) {
    long long hours = 0;
    for (auto it : piles) {
        hours += it / speed;
        if (it % speed != 0) hours++;
    }
    return hours;
}*/

int minEatingSpeed(vector<int> &piles, int h) {
    int result = INT_MAX;
    int low = 1, high = *max_element(piles.begin(), piles.end());

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long hours = numberOfHours(piles, mid);

        if (hours <= h) {
            result = min(result, mid);
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result; // Return the minimum valid speed
}

};


