#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int N, target; // using global variable is a bad software engineering practice, but it is OK for competitive programming
double dist[20][20], memo[1 << 16]; // 1 << 16 = 2^16, note that max N = 8

double matching(int bitmask) { // DP state = bitmask
    // we initialize memo with -1 in the main function
    if (memo[bitmask] > -0.5) {
        return memo[bitmask];
    }
    if (bitmask == target) {
        return memo[bitmask] = 0;
    }

    double ans = 2000000000.0;
    int p1, p2;
    for (p1 = 0; p1 < 2 * N; p1++) {
        if (!(bitmask & (1 << p1))) {
            break;
        }
    }
    for (p2 = p1 + 1; p2 < 2 * N; p2++) {
        if (!(bitmask & (1 << p2))) {
            ans = min(ans, dist[p1][p2] + matching(bitmask | (1 << p1) | (1 << p2)));
        }
    }
    return memo[bitmask] = ans;
}

int main() {
    int i, j, caseNo = 1, x[20], y[20];
    // freopen("10911.txt", "r", stdin);

    while (scanf("%d", &N), N) {
        for (i = 0; i < 2 * N; i++) {
            scanf("%*s %d %d", &x[i], &y[i]);
        }
        for (i = 0; i < 2 * N - 1; i++) {
            for (j = i + 1; j < 2 * N; j++) {
                dist[i][j] = dist[j][i] = hypot(x[i] - x[j], y[i] - y[j]);
            }
        }

        // use DP to solve min weighted perfect matching on small general graph
        for (i = 0; i < (1 << 16); i++) memo[i] = -1.0; // set -1 to all cells
        target = (1 << (2 * N)) - 1;
        printf("Case %d: %.2lf\n", caseNo++, matching(0));
    }
}