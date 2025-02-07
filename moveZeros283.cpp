#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int>& nums) {    
    int count = 0;
    for (int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            count++;
        }
    }
    nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
    for (int j = 0; j < count; j++){
        nums.push_back(0);
    }
}

int main(){
    vector<int> numbers = {1,3,5,7,6,2,8,1};
    moveZeroes(numbers);
    for (int k = 0; k < numbers.size(); k++)
    {
        cout << numbers[k] << " ";
    }
    return 0;
}