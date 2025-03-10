#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++){
        nums[i] *= nums[i];
    }
     
    for (int j = 0; j < nums.size()-1; j++){
        for (int k = j + 1; k < nums.size(); k++){
            if(nums[j] > nums[k]){
                int temp = nums[j];
                nums[j] = nums[k];
                nums[k] = temp;
            }
        }
    }
    return nums;
}

int main(){
   
    vector<int> nums = {-4,-1,0,3,10};
    sortedSquares(nums);
    for (auto it : nums) {
        cout << it << " ";
    }
    return 0;
}