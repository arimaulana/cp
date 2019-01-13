#include <cstdio>

using namespace std;

int main() {
    int T, n, a, b, sum;

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {
        if (scanf("%d", &n) != 1) return 1;

        sum = 0;
        while (n--) {
            if (scanf("%d %*d %d", &a, &b) != 2) return 1;
            sum += (a * b);
        }
        printf("%d\n", sum);
    }

    return 0;
}

