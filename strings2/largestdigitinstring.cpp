#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    string s;
    cout << "Enter string of digits: ";
    cin >> s;

    int first = -1, second = -1; // to store largest and 2nd largest digits

    for (char ch : s) {
        int d = ch - '0'; // convert char to int

        if (d > first) {//first largest will become second largest as d is the first now 
            second = first;
            first = d;
        } else if (d > second && d != first) {
            second = d;
        }
    }

    if (second == -1)
        cout << "No second largest digit found!" << endl;
    else
        cout << "Second largest digit: " << second << endl;

    return 0;
}