#include <iostream>
using namespace std;

bool isUgly(int n)
{   
    if(n <= 0)
    {
        // cout << n << endl;
        return false;
    }
    while (n != 1)
    {
        if (n <= 0)
        {
            return false;
        }
        if (n % 2 == 0)
        {
            // cout << n << endl;
            n /= 2;
        }
        else if (n % 3 == 0)
        {
            // cout << n << endl;
            n /= 3;
        }
        else if (n % 5 == 0)
        {
            // cout << n << endl;
            n /= 5;
        }
        else
        {
            // cout << n << endl;
            return false;
        }
    }
    // cout << n << endl;
    return true;
}

int main()
{
    isUgly(14);
    return 0;
}