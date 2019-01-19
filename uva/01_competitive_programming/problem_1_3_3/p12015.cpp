#include <cstdio>
#include <vector>
#include <string>

using namespace std;

typedef vector<string> vs;

int main() {
    int T;
    vs result;

    if (scanf("%d", &T) != 1) return 1;

    int i = 1;
    while (T--) {
        int visitor = 0;
        string s;
        for (int idx = 0; idx < 10; idx++) {
            char c[101];
            int tmp_visitor = 0;

            if (scanf("%s %d", c, &tmp_visitor) != 2) return 1;
            
            s = c;
            if (tmp_visitor > visitor) {
                visitor = tmp_visitor;
                result.clear();
                result.push_back(s);
            } else if (tmp_visitor == visitor) {
                result.push_back(s);
            }
        }

        printf("Case #%d:\n", i);
        for (auto el : result) {
            printf("%s\n", el.c_str());
        }

        i++;
    }

    return 0;
}

