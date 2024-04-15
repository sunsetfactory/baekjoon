#include <iostream>

using namespace std;

int main()
{
    int n;
    int first_digit, last_digit;
    int temp;
    int digit;
    int n_digit;
    int sign = 0;

    while (1)
    {
        sign = 0;
        cin >> n;
        if (n == 0)
            break;
        while (n >= 10)
        {
            temp = n;
            digit = 0;
            n_digit = 1;
            while (temp > 9)
            {
                temp /= 10;
                n_digit *= 10;
            }
            n_digit *= temp;
            first_digit = temp;
            last_digit = n % 10;
            n = n - n_digit;
            n = n / 10;
            if (first_digit != last_digit)
            {
                cout << "no" << endl;
                sign = 1;
                break;
            }
        }
        if (n < 10 && sign == 0)
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}
