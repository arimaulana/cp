#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h;
    cin >> n >> h;

    int w = 0;
    while (n--) {
        int a;
        cin >> a;
        w += (a > h ? 2 : 1);
    }

    cout << w << endl;

    return 0;
}

