#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int primeCount = n;
    for (int i = 0; i < n; i++)
    {
        primeCount -= (arr[i] == 1);
        for (int j = 2; j <= sqrt(arr[i]); j++)
        {
            if (arr[i] % j == 0)
            {
                primeCount--;
                break;
            }
        }
    }
    cout << primeCount << endl;
    return 0;
}
