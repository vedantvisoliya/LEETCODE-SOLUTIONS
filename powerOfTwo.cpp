#include <iostream>
#include <math.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n < 0){
        for(int i = 0; i <= 31; i++){
            if (pow(-2,i) == n){
                return true;
            }
        }
        return false;
    }
    else{
        for(int j = 0; j <= 30; j++){
            if(pow(2,j) == n){
                return true;
            }
        }
        return false;
    }
}

int main(){
    
    // cout << isPowerOfTwo(-8);
    cout << (pow(-2,4) == (-8));

    return 0;
}