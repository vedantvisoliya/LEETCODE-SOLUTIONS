#include <iostream>
#include <vector>

using namespace std;

int prefixCount(vector<string> words, string pref) {
    int counter = 0;

    for (int i = 0; i < words.size(); i++) {
        // Check if the word is at least as long as the prefix
        if (words[i].size() >= pref.size() && words[i].substr(0, pref.size()) == pref) {
            counter++;
        }
    }
    return counter;
}

int main() {

	vector<string> word = { "pay","attention","practice","attend" };
	int output = prefixCount(word, "at");
    cout << output;
	
	return 0;
}