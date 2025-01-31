#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsDuplicate(vector<int> nums) {
    vector<int>::iterator it;    
    unordered_map<int, int> uniqueNum = {};
    for(it = nums.begin(); it!= nums.end(); it++){
        if (uniqueNum.find(*it) != uniqueNum.end()) {
            uniqueNum[*it] += 1;
            if(uniqueNum[*it] > 1){
                return true;
            }
        }
        else{
            uniqueNum.insert({*it, 1});
        }
    }
    return false;    
}

int main(){
    
    vector<int> numbers2 = {1,2,3,4,5,1,1};

    unordered_map<int, int> numbers = {};
    numbers.insert({1,2});
    numbers.insert({2,1});
    numbers.insert({3,2});
    numbers.insert({4,5});

    // cout << numbers[3];

    cout << containsDuplicate(numbers2);

    return 0;
}