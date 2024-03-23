#include <iostream>

using namespace std;
#define RULE 6

int main()
{
    int n;
    int result = 1;
    cin >> n;
    if (n == 1)
    {
        cout << result << endl;
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        result += i * RULE;
        if (n <= result)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << result << endl;
    return 0;
}