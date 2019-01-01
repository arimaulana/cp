#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int T, n;

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {
        if (scanf("%d", &n) != 1) return 1;

        printf("%d\n", abs(((n * 63 + 7492) * 5 - 498) / 10 % 10));
    }

    return 0;
}

