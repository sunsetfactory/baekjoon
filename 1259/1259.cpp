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
        if (n < 10)
        {
            cout << "yes" << endl;
            break;
        }
        int temp = n;
        last_digit = n % 10;
        while (temp >= 10)
        {
            temp /= 10;
        }
        first_digit = temp;
        if (first_digit == last_digit)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}