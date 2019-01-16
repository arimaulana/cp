#include <cstdio>

using namespace std;

int main() {
    int N, a, b;

    if (scanf("%d", &N) != 1) return 1;

    puts("Lumberjacks:");
    
    while (N--) {
        bool is_asc = true;
        bool flag = true; // true if ordered
        a = 0;
        for (int i = 0; i < 10; i++) {
            if (scanf("%d", &b) != 1) return 1;

            if (!flag) continue;

            if (i == 0) {
                a = b;
                continue;
            } else if (i == 1) {
                is_asc = a > b ? false : true;
                a = b;
                continue;
            }

            bool tmp_is_asc = false;
            if (a > b)
                tmp_is_asc = false;
            else if (a < b)
                tmp_is_asc = true;

            if (is_asc != tmp_is_asc)
                flag = false;
                a = b;
                continue;

            a = b;
        }
        puts(flag ? "Ordered" : "Unordered");
    }

    return 0;
}

