#include <iostream>
#define string std::string
#define cin std::cin
#define cout std::cout

int main(void)
{
    string str;
    int alpha[26] = {0, };
    cin >> str;
    for(int i = 0; i < str.length(); i++)
        alpha[str[i] - 'a']++;
    for(int i = 0; i < 26; i++)
        cout << alpha[i] << " ";
}
