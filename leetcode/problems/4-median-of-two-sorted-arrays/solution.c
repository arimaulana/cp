#include <stdio.h>

#define MAX 2000

void print_array(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

double find_median_sorted_array(int *nums1, int n1, int *nums2, int n2) {
    int nums[MAX];

    int i = 0, i1 = 0, i2 = 0;
    while (i1 < n1 || i2 < n2) {
        if (i1 < n1 && i2 < n2) {
            nums[i++] = nums1[i1] < nums2[i2] ? nums1[i1++] : nums2[i2++];
        } else if (i1 < n1) {
            nums[i++] = nums1[i1++];
        } else if (i2 < n2) {
            nums[i++] = nums2[i2++];
        }
    }

    if (i % 2 != 0) {
        return (double) nums[(i - 1) / 2];
    }
    
    return ((double) nums[(i - 1) / 2] + (double) nums[(i - 1) / 2 + 1]) / (double) 2;
}

int main() {

    int T, tc = 1;

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {

        int nums1[MAX / 2];
        int n1 = 0;
        char c;
        while (scanf("%d%c", &nums1[n1++], &c) == 2) {
            if (c == '\n') break;
        }

        int nums2[MAX / 2];
        int n2 = 0;
        while (scanf("%d%c", &nums2[n2++], &c) == 2) {
            if (c == '\n') break;
        }

        double m = find_median_sorted_array(nums1, n1, nums2, n2);
        printf("Case #%d:\n", tc++);
        printf("%.5f\n", m);

    }

    return 0;
}
