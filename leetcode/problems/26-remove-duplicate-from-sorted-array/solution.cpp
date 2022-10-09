#include <cstdio>
#include <vector>

using namespace std;

typedef vector<int> vi;

int removeDuplicates(vi &nums) {
    int n = nums.size();
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (nums[k] != nums[i]) {
            k++;
        }
        nums[k] = nums[i];
    }

    return k + 1;
}

int main() {
    int T, tc = 1;

    if (scanf("%d", &T) != 1) {
        return 1;
    }

    while (T--) {

        vi nums;
        int n;
        char c;

        while (scanf("%d%c", &n, &c) == 2) {
            
            nums.push_back(n);

            if (c == '\n') {
                break;
            }

        }

        int k = removeDuplicates(nums);

        printf("Case #%d:\n", tc++);
        printf("%d\n", k);
        
        for (int i = 0; i < k; i++) {
            if (i + 1 == k) {
                printf("%d\n", nums[i]);
            } else {
                printf("%d ", nums[i]);
            }
        }

    }

    return 0;
}
