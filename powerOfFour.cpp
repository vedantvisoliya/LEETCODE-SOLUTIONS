#include <iostream>
using namespace std;

bool isPowerOfFour(int n){
    long int product = 1;
    while(n > 0){
        if (product > n){
            return false;
        }
        else if(product == n){
            return true;
        }
        product *= 4;
    }
    return false;
}

int main(){
    cout << isPowerOfFour(64);
    return 0;
}