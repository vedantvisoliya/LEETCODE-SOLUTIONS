#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> nums, int target){
    int nums_size = nums.size();
    int index;
    for(int i = 0; i < nums_size; i++){
        if(nums[0] > target){
            return 0;
        }
        else if(target >= nums[i]){
            if(target == nums[i]){
                return i;
            }
            index = i+1;
        }
    }
    return index;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 0;

    cout << searchInsert(nums, target);
    // cout << (nums[5] > 6);

    

    return 0;
}