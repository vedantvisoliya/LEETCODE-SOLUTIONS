#include <iostream>
#include<vector>
using namespace std;

vector<int> twoSums(vector<int> &nums, int target){
    vector<int> result;
    int numsize = nums.size();
    for (int i = 0; i < (numsize-1); i++){
        int j = i + 1;
        for (j; j < numsize; j++){
            if ((nums[i]+nums[j]) == target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

int main(){
    vector<int> numArray = {1,2,3,4,5};

    vector<int> output = twoSums(numArray,9);
    int output_size = output.size();
    for (int i = 0; i < output_size; i++){
        cout << output[i] << " ";
    }
    return 0;
}