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
        while (n < 10)
        {
            first_digit = n / 10;
            last_digit = n % 10;
            if (first_digit != last_digit)
            {
                cout << "no" << endl;
                break;
            }
            n /= 100;
        }
    }
    return 0;
}