#include <iostream>

using namespace std;

int main()
{
    int n;
    int first_digit, last_digit;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        first_digit = n / 10;
        last_digit = n % 10;
    }
    return 0;
}