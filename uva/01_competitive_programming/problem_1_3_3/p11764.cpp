#include <cstdio>

using namespace std;

int main() {
    int T, N, c, tmp;

    if (scanf("%d", &T) != 1) return 1;

    int i = 0;
    while (T--) {
        if (scanf("%d", &N) != 1) return 1;

        int h = 0;
        int l = 0;
        c = 0;
        while (N--) {
            if (scanf("%d", &tmp) != 1) return 1;

            if (c == 0) {
                c = tmp;
                continue;
            }

            if (c > tmp)
                l += 1;
            else if (c < tmp)
                h += 1;

            c = tmp;
        }

        i++;
        printf("Case %d: %d %d\n", i, h, l);
    }

    return 0;
}

