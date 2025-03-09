#include <iostream>
#include <string>
using namespace std;


int minimumRecolors(string blocks, int k){
    int numberOfWhites = 0;
    for (int i = 0; i < k; i++){
        if(blocks[i] == 'W'){
            numberOfWhites++;
        }
    }

    int minWhite = numberOfWhites;

    for (int j = k; j < blocks.length(); j++){
        if(blocks[j] == 'W'){numberOfWhites++;}
        if(blocks[j-k] == 'W'){numberOfWhites--;}

        minWhite = (minWhite > numberOfWhites)? (minWhite = numberOfWhites):(minWhite);

    }

    return minWhite;
}

int main(){
    
    cout << minimumRecolors("BWWWBB", 6);

    return 0;
}