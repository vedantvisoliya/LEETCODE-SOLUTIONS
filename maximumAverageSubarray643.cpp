#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int> nums, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++){
        sum += nums[i];
    }

    int maxSum = sum;

    for(int j = k; j < nums.size(); j++){
        sum += nums[j];
        sum -= nums[j-k];

        maxSum = (maxSum < sum) ? (maxSum = sum):(maxSum);
    }

    return ((double)maxSum/k);
}

int main(){
    
    vector<int> nums = {1,12,-5,-6,50,3};
    cout << findMaxAverage(nums, 4);
    return 0;
}