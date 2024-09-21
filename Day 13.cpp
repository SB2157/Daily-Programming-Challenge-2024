#include <iostream>
#include <string>

using namespace std;

// Helper function to expand around the center and return the length of the palindrome
string expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);  // Return the palindrome substring
}

string longestPalindrome(string s) {
    if (s.empty()) return "";
    
    string longest = "";
    
    for (int i = 0; i < s.length(); i++) {
        // Odd length palindromes (single center)
        string oddPalindrome = expandAroundCenter(s, i, i);
        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }
        
        // Even length palindromes (two centers)
        string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }
    
    return longest;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "The longest palindromic substring is: " << longestPalindrome(s) << endl;
    
    return 0;
}
