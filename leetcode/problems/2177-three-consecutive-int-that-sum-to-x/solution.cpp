#include <cstdio>
#include <vector>

using namespace std;

typedef long long LL;
typedef vector<LL> vll;

vll sum_of_three(LL x) {
    vll nums;

    if (x < 0) {
        return nums;
    }

    if (x % 3 != 0) {
        return nums;
    }
    
    LL m = x / 3;
    nums.push_back(m - 1);
    nums.push_back(m);
    nums.push_back(m + 1);

    return nums;
}

int main() {

    int T, tc = 1;

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {

        LL x;
        if (scanf("%lld", &x) != 1) return 1;

        vll nums = sum_of_three(x);

        printf("Case #%d:\n", tc++);
        for (int i = 0, n = nums.size(); i < n; i++) {
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
