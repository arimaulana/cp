#include <bits/stdc++.h>

using namespace std;

#define MP make_pair

typedef pair<int, int> pii;
typedef map<pii, int> mpii;

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

        mpii memo;
        int sum = 0;
        int tmp = def_tmp;
        int L = 0;
        int R = N - 1;
        for (int n = 0; n < N; n++) {
            printf("n = %d, L = %d, R = %d, memo size: %lu\n", n, L, R, memo.size());
            if (memo.find(MP(L, R)) != memo.end()) {
                sum += memo[MP(L, R)];
                tmp = def_tmp;
                n = L++;
                printf("using memo\n");
                continue;
            }

            if (tmp + arr[n] < def_tmp) {
                tmp = def_tmp;
                R = R == n ? N - 1 : n;
                n = L++;
                printf("n = %d\tL = %d\n", n + 1, L);
                continue;
            }
            tmp += arr[n];
            sum += tmp;
            memo[MP(L, n)] = tmp;
            printf("a = %d\ttmp = %d\tsum = %d\n", arr[n], tmp, sum);
            if (n + 1 == N) {
                tmp = def_tmp;
                R = n;
                n = L++;
                printf("n = %d\tL = %d\n", n + 1, L);
            }
        }

        printf("Case #%d: %d\n", tc, sum);
    }

    return 0;
}
