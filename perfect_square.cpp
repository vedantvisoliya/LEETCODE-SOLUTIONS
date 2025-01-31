#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
        int odd_sum = 1;
        int perfect_square = 0;
        while (true){
            perfect_square = perfect_square + odd_sum;
            if (perfect_square == num){
                return true;
            }
            else if(perfect_square > num){
                break;
            }
            odd_sum = odd_sum + 2;
        }
        return false;
}

int main(){
    cout << isPerfectSquare(145);
    return 0;
}