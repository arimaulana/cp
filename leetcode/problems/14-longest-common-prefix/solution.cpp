#include <bits/stdc++.h>
using namespace std;

typedef vector<string> vs;

string solve(vs &arr) {
    int n = arr.size();

    // find minimum string lenth
    int min = 99999;
    string fixed = "";
    for (int i = 0; i < n; i++) {
        string t = arr[i];
        if ((int)t.size() < min) {
            min = t.size();
            fixed = t;
        }
    }
    if (min == 0) return "";

    string s = "";
    for (int i = 0; i < min; i++) {
        char c = fixed[i];
        for (int j = 0; j < n; j++) {
            if (arr[j][i] != c) return s;
        }
        s += c;
    }

    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vs arr;
    string s;
    while (true) {
        char c = cin.get();

        if (c == ' ' || c == '\n' || c == EOF) {
            if (s != "") {
                //cout << s << '\n';
                arr.push_back(s);
                s = "";
            }

            if (c == ' ') continue;
            if (c == '\n' || c == EOF) break;
        }

        s += c;
    }

    cout << solve(arr) << '\n';

    return 0;
}

