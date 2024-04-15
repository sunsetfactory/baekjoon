#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        int _max;
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        _max = max(a, max(b, c));
        if (_max == a && b * b + c * c == a * a)
            cout << "right" << endl;
        else if (_max == b && a * a + c * c == b * b)
            cout << "right" << endl;
        else if (_max == c && a * a + b * b == c * c)
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
    return 0;
}
