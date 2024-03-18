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
    list<string> l;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
    }
    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;
    }
    return 0;
}