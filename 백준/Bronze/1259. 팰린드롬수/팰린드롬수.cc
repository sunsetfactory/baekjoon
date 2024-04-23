#include <iostream>

using namespace std;

int main()
{
    int n;
    int first_digit, last_digit;
    int temp;
    int digit;
    int n_digit;
    int sign;

    while (1) //  loop for input
    {
        sign = 0;
        cin >> n;
        if (n == 0)
            break;
        temp = n;
        n_digit = 1;
        while (temp > 9)
        {
            temp /= 10;
            n_digit *= 10;
        }
        while (n_digit > 9)
        {
            first_digit = n / n_digit;
            last_digit = n % 10;
            if (first_digit != last_digit)
            {
                cout << "no" << endl;
                sign = 1;
                break;
            }
            n = n % n_digit;
            n = n / 10;
            n_digit /= 100;
        }
        if (sign == 0)
            cout << "yes" << endl;
    }
    return 0;
}
