#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<char, int> roman{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    
    string roman_number = "MMCCCXLVIII";

    int roman_number_length = roman_number.length();
    int integral_value = 0;
    for (int i = 0; i < roman_number_length; i++){
        if(((i+1) < roman_number_length) && (roman[roman_number.at(i)] < roman[roman_number.at(i+1)])){
            integral_value -= roman[roman_number.at(i)];
        }
        else{
            integral_value += roman[roman_number.at(i)];
        }
    }

    cout << integral_value << endl;

    return 0;
}