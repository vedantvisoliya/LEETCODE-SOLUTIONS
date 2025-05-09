#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> decrypt(vector<int>& code, int k) {
    vector<int> decryptedCode = {};
    if ((code.size() == 1) && (k > 0 || k < 0)){
        return code;
    }
    else if(k == 0){
        for (int i = 0; i < code.size(); i++){
            code[i] = 0;
        }
        return code;
    }
    else if(k > 0){
        int counter = 0; 
        int sum = 0;
        for(int i = 0; i < code.size(); i++){
            // cout << "-------------------------" << endl;
            // cout << "i::" << i << endl;
            int j;
            if (i == code.size()-1){
                j = 0;
                counter = 1;
                sum = 0;
                // cout << "i: " << i << endl;
            }
            else {
                j = i + 1;
                // cout << "counter:" << counter << endl;
                // cout << "sum:" <<sum <<endl;
                counter = 1;
                sum = 0;
            }
            while(counter <= k){
                sum += code[j];
                // cout << "sum::" << sum << endl;
                if (j == code.size()-1){
                    j = 0;
                }
                else{
                    j++;
                }
                counter++;
            }
            decryptedCode.insert(decryptedCode.begin() + i, sum);
            // cout << "----------------------------" << endl;
        }
        return decryptedCode;
    }
    else{
        int counter = 1;
        int sum = 0;
        k = -k;
        cout << "k:" << k << endl;
        for(int i = 0; i < code.size(); i++){
            // cout << "---------------------------------" << endl;
            // cout << "i:" << i << endl;
            int j;
            if(i == 0){
                j = code.size()-1;
                // cout << "j:" << j << endl;
            }
            else{
                j = i - 1;
                counter = 1;
                sum = 0;
                // cout << "j:" << j << endl;
                // cout << "sum:" << sum << endl;
            }
            while (counter <= k){
                sum += code[j];
                // cout << "sum::" << sum << endl;
                if (j == 0){
                    j = code.size() - 1;
                }
                else {
                    j--;
                }
                counter ++;
            }
            decryptedCode.insert(decryptedCode.begin() + i, sum); 
            // cout << "---------------------------------" << endl;
        }
        return decryptedCode;
    }
}

int main(){
    int k = 0;
    // vector<int> code = {1, 2, 3, 4};
    vector<int> code = {2, 4, 9, 3};
    // 12, 5, 6, 13
    // 9, 8, 7, 6
    // 9, 8, 7, 6

    int num;
    vector<int> array = decrypt(code, -2);

    for (auto i : array){
        cout << i << " ";
    }

    return 0;
}
