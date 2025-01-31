#include <iostream>
#include <unordered_map>
using namespace std;

char findTheDifference(string s, string t){
    if(s == ""){
        return (t.at(0));
        // cout << t.at(0) << endl;
    }

    unordered_map<char, int> sLetters;
    unordered_map<char, int> tLetters;
    unordered_map<char, int>::iterator it;
    for(int i = 0; i < s.length(); i++){
        if(sLetters.find(s.at(i)) != sLetters.end()){
            sLetters[s.at(i)] += 1;
        }
        else{
            sLetters.insert({s.at(i), 1});
        }
    }
    // for(it = sLetters.begin(); it!=sLetters.end(); it++){
    //     cout << it->first << "  " << it->second << endl;
    // }
    // cout << endl;
    for(int j = 0; j < t.length(); j++){
        if(tLetters.find(t.at(j)) != tLetters.end()){
            tLetters[t.at(j)] += 1;
        }
        else{
            tLetters.insert({t.at(j), 1});
        }
    }
    // for(it = tLetters.begin(); it!=tLetters.end(); it++){ 
    //     cout << it->first << "  " << it->second << endl;
    // }
    // cout << endl;
    for(it = tLetters.begin(); it!=tLetters.end(); it++){
        if(sLetters.find(it->first) != sLetters.end()){
            if(sLetters[it->first] == it->second){
                // cout << sLetters[it->second] << "   " << it->second << endl;
            }
            else{
                cout << (it->first) << endl;
                // return it->first;
            }
        }
        else{
            cout << (it->first) << endl;
            // return (it->first);
        }
    }
    // return;
}


int main(){
    string first = "ae" ;
    string second = "aea";
    // cout << findTheDifference(first, second);
    cout << findTheDifference(first, second);
    return 0;
}