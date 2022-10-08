#include <stdio.h>

#define MAX 100000

void rotate(int nums[], int n, int k) {
    int tmp[MAX];

    for (int i = 0; i < n; i++) {
        tmp[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < n; i++) {
        nums[i] = tmp[i];
    }
}

void optimizedRotate(int nums[], int n, int k) {
    //
}

void print_array(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {

    int T, tc = 1;

    if (scanf("%d", &T) != 1) {
        return 1;
    }

    while (T--) {
        
        int k;
        if (scanf("%d", &k) != 1) {
            return 1;
        }

        int nums[MAX];
        int n = 0;
        char c;
        while (scanf("%d%c", nums + n++, &c) == 2) {
            if (c == '\n') {
                break;
            }
        }

        rotate(nums, n, k);

        printf("Case #%d:\n", tc++);
        print_array(nums, n);

    }

    return 0;
}
