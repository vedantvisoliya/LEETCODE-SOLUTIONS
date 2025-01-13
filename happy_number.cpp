#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isHappy(int n){
    int i = 0;
    int sum = 0;
    int res = 0;
    string num = to_string(n);

    unordered_map<char, int> number = {{'0', 0}, {'1', 1}, {'2', 4}, {'3', 9}, {'4', 16}, {'5', 25}, {'6', 36}, {'7', 49}, {'8', 64}, {'9', 81}};
    while(num.size()>=2){
        sum += number[num.at(i)];
        if((num.size()-1) == (i)){
            num = to_string(sum);
            res = sum;
            sum = 0;
            i = -1;
        }
        i++;
    }
    if(res == 1 || n == 1){
        return true;
    }
    else if(res == 7 || n == 7){
        return true;
    }    
    return false;
}

// bool isHappy(int n){
//     int sum = 0;
//     int res = 0;
//     string num = to_string(n);
//     unordered_map<char, int> number = {{'0', 0}, {'1', 1}, {'2', 4}, {'3', 9}, {'4', 16}, {'5', 25}, {'6', 36}, {'7', 49}, {'8', 64}, {'9', 81}};
//     for(int i = 0; 2 <= num.size(); i++){
//         sum += number[num.at(i)];
//         if((num.size()-1) == i){
//             num = to_string(sum);
//             res = 
//         }
//     }
//     // if(n == 1 ||)
// }

int main(){

    // int happyNumber = 2;
    for(int j = 1; j < 101; j++){
        if(isHappy(j)){
            cout << j << " --> " << "true" << endl;
        }
        else{
            cout << j << " --> " << "false" << endl;
        }
    }
    // cout << isHappy(10);
    // string num = "10";
    // unordered_map<char, int> number = {{'0', 0}, {'1', 1}, {'2', 4}, {'3', 9}, {'4', 16}, {'5', 25}, {'6', 36}, {'7', 49}, {'8', 64}, {'9', 81}};
    // cout << number[num.at(0)] << endl;
    // cout << number[num.at(1)] << endl;
    return 0;
}