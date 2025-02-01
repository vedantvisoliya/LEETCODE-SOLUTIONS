#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n){
    vector<string> answer;
    for(int i = 1; i <= n; i++){
        if((i%3==0) && (i%5==0)){
            answer.push_back("FizzBuzz");
        }
        else if(i%3==0){
            answer.push_back("Fizz");
        }
        else if(i%5==0){
            answer.push_back("Buzz");
        }
        else{
            answer.push_back(to_string(i));
        }
    }
    return answer;
}



int main(){
    vector<string> answer = fizzBuzz(5);
    vector<string>::iterator it;
    for(it = answer.begin(); it!=answer.end(); it++){
        cout << *it << " ";
    }
    return 0;
}