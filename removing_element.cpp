#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeElement(vector<int> nums, int val){
    vector<int> nums1 = {};
    auto it = remove(nums.begin(), nums.end(), val);
    for (auto i = nums.begin(); i != it; i++){
        // cout << *i << " ";
        nums1.push_back(*i);
    }
    return nums1.size();
}

int main(){
    vector<int> nums = {2,3,5,3,5,2,4,6,2};
    int val = 5;
    cout << removeElement(nums,val);
    return 0;
}
 
