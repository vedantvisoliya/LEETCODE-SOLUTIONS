#include <iostream>
#include <string>
using namespace std;

int firstOccurence(string haystack, string needle){

    int haystack_size = haystack.length();
    int needle_size = needle.length();
    
    if (haystack_size < needle_size) {
        return -1;
    }
    
    for (int i = 0; i <= haystack_size - needle_size; i++) {
        if (haystack.substr(i, needle_size) == needle) {
            return i;
        }
    }
    
    return -1;
}



int main(){
    string haystack = "mississippi";
    //                 012345678910
    string needle = "issipi";
    //               012345

    cout << firstOccurence(haystack,needle);
    return 0;
}