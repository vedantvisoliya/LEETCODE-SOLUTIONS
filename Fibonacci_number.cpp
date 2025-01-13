#include <iostream>
#include <vector>
using namespace std;

vector<int> fibonacci(int num){
    vector<int> fiboseries = {};
    for(int i = 0; i < num; i++){
        if(i<=1){
            fiboseries.push_back(1);
        }
        else{
            fiboseries.push_back(fiboseries[i-1] + fiboseries[i-2]);
        }
    }
    return fiboseries;
}

int main() {
    int num;
    cout << "enter a number: ";
    cin >> num;
    vector<int>::iterator it;
    vector<int> fiboseries = fibonacci(num);
    for(it = fiboseries.begin(); it != fiboseries.end(); it++){
        cout << *it << " ";
    }
    return 0;
}