#include <bits/stdc++.h>
using namespace std;

typedef unordered_set<char> sc;

int roman_to_int(char c) {
    switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }

    return 0;
}

int solve(string s) {
    int n = s.length();

    char last;
    int num = 0;
    for (int i = n - 1; i >= 0; i--) {
        char c = s[i];
        int t = roman_to_int(c);
        
        if (c == 'I') {
            if (last == 'V' || last == 'X') {
                t *= -1;
            }
        } else if (c == 'X') {
            if (last == 'L' || last == 'C') {
                t *= -1;
            }
        } else if (c == 'C') {
            if (last == 'D' || last == 'M') {
                t *= -1;
            }
        }

        num += t;
        last = c;
    }

    return num;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << solve(s) << '\n';

    return 0;
}

