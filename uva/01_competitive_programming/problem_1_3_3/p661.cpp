#include <cstdio>
#include <vector>

using namespace std;
typedef pair<int, int> pii;
typedef vector<pii> vii;

int main() {
    int n, m, c, p;

    int i = 1;
    while (scanf("%d %d %d", &n, &m, &c) != EOF, (n || m || c)) {
        vii C;
        while (n--) {
            if (scanf("%d", &p) != 1) return 1;

            C.push_back(pii(p, 0));
        }

        int limit = 0;
        int max = 0;
        bool blown = false;
        while (m--) {
            if (scanf("%d", &p) != 1) return 1;
            if (blown) continue;

            int k = C[p - 1].first;
            bool state = C[p - 1].second;

            limit = state ? limit - k : limit + k;
            max = limit > max ? limit : max;

            blown = limit > c ? true : false;

            C[p - 1].second = state ? 0 : 1;
        }

        printf("Sequence %d\n", i);
        printf("Fuse was %sblown.\n", blown ? "" : "not ");
        if (!blown) printf("Maximal power consumption was %d amperes.\n", max);

        puts("");
        i++;
    }

    return 0;
}

