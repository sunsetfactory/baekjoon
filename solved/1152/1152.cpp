#include <iostream>

int main(void)
{
    std::string s;
    int count = 0;
    int idx = 0;

    std::getline(std::cin, s);
    if (s[0] != ' ')
    {
        while (s[idx] == ' ' && s[idx] != ' ')
        {
            idx++;
        }
        count++;
    }
    for (int i = idx; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] != '\0' && s[i + 1] != ' ')
            count++;
    }
    std::cout << count << std::endl;
}
