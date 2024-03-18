#include <iostream>
#include <bits/stdc++.h>
#define cin std::cin
#define cout std::cout
#define endl std::endl
#define string std::string
#define list std::list

int main() {
    int n;
    cin >> n;
    string s[n];
    list<char> l = {};

    for (int i = 0; i < n; i++) {
        cin >> s[i];
        list<char>::iterator it = l.begin();
        for (int j = 0; j < s[i].size(); j++) {
            if (s[i][j] == '<') {
                if (it != l.begin()) {
                    it--;
                }
            } else if (s[i][j] == '>') {
                if (it != l.end()) {
                    it++;
                }
            } else if (s[i][j] == '-') {
                if (it != l.begin()) {
                    it--;
                    it = l.erase(it);
                }
            } else {
                l.insert(it, s[i][j]);
            }
        }
    }
    for (auto i : l) {
        cout << i;
    }
    return 0;
}