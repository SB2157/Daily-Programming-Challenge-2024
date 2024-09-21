#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> matching = {{')', '('}, {'}', '{'}, {']', '['}};

    for (char c : s) {
        if (matching.find(c) != matching.end()) {
            // If it's a closing bracket, check if it matches the top of the stack
            if (!st.empty() && st.top() == matching[c]) {
                st.pop();
            } else {
                return false;
            }
        } else {
            // If it's an opening bracket, push it onto the stack
            st.push(c);
        }
    }

    // If the stack is empty, all the brackets matched correctly
    return st.empty();
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isValid(s)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is invalid." << endl;
    }

    return 0;
}
