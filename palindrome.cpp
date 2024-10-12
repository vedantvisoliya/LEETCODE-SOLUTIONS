#include <iostream>
#include <string>
using namespace std;

bool palindrome(int num){
    // bool check_palin = true;
    string string_num;
    string_num = to_string(num);
    int string_num_length = string_num.length();

    for (int i = 0; i < string_num_length; i++){
        for (int j = string_num_length-1; j >= 0; j--){
            // if (string_num.at(i) == string_num.at(j)){
            // }
            // else{
            //     // check_palin = false;
            //     // cout << num << " is not a palindrome number.";
            //     return 1;
            // }
            cout << string_num.at(i) << "----" << string_num.at(j) << endl;
            
        }
        
    }
    // cout << num << " is a palindrome number.";
    return 0;

    
}

int main(){
    // int number;
    // int i = 0;
    // while (i < 5)
    // {
    //     cin >> number;
    //     cout << palindrome(number) << endl;
    //     i++;
    // }

    // palindrome(12221);
    string number_1_string;
    int number_1;
    cout << "enter a number: ";
    cin >> number_1;

    string string_num = to_string(number_1);
    int length = string_num.length();

    for (int i = length-1; i >= 0; i--)
    {
        number_1_string = number_1_string + string_num.at(i);
    }

    // cout << number_1_string;

    if (string_num == number_1_string)
    {
        cout << number_1 << " is a palindrome number";
    }
    else
    {
        cout << number_1 << " is not a palindrome number";
    }

    return 0;
}