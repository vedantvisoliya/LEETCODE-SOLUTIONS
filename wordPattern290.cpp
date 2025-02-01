#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

bool wordPattern(string pattern, string s) {
    unordered_map<char, string> patternToWord;
    unordered_map<string, char> wordToPattern;
    stringstream ss(s);
    string word;
    int j = 0;

    while (ss >> word) {  // Extract words from string
        if (j >= pattern.size()) return false;  // More words than pattern

        char p = pattern[j];

        // If pattern character already mapped, check consistency
        if (patternToWord.count(p) && patternToWord[p] != word)
            return false;
        if (wordToPattern.count(word) && wordToPattern[word] != p)
            return false;

        // Map the pattern to word and vice versa
        patternToWord[p] = word;
        wordToPattern[word] = p;
        j++;
    }

    return j == pattern.size();  // Ensure pattern is fully used
}

// Example usage
int main() {
    string pattern = "abba";
    string s = "dog cat cat dog";
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;
    return 0;
}