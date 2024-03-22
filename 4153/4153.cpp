#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        int _max = 0;
        int a, b, c;
        cin >> a >> b >> c;
        _max = max(a, max(b, c));
        if (_max == a && b * b + c * c == a * a)
        {
        }
        else if (_max == b && a * a + c * c == b * b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        else if (_max == c && a * a + b * b == c * c)
        {
            int temp = a;
            a = c;
            c = temp;
        }
        else if (a == 0)
        {
            a = _max;
        }
        else if (b == 0)
        {
            b = _max;
        }
        else if (c == 0)
        {
            c = _max;
        }
        {
            b = 0;
        }
        else
        {
            c = 0;
        }
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
        n--;
    }
    return 0;
}
