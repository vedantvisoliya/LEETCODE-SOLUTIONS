#include <iostream>
using namespace std;

int main(){
    int numbers[] = {1,0,3,4,2,6};
    int number_length = sizeof(numbers)/sizeof(0);
    // cout << number_length;

    for (int i = 0; i < number_length-1; i++){
        int j = i + 1;
        for (j; j < number_length; j++){
            if (numbers[i] > numbers[j]){
                int temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }

    for (int k = 0; k < number_length; k++){
        if (k != numbers[k]){
            cout << k;
            break;
        }
        // cout << numbers[k] << " ";
    }
    return 0;
}