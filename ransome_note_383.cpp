#include <iostream>
#include <unordered_map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) { 
    unordered_map<char, int> ransomNoteMap;
    unordered_map<char, int> magazineMap;   

    for(int i = 0; i < ransomNote.length(); i++){
        auto it = ransomNoteMap.find(ransomNote[i]);
        if(it != ransomNoteMap.end()){
            it->second += 1;
        }
        else {
            ransomNoteMap.insert({ransomNote.at(i), 1});
        }
    }

    for (int j = 0; j < magazine.length(); j++){
        auto it = magazineMap.find(magazine[j]);
        if(it != magazineMap.end()){
            it->second += 1;
        }
        else{
            magazineMap.insert({magazine.at(j), 1});
        }
    }

    for (auto it = ransomNoteMap.begin(); it != ransomNoteMap.end(); it++){
        auto it2 = magazineMap.find(it->first);
        if(it2 != magazineMap.end()){
            if(it2->second >= it->second);
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }

    return true;
}

int main(){

    string ransomeNote = "aab";
    string magazine = "abb";
    cout <<  canConstruct(ransomeNote, magazine);
    return 0;
}