#include <iostream>
using namespace std;

double myPow(double x, int n){
    double temp = 1.0;
    if (n == 0){
        return 1;
    }
    else if (x<0){
        if (n%2==0){
            if(n<0){
                n = -n;
                for(n; n>=1; n--){
                    temp = temp * x;
                }
                return (1.0/temp);
            }
            else{
                for(n; n>=1; n--){
                    temp = temp * x;
                }
                return temp;
            }            
        }
        else{
            if(n<0){
                n = -n;
                for(n; n>=1; n--){
                    temp = temp * x;
                }
                return (-(1.0/temp));
            }
            else{
                for(n; n>=1; n--){
                    temp = temp * x;
                }
                return (-temp);
            }
        }
    }
    else if (x>0){
        if(n<0){
            n = -n;
            for(n; n>=1; n--){
                temp = temp * x;
            }
            return (1.0/temp);
        }
        else{
            for(n; n>=1; n--){
                temp = temp * x;
            }
            return temp;
        }        
    }
}


int main(){

    cout << myPow(2.0,214);
    return 0;
}