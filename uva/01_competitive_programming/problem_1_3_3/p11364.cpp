#include <stdio.h>

using namespace std;

int main() {
    int T, n;
    int l = -1;
    int r = -1;
    if (scanf("%d", &T) != 1) return 1;

    while (T--) {
        if (scanf("%d", &n) != 1) return 1;

        while (n--) {
            int tmp;
            if (scanf("%d", &tmp) != 1) return 1;

            if (l == -1 && r == -1) {
                l = tmp;
                r = tmp;
            }

            l = l < tmp ? l : tmp;
            r = r > tmp ? r : tmp;
        }

        printf("%d\n", 2 * (r - l));

        l = -1;
        r = -1;
    }

    return 0;
}

