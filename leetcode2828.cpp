#include <iostream>
#include <vector>
using namespace std;

bool isAcronym(vector<string>& words, string s) {
    if(words.size() != s.length()){return false;}
    int j = 0;
    for(int i = 0; i < words.size(); i++){
        if(words[i].at(0) != s.at(j)){return false;}
        j++;
    }
    return true;
}

int main(){
   vector<string> words = {"hello", "kumar", "bro"};
   string firstLetters = "hkc";

   cout << isAcronym(words, firstLetters);
    return 0;
}