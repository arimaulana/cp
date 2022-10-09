#include <stdio.h>
#include <stdlib.h>

typedef long long LL;

LL *sum_of_three(LL num, int *n) {
    *n = 0;
    LL *arr = (LL*) malloc(3 * sizeof(LL));

    if (num % 3 != 0) {
        return arr;
    }

    *n = 3;
    num /= 3;
    arr[0] = num - 1;
    arr[1] = num;
    arr[2] = num + 1;

    return arr;
}

int main() {

    int T, tc = 1;

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {

        LL x;
        if (scanf("%lld", &x) != 1) return 1;

        int n = 0;
        LL *nums = sum_of_three(x, &n);

        printf("Case #%d:\n", tc++);
        for (int i = 0; i < n; i++) {
            if (i + 1 == n) {
                printf("%lld", nums[i]);
            } else {
                printf("%lld ", nums[i]);
            }
        }
        printf("\n");

    }

    return 0;
}
