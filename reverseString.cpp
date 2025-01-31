#include <iostream>
#include <vector>
using namespace std;


void reverseString(vector<char>& s) {
    
    if(s.size() == 1){
        cout << s[0];
    }    
    else if(s.size()%2 == 0){
        char tempChar;
        for(int i = 0; i < s.size()/2; i++){
            tempChar = s[i] ;
            s[i] = s[s.size()-1-i];
            s[s.size()-1-i] = tempChar;
        }
        for (int j = 0; j < s.size(); j++){
            cout << s[j] << " ";
        }
    }
    else{
        char tempChar;
        for(int k = 0; k < s.size()/2; k++){
            tempChar = s[k];
            s[k] = s[s.size()-1-k];
            s[s.size()-1-k] = tempChar;
        }
        for(int l = 0; l < s.size(); l++){
            cout << s[l] << " ";
        }
    }
}


int main(){
    vector<char> s = {'k', 'u', 'm', 'a', 'r'};
    reverseString(s);

    return 0;
}