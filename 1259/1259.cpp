#include <iostream>

using namespace std;

int main()
{
    int n;
    int first_digit, last_digit;
    int temp;
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
            temp = n;
            while (temp >= 10)
            {
                temp /= 10;
            }
            first_digit = temp;
            last_digit = n % 10;
            cout << first_digit << " " << last_digit << endl;
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
