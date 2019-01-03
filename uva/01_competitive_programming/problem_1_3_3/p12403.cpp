#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
    int T, K, A = 0;
    char type[7];

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {
        if (scanf("%s", type) != 1) return 1;

        if (strcmp(type, "donate") == 0) {
            if (scanf("%d", &K) != 1) return 1;
            A += K;
        } else printf("%d\n", A);
    }

    return 0;
}

