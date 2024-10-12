#include<iostream>
#include<string>
#include <regex>
using namespace std;

int lengthOfLastWord(string s) {
    int size = s.length();
    int length = 0;
    for(int i = size-1; size >= 0; i--){
        if (s.at(i) != ' '){
            length++;
            if((i-1) < 0){
                return (length-i);
            }
            if(s.at(i-1) == ' '){
                return length;
            }
        }
    }
}

int main(){
    cout << lengthOfLastWord("day");
    return 0;    
}