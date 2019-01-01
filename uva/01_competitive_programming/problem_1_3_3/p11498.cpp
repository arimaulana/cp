#include <stdio.h>

using namespace std;

int main() {
    int T, cx, cy, x, y;

    while (scanf("%d", &T) == 1, T) {
        if (scanf("%d %d", &cx, &cy) != 2) return 1;

        while (T--) {
            if (scanf("%d %d", &x, &y) != 2) return 1;

            printf(x == cx || y == cy ? "divisa\n" : x > cx ? y > cy ? "NE\n" : "SE\n" : y > cy ? "NO\n" : "SO\n");
        }
    }

    return 0;
}

