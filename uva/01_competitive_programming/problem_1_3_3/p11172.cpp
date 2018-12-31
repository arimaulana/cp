#include <stdio.h>

using namespace std;

int main() {
    int T, a, b;

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {
        if (scanf("%d %d", &a, &b) != 2) return 1;

        printf(a > b ? ">\n" : a < b ? "<\n" : "=\n");
    }

    return 0;
}
