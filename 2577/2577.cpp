#include <iostream>
#define string std::string
#define cin std::cin
#define cout std::cout
#define endl std::endl

int main(void){
    int a, b, c;
    int res;
    int num[10] = {0, };

    cin >> a >> b >> c;
    res = a * b * c;
    while (res != 0)
    {
        num[res%10]++;
        res /= 10;
    }
    for (int i = 0; i < 10; i++)
        cout << num[i] << endl;
    return (0);
}
