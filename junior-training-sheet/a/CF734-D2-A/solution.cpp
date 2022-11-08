#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int t = 0;
    string w;
    cin >> w;
    for (int i = 0; i < n; i++) {
        char c = w[i];
        if (c == '\n' || c == EOF) break;

        if (c == 'A') t++;
        if (c == 'D') t--;
    }

    string win = t > 0 ? "Anton" : t < 0 ? "Danik" : "Friendship";
    cout << win << '\n';

    return 0;
}

