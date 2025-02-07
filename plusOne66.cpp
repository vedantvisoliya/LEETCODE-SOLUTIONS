#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> plusOne(vector<int>& digits){
    // long int number = 0;
    // int power = 0;
    // for(int i = digits.size()-1; i >= 0; i--){
    //     number = number + (digits[i]*pow(10, power));
    //     // cout << number << endl;
    //     power++;
    // }
    // // cout << number << endl;
    // number++;
    // vector<int> new_number;
    // int digit;
    // while(number != 0){
    //    digit = number % 10;
    //    new_number.insert(new_number.begin(), digit);
    //    number /= 10; 
    // }
    // return new_number;

    for (int i = digits.size()-1; i>=0; i--){
        if(digits[i] == 9){
            digits[i] = 0;
        }
        else{
            digits[i] += 1;
            return digits;
        }
    }
    digits.insert(digits.begin(), 1);
    return digits;

}

int main(){
    vector<int> num = {9,8,7,6,5,4,3,2,1,0};
    vector<int> new_num = plusOne(num);
    vector<int>::iterator it;
    for (it = new_num.begin(); it != new_num.end(); it++){
        cout << *it << " ";
    }

    return 0;
}