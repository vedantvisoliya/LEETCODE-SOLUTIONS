#include <iostream>
#include<string>
using namespace std;


// NOTE:
// LEET CODE QUESTION SOLVED IN MY STYLE
// TRY TO CHANGE THE VALUE OF THE GIVEN ARRAYS NUM1 AND NUM2

int main(){

    int nums1[] = {1,2,3,4,5};
    int nums2[] = {6,7,8,9,1};
    
   string temp;
    int result;

    string number1_str;
    int number1;
  
    int nums_length1 = sizeof(nums1) / sizeof(nums1[0]);

    string number2_str;
    int number2;
    int nums_length2 = sizeof(nums2) / sizeof(nums2[0]);

    for (int i = (nums_length1-1); i>= 0; i--){
        temp = to_string(nums1[i]);
        number1_str = number1_str + temp;
        if (i == 0){
            number1 = stoi(number1_str);
        }
    }


    for (int j = (nums_length2-1); j>= 0; j--){
        temp = to_string(nums2[j]);
        number2_str = number2_str + temp;
        if (j == 0){
            number2 = stoi(number2_str);
        }
    }

    result = number1 + number2;

// *********************************************************************************
    
    string result_str = to_string(result);

    int result_size = result_str.length();
    int result_array[result_size];

    int k = result_size-1;
    int a = 0;

    while (k >= 0){
        char num = result_str.at(k);
        int temp2 = num - '0';

        result_array[a] = temp2;
        k--;
        a++;
    }

   for (int l = 0; l < result_size ;l++){
        cout << result_array[l] << " ";
    }

    return 0;
}