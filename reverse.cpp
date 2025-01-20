#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

int reverse(int x){
    string temp = to_string(x);
    bool isNve = false;
    string reverse = "";
    int output = 0;
    if (temp.at(0) == '-')
    {
        isNve = true;
    }

    for(int i = temp.length()-1; i >= 0; i--){
        reverse += temp.at(i);
    }

    try
    {
        if (isNve){     
            output =-(stoi(reverse));
            return output;
        }
        else {       
            output =(stoi(reverse));
            return output;
        }
    }
    catch(const exception& e)
    {
        return 0;
    }

    
}

int main(){
    cout << reverse(2147483647); 
    return 0;
}