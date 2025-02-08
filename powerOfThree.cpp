#include <iostream>
using namespace std;

bool isPowerOfThree(int n){
    long int product = 1; 
    while(n > 0){
        if(product == n){
            return true;
        }
        else if(product > n){
            return false;
        }
        product *= 3;
    }
    return false;
}


int main(){
    cout << isPowerOfThree(1162261468);
    return 0;
}