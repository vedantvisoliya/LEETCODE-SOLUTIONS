#include <iostream>
#include <math.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n > 0){
        for(int i = 0; i <= 31; i++){
                if(pow(2,i) == n){
                    return true;
                }
            }
    }
    return false;
}

int main(){
    
    cout << (pow(-2,4) == (-8));

    return 0;
}