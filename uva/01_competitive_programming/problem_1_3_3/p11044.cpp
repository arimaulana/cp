#include <stdio.h>

using namespace std;

int main() {
    int N, n, m;
    
    if (scanf("%d", &N) != 1) {
        printf("Failed to read data.\n");
    }

    while (N--) {
        if (scanf("%d %d", &n, &m) != 2) {
            printf("Failed to read data.\n");
            break;
        }

        printf("%d\n", (n / 3) * (m / 3));
    }

    return 0;
}
