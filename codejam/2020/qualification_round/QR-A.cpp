#include <cstdio>
#include <unordered_set>
#include <map>

using namespace std;

// #define DEBUG
#ifdef DEBUG
#define PRINTF printf
#else
#define PRINTF
#endif

typedef unordered_set<int> si;
typedef map<int, si> msi;

int main() {

    int T, N, tc = 1;

    if (scanf("%d", &T) != 1) {
        PRINTF("error reading T\n");
        return 1;
    }

    PRINTF("Total test case is %d\n", T);

    while(T--) {

        int k = 0, r = 0, c = 0;

        if (scanf("%d", &N) != 1) {
            PRINTF("Error reading N, when test case is %d\n", tc);
            return 1;
        }

        int val;
        msi mr; // <idx_r, set_r> set_r taken from horizontal line
        msi mc; // <idx_c, set_c> set_c taken from vertical line
        map<int, bool> repeated_row; // <idx_r, is_repeated_row>
        map<int, bool> repeated_col; // <idx_c, is_repeated_col>

        for (int idx_r = 0; idx_r < N; idx_r++) {

            for (int idx_c = 0; idx_c < N; idx_c++) {

                if (scanf("%d", &val) != 1) {
                    PRINTF("Error reading num\n");
                    return 1;
                }

                if (idx_r == idx_c) {
                    k += val;
                }

                if (mr[idx_r].find(val) != mr[idx_r].end()) {
                    repeated_row[idx_r] = true;
                }

                if (mc[idx_c].find(val) != mc[idx_c].end()) {
                    repeated_col[idx_c] = true;
                }

                mr[idx_r].insert(val);
                mc[idx_c].insert(val);
            }
        }

        r = repeated_row.size();
        c = repeated_col.size();

        for (auto m : repeated_row) {
            PRINTF("idx row at %d is %s\n", m.first, m.second ? "true": "false");
        }

        for (auto m : repeated_col) {
            PRINTF("idx col at %d is %s\n", m.first, m.second ? "true" : "false");
        }

        printf("Case #%d: %d %d %d\n", tc, k, r, c);
        tc++;

    }

    return 0;
}
