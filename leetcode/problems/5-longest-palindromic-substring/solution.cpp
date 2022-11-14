#include <bits/stdc++.h>
using namespace std;

typedef map<string, bool> msb;

bool is_palindrome(string s) {
    int n = s.length();
    int mid = n >> 1;
    for (int i = 0; i < mid; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }

    return true;
}

string longest_palindrome(string s) {
    if (s.length() == 1) return s;

    string t = "";

    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << longest_palindrome(s) << '\n';

    return 0;
}

