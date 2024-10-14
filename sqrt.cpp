#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    int odd = 1;
    int count = -1;
    int sum = 0;

    while (true){

        if (sum == x){
            return (count + 1);
        }
        else if (sum > x){
            return count;
        }

        sum = sum + odd;
        odd = odd + 2;
        count++;
        
    }
}

int main(){  

    for (int i = 0; i < 17; i++){
        cout << i << " --> " << mySqrt(i) << endl;
    }


    return 0;
}