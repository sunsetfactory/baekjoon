#include <iostream>

#define cin std::cin
#define cout std::cout
#define endl std::endl
#define string std::string

int main() {
    string a, b;
    int cnt_a[26] = {0};
    int cnt_b[26] = {0};
    int result = 0;

    cin >> a >> b;

    for (int i = 0; i < a.size(); i++) {
        cnt_a[a[i] - 'a']++;
    }

    for (int i = 0; i < b.size(); i++) {
        cnt_b[b[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (cnt_a[i] > cnt_b[i])
            result += cnt_a[i] - cnt_b[i];
        if (cnt_a[i] < cnt_b[i])
            result += cnt_b[i] - cnt_a[i];
    }
    cout << result << endl;
    return 0;
}