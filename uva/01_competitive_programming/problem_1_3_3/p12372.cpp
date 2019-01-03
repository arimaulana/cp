#include <stdio.h>

using namespace std;

int main() {
    int T, a, b, c;

    if (scanf("%d", &T) != 1) return 1;

    int i = 1;
    while (T--) {
        if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

        printf("Case %d: %s\n", i, a > 20 || b > 20 || c > 20 ? "bad" : "good");
        i++;
    }

    return 0;
}

