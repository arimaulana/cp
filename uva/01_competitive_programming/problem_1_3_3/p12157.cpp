#include <cstdio>
#include <cmath>

using namespace std;

int compute(int s, int p, int e) {
    int total = (int) ceil(((float)(s + 1)) / e);
    return total * p;
}

int main() {
    int T, N, d;

    if (scanf("%d", &T) != 1) return 1;

    int i = 1;
    while (T--) {
        if (scanf("%d", &N) != 1) return 1;

        int cost_mile = 0;
        int cost_juice = 0;
        while (N--) {
            if (scanf("%d", &d) != 1) return 1;

            // compute for each
            cost_mile += compute(d, 10, 30);
            cost_juice += compute(d, 15, 60);
        }
        printf("Case %d: ", i);
        if (cost_mile < cost_juice) printf("Mile %d\n", cost_mile);
        else if (cost_juice < cost_mile) printf("Juice %d\n", cost_juice);
        else if (cost_mile == cost_juice) printf("Mile Juice %d\n", cost_mile);

        i++;
    }

    return 0;
}

