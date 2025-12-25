#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;  // Read input number as a string
    
    for (int i = 0; i < x.size(); i++) {
        int digit = x[i] - '0';  // Convert character to integer
        int inverted = 9 - digit;  // Compute 9 - digit
        
        // Replace if the inverted digit is smaller and it's not leading to zero
        if (inverted < digit) {
            // Ensure first digit is not 0
            if (i == 0 && inverted == 0) {
                continue; // Keep original digit
            }
            x[i] = inverted + '0';  // Convert back to character
        }
    }
    
    cout << x << endl;  // Print the transformed number
    return 0;
}
