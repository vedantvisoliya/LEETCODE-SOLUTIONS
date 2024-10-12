#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int nums[] = {1,2,4,4,5,2,1};
    // 1 2 2 3 3 5 5 
    // 1 1 2 2 3 3 5
    // 1 1 2 2 3 4 4 5 5 
    // 1 2 2 4 4 5 
    int size = sizeof(nums) / sizeof(nums[0]);
    sort(nums, nums+size);

    // for (int i = 0; i < size; i++){
    //     cout << nums[i] << " ";
    // }
    // cout << endl;
    for (int j = 0; j < size; j = j + 2){
        int k = j + 1;
        if(j == (size-1)){
            cout << nums[j];
            break;
        }
        if (nums[j] != nums[k]){
            // if (j == 0){
            //     cout << nums[j];
            //     break;
            // }
            // else{
            //     cout << nums[k];
            //     break;
            // }
            cout << nums[j];
            break;
        }
    }

    return 0;
}