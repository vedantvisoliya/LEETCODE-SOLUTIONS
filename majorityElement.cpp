#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums) {
    unordered_map<int, int> keyValue;
    unordered_map<int, int>::iterator i;
    vector<int>::iterator it;
    int majority;
    int counter = 0;
    for (it = nums.begin(); it != nums.end(); it++){
        if(keyValue.find(*it) != keyValue.end()){
            keyValue[*it] += 1;
        }
        else{
            keyValue.insert({*it, 1});
        }
    }

    i = keyValue.begin();
    while(i != keyValue.end()){

        if ((i->second) > counter){
            majority = i->first;
            counter = i->second;
        }
        i++;
    }
    return majority;
}

int main(){
    vector<int> nums = {3,2,3};
    cout << majorityElement(nums);
    return 0;
}