#include <iostream>
using namespace std;

string binary(int num){
    string binary;
    string temp = "";
    if(num == 1){
        return "1";
    }
    else if(num == 0){
        return "0";
    }
    while ((num/2) >= 0){

        int remainder = num%2;
        temp = temp + to_string(remainder);
        if((num/2) == 0){
            int temp_length = temp.length();
            for(int i = (temp_length-1); i >= 0; i--){
                binary = binary + temp.at(i);
            }
            break;
        }
        num = num / 2;
    }
    return binary;
}

string convertDateToBinary(string date) {

    // 2080-02-29
    // 100000100000-10-11101

    string temp = "";
    string res;
    int date_size = date.length();
    for(int i = 0; i < date_size; i++){
        if((date[i] != '-')){
            temp = temp + date[i];
            if((date[i+1]) == '-'){
                int temp_int = stoi(temp);
                res = res + binary(temp_int);
                res = res + date[i+1];
            }
            else if (i == date_size-1){
                int temp_int = stoi(temp);
                res = res + binary(temp_int);                
            }
        }
        else{
            temp = "";
        }
    }
    return res;
}


int main(){
    string result = convertDateToBinary("2006-11-07");
    cout << result;
    // cout << binary(2006);
    // cout << binary(11);
    // cout << binary(07);
    return 0;
}