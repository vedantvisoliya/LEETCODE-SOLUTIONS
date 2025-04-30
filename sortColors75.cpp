#include <iostream>
#include <vector>
using namespace std;

// Red - 0 
// White - 1
// Blue - 2

void sortColors(vector<int>& nums){
    int tempNum;
    for (int i = 0; i < nums.size()-1; i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] > nums[j]){
                tempNum = nums[i];
                nums[i] = nums[j];
                nums[j] = tempNum;
            }
        }
    }
}


int main(){
    
    vector<int> colors = {2,0,1,2,2,1,0,0,1};
    sortColors(colors);
    for (int i : colors){
        cout << i << " ";
    }

    return 0;
}