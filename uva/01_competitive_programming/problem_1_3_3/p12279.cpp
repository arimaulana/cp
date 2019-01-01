#include <stdio.h>

using namespace std;

int main() {
    int T, n;

    int i = 1;
    while (scanf("%d", &T) != 1, T) {
        int b = 0;

        // if (i > 1) printf("\n"); // put here to always end new line for prev case

        while (T--) {
            if (scanf("%d", &n) != 1) return 1;

            b = n != 0 ? b + 1 : b - 1;
        }

        printf("Case %d: %d\n", i, b);
        i++;
    }

    return 0;
}

