#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int countVowelSubstrings(const string &s) {
    int n = s.length();
    long long total = 0;
    long long run = 0;

    for(int i=0;i<n;i++){
        if(isVowel(s[i])){
            run++; // extend vowel sequence
        } else {
            // close previous run
            total += run * (run + 1) / 2;
            run = 0;
        }
    }
    // last run
    total += run * (run + 1) / 2;
    return total;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Number of substrings with only vowels: " << countVowelSubstrings(s) << endl;
    return 0;
}
