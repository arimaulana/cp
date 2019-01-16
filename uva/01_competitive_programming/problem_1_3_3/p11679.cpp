#include <cstdio>
#include <vector>

using namespace std;
typedef vector<int> vi;

int main() {
    int B, N, D, C, V;

    while (scanf("%d %d", &B, &N) == 2, (B || N)) {
        vi R;
        while (B--) {
            int r;
            if (scanf("%d", &r) != 1) return 1;
            R.push_back(r);
        }

        while (N--) {
            if (scanf("%d %d %d", &D, &C, &V) != 3) return 1;

            R[D - 1] -= V;
            R[C - 1] += V;
        }

        bool flag = true;
        for (auto el : R) {
            if (!flag) continue;

            if (el < 0) {
                flag = false;
            }
        }

        flag ? puts("S") : puts("N");
    }

    return 0;
}

