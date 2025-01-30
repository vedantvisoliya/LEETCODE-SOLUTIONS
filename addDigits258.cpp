#include <iostream>
using namespace std;

int addDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + num % 10;
        num /= 10;
        // cout << num << endl;
        if (num == 0)
        {
            if (sum < 10)
            {
                // cout << sum << endl;
                return sum;
            }
            else
            {
                num = sum;
                sum = 0;
            }
        }
    }
    return 0;
}

int main()
{
    cout << addDigits(25678930);
    return 0;
}