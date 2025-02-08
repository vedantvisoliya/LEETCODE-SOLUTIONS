#include <iostream>
#include <vector>
using namespace std;


void increasingSort(vector<int>& nums1){
    int j;
    int temp;
    for(int i = 0; i < nums1.size()-1; i++){
        j = i + 1;
        for (j; j < nums1.size(); j++){
            if(nums1[i] > nums1[j]){
                temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
}


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    if(m == 0){
        nums1.swap(nums2);
        return;
    }
    else if(n == 0){
        return;
    }

    int zeroCount = m;
    int nums2Count = nums2.size()-1;
    for(int i = nums1.size()-1; i>=zeroCount; i--){
        nums1.at(i) = nums2.at(nums2Count);
        nums2Count--;
    }
    increasingSort(nums1);

}


int main(){
    vector<int> num1 = {2,5,6,0,0,0}; 
    vector<int> num2 = {2,3,4};
    vector<int>::iterator it;
    merge(num1, 3, num2, 3);
    // increasingSort(num1);
    for(it = num1.begin(); it != num1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}