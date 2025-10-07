#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0, j = 0; // i -> s, j -> t
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            i++; // move in s
        }
        j++; // always move in t
    }
    return i == s.size(); // if all chars in s are found in t
}

int main() {
    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    if (isSubsequence(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
