#include <cstdio>

using namespace std;

int main() {
    int N, B, H, W, p, a;

    while (scanf("%d %d %d %d", &N, &B, &H, &W) != EOF) {
        int low_budget = 0;
        //printf("N = %d, B = %d, H = %d, W = %d\n", N, B, H, W);
        while (H--) {
            if (scanf("%d", &p) != 1) {printf("H ERROR N = %d", N); return 1;}

            //printf("N = %d, B = %d, H = %d, W = %d\n", N, B, H, W);
            int week = W;
            while (week--) {
                if (scanf("%d", &a) != 1) {printf("W ERROR N = %d, H = %d, W = %d", N, H, W); return 1;}

                int tmp_budget = a * p;
                //printf("TMP BUDGET = %d\n", tmp_budget);
                //printf("a = %d, p = %d\n", a, p);
                if (a >= N && tmp_budget <= B) {
                    if (low_budget > 0 && tmp_budget < low_budget) {
                        low_budget = tmp_budget;
                    } else if (low_budget == 0) {
                        low_budget = tmp_budget;
                    }
                }
                //printf("LOW BUDGET = %d\n", low_budget);
            }
        }
        low_budget != 0 ? printf("%d\n", low_budget) : puts("stay home");
    }

    return 0;
}

