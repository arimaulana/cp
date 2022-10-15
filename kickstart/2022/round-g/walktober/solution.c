#include <stdio.h>

typedef unsigned int uint;

int main() {
    int T;

    if (scanf("%d", &T) != 1) return 1;

    for (int tc = 1; tc <= T; tc++) {

        int M, N, P;
        if (scanf("%d %d %d", &M, &N, &P) != 3) return 1;

        long step[M][N];
        long max[31] = {0};

        for (int m = 0; m < M; m++) {
            for (int n = 0; n < N; n++) {
                char c;
                if (scanf("%ld%c", &step[m][n], &c) != 2) return 1;
                
                max[n] = step[m][n] > max[n] ? step[m][n] : max[n];
            }
        }

        long a = 0;
        for (int n = 0; n < N; n++) {
            //printf("n = %d\tp = %ld\tm = %ld\n", n, step[P-1][n], max[n]);
            if (step[P-1][n] < max[n]) {
                a += (max[n] - step[P-1][n]);
            }
        }

        if (tc == T) {
            printf("Case #%d: %ld", tc, a);
        } else {
            printf("Case #%d: %ld\n", tc, a);
        }
    }

    return 0;
}
