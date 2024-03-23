#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum;
    int temp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = i;
        temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == n)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
