#include <stdio.h>

int main() {
    int T;

    if (scanf("%d", &T) != 1) return 1;

    for (int tc = 1; tc <= T; tc++) {

        int N;
        if (scanf("%d", &N) != 1) return 1;

        int arr[N];
        int def_tmp = 0;
        for (int n = 0; n < N; n++) {
            char c;
            if (scanf("%d%c", &arr[n], &c) != 2) return 1;
        }

        int memo[400000][400000];
        for (int i = 0; i < 400000; i++) {
            for (int j = 0; j < 400000; j++) {
                memo[i][j] = -1;
            }
        }
        int sum = 0;
        int tmp = def_tmp;
        int L = 0;
        int R = N - 1;
        for (int n = 0; n < N; n++) {
            //if (memo[L][R] != -1) {
            //    sum += memo[L][R];
            //    tmp = def_tmp;
            //    n = L++;
            //    continue;
            //}

            if (tmp + arr[n] < def_tmp) {
                tmp = def_tmp;
                R = n;
                n = L++;
                printf("n = %d\tL = %d\n", n + 1, L);
                continue;
            }
            tmp += arr[n];
            sum += tmp;
            memo[L][n] = tmp;
            printf("a = %d\ttmp = %d\tsum = %d\n", arr[n], tmp, sum);
            if (n+1 == N) {
                tmp = def_tmp;
                R = n;
                n = L++;
                printf("n = %d\tL = %d\n", n + 1, L);
            }
        }

        for (int i = 0; i < 400000; i++) {
            for (int j = 0; j < 400000; j++) {
                printf("memo[%d][%d] = %d\n", i, j, -1/*memo[i][j]*/);
            }
        }

        printf("Case #%d: %d\n", tc, sum);
    }

    return 0;
}
