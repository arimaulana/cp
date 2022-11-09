#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int s = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        int t = a + b + c;
        if (t >= 2) s++;
    }

    cout << s << '\n';

    return 0;
}

