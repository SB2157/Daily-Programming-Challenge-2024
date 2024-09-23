#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> charSet;
    int left = 0, maxLength = 0;

    for (int right = 0; right < s.length(); ++right) {
        // If character at 'right' is already in the set, shrink the window by moving 'left'
        while (charSet.find(s[right]) != charSet.end()) {
            charSet.erase(s[left]);
            left++;
        }
        // Insert the current character and update the maximum length
        charSet.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s;
    cin >> s; // Input string

    cout << lengthOfLongestSubstring(s) << endl; // Output result

    return 0;
}
