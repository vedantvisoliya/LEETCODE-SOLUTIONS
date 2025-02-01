#include <iostream>
#include <vector>
using namespace std;

bool isArraySpecial(vector<int> nums){
    if(nums.size() == 1){return true;}
    int i = 0;
    int j = 1;
    while (j < nums.size()){
        if((nums[i]%2 == 0 && nums[j]%2 != 0) || (nums[i]%2 != 0 && nums[j]%2 == 0)){
            // cout << nums[i] << " " << nums[j] << endl;
        }
        else{
            // cout << "error";
            return false;
        }
        i++;
        j++;
    }
    return true; 
}

int main(){
    vector<int> nums = {1};
    cout << isArraySpecial(nums);
    return 0;
}