#include <iostream>

using namespace std;

#define THREE 3
#define FIVE 5

int main()
{
    int n;
    double cnt = 0.01;
    cin >> n;

    while (n > 0)
    {
        if (n % FIVE == 0)
        {
            cnt += n / FIVE;
            break;
        }
        n -= THREE;
        cnt++;
    }
    cout.precision(1);
    if (n < 0)
        cout << -1 << endl;
    else
        cout << cnt << endl;
}
