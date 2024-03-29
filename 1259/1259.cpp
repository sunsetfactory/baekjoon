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
        if (n < 10)
        {
            cout << "yes" << endl;
            break;
        }
        while (n >= 10)
        {
            temp = n;
            while (temp >= 10)
            {
                temp = temp / 10;
                digit++;
            }
            first_digit = n / 10;
            last_digit = n % 10;
            if (first_digit != last_digit)
            {
                cout << "no" << endl;
                break;
            }
            while (digit > 0)
            {
                num *= 10;
                digit--;
            }
            n = n - (first_digit * num);
            cout << n << " " << first_digit * num << endl;
            n = n / 10;
        }
        if (n < 10)
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}
