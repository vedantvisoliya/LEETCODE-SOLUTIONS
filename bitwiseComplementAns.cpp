#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//Done by me
int bitwiseComplement(int n){
    string strBin = "";
    string revStrBin = "";
    string revStrBinCom = "";
    int nComp = 0;

    // if decimal is 0 or 1
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return 0;
    }
    // converting decimal to binary
    while(n != 0){
        strBin += to_string(n%2);
        n/=2;
    }
    // reversing the binary
    for (int i = strBin.length()-1; i >= 0; i--){
        revStrBin += strBin.at(i);
    }
    // complementing the reverse binary
    for (int j = 0; j < revStrBin.length(); j++){
        if(revStrBin.at(j) == '1'){
            revStrBinCom += '0';
        }
        else{
            revStrBinCom += '1';
        }
    }
    // converting the complement reverse binary to decimal
    int power = revStrBinCom.length()-1;
    for(int k = 0; k < revStrBinCom.length(); k++){
        nComp += (revStrBinCom.at(k)-'0') * pow(2, power);
        power -= 1;
    }
    // returing the decimal
    return nComp;
}

// online answer
int findComplement(int num) {
        int mask = 0;
        while(mask<num) {
             mask = (mask<<1) | 1;
        }
        return mask^num;
}


int main(){
    
    cout << bitwiseComplement(11) << endl;
    cout << findComplement(11);

    return 0;
}