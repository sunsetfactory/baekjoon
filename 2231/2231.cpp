#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = i;
        while (i)
        {
            sum += i % 10;
            i /= 10;
            printf("sum: %d\n", sum);
        }
        if (sum == n)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}