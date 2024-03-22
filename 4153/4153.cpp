#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
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
