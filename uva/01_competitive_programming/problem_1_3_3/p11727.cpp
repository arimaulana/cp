#include <stdio.h>

using namespace std;

int main() {
    int T, a, b, c;

    if (scanf("%d", &T) != 1) return 1;

    int i = 1;
    while (T--) {
        if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

        printf("Case %d: %d\n", i, (a > b && b > c) || (a < b && b < c) ? b : (b > c && c > a) || (b < c && c < a) ? c :
        a);
        i++;
    }

    return 0;
}

