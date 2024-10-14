#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    vector<int> nums = {0,0,1,1,2,2,2,3,3,3,3};
    vector<int>::iterator it;
    it = unique(nums.begin(), nums.end());
    nums.resize(distance(nums.begin(),it));

    for (int i : nums){
        cout << i << " ";
    }


    return 0;
}