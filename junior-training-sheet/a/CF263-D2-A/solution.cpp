#include <bits/stdc++.h>
using namespace std;

#define mid 2

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r = -1;
    int c = -1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int t;
            cin >> t;

            if (t == 1) {
                r = i;
                c = j;
            }
        }
    }

    int t = 0;
    if (abs(r - mid) > 0) {
        t += abs(r - mid);
    }
    if (abs(c - mid) > 0) {
        t += abs(c - mid);
    }
    cout << t << '\n';

    return 0;
}

