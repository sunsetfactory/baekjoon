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
    list<string> l = {};

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < s[i].size(); j++) {
            if (s[i][j] == '<') {
                if (l.size() != 0) {
                    l.pop_back();
                }
            } else if (s[i][j] == '>') {
                if (l.size() != 0) {
                    l.pop_front();
                }
            } else if (s[i][j] == '-') {
                if (l.size() != 0) {
                    l.pop_back();
                }
            } else {
                l.push_back(s[i][j]);
            }
        }
    }
    return 0;
}