#include <cstdio>

using namespace std;

int main() {
    int T, n, a, b;

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {
        if (scanf("%d", &n) != 1) return 1;

        int diff = -300; // set -300 for default value
        bool flag = true;
        while (n--) {
            if (scanf("%d %d", &a, &b) != 2) return 1;

            if (!flag) continue;

            int tmp = a - b;

            if (diff != -300 && diff != tmp) {
                flag = false;
            } else if (diff == -300) {
                diff = tmp;
                flag = true;
            }
        }
        flag ? puts("yes") : puts("no");

        if (T > 0) puts(""); // puts auto appends a newline character \n
    }

    return 0;
}

