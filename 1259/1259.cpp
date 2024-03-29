#include <iostream>

using namespace std;

int main()
{
    int n;
    int first_digit, last_digit;
    int temp;
    int digit;
    int num = 1;

    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        while (n >= 10)
        {
            temp = n;
            digit = 0;
            while (temp > 0)
            {
                temp /= 10;
                digit++;
                cout << "digit: " << digit << endl;
            }
            first_digit = temp;
            last_digit = n % 10;
            n = n % num;
            n = n / 10;
            num = 1;

            if (first_digit != last_digit)
            {
                cout << "no" << endl;
                break;
            }
        }
        if (n < 10)
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}
