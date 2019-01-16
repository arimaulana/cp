#include <cstdio>

using namespace std;

int main() {
    int T, n, c;

    if (scanf("%d", &T) != 1) return 1;

    int i = 1;
    while (T--) {
        if (scanf("%d", &n) != 1) return 1;

        int min = 0;
        while (n--) {
            if (scanf("%d", &c) != 1) return 1;

            min = c > min ? c : min;
        }

        printf("Case %d: %d\n", i, min);
        i++;
    }

    return 0;
}
