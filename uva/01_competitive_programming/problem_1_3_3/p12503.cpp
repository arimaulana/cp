#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;
typedef vector<int> vi;

int main() {
    int T, n;
    char s[6];

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {
        if (scanf("%d", &n) != 1) return 1;

        int p = 0;
        vi arr(101);
        int i = 1;
        while (n--) {
            if (scanf("%s", s) != 1) return 1;

            if (strcmp(s, "LEFT") == 0) {
                p += -1;
                arr[i] = -1;
            } else if (strcmp(s, "RIGHT") == 0) {
                p += 1;
                arr[i] = 1;
            } else {
                int tmp = 0;
                if (scanf("%s %d", s, &tmp) != 2) return 1;
                p += arr[tmp];
                arr[i] = arr[tmp];
            }

            i++;
        }

        printf("%d\n", p);
    }

    return 0;
}

