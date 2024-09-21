#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void backtrack(string &s, vector<string> &result, int start) {
    if (start == s.size()) {
        result.push_back(s);
        return;
    }

    set<char> used;  // To avoid generating duplicates
    for (int i = start; i < s.size(); i++) {
        if (used.find(s[i]) == used.end()) {
            used.insert(s[i]);
            swap(s[start], s[i]);
            backtrack(s, result, start + 1);
            swap(s[start], s[i]);  // backtrack (undo the swap)
        }
    }
}

vector<string> permute(string s) {
    vector<string> result;
    sort(s.begin(), s.end());  // Sort to ensure unique permutations are generated
    backtrack(s, result, 0);
    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    vector<string> permutations = permute(s);

    cout << "Unique permutations of the string are: " << endl;
    for (const string &perm : permutations) {
        cout << perm << endl;
    }

    return 0;
}
