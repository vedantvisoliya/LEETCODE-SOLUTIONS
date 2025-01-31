#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    unordered_map<char, int> letters;
    unordered_map<char, int> letters2;
    unordered_map<char, int>::iterator it;

    if(s.length() != t.length()){
        return false;
    }
    for(int i = 0; i < s.length(); i++){
        if(letters.find(s.at(i)) != letters.end()){
            letters[s.at(i)] += 1;
        }
        else{
            letters.insert({s.at(i), 1});
        }
    }

    for(int j = 0; j < t.length(); j++){
        if(letters2.find(t.at(j)) != letters2.end()){
            letters2[t.at(j)] += 1;
        }
        else{
            letters2.insert({t.at(j), 1});
        }
    }

    for(it = letters.begin(); it != letters.end(); it++){
        if(letters2.find(it->first) != letters2.end()){
            if(letters2[it->first] == (it->second)){}
            else{
                return false;
            }
            cout << it->first << "      " << it->second << "    " << letters2[it->first] << endl;

        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    
    string first = "anagram";
    string second = "nagaram";

    cout << isAnagram(first, second);

    return 0;
}