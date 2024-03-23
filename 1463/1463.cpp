#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt = 0;
    cin >> n;
    while (n != 1)
    {
        if (n % 3 == 0)
        {
            n /= 3;
        }
        else if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n -= 1;
        }
        cnt++;
    }
    cout << cnt << endl;
}
