#include <iostream>

using namespace std;

int main()
{
    int n;
    int first_digit, last_digit;
    int temp;
    int i;

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
            i = 0;
            while (temp >= 10)
            {
                temp /= 10;
                i++;
            }
            first_digit = temp;
            last_digit = n % 10;
            if (first_digit != last_digit)
            {
                cout << "no" << endl;
                break;
            }
            n = n / 10;
        }
        if (n < 10)
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}
