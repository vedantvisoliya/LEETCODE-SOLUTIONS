#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_set<int> seen = {};
    int L = 0;
    for(int R = 0; R < nums.size(); R++){
        if ((R - L) > k){
            seen.erase(nums[L]);
            L++;
        }
        if (seen.find(nums[R]) != seen.end()){
            return true;
        }
        else{
            seen.insert(nums[R]);
        }
    }
    return false;
}

int main(){
    
    vector<int> numbers = {1, 2, 3, 5, 1};

    cout << containsNearbyDuplicate(numbers, 3);

    return 0;
}