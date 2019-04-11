#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<string, int> psi;
typedef vector<psi> vpsi;
typedef vector<string> vs;

bool sortByVal(const psi &a, const psi &b) {
    return (a.second < b.second);
}

int main() {
    int N, S, Q;
    char p[101];

    if (scanf("%d", &N) != 1) return 1;

    int i = 1;
    while (N--) {
        vpsi engine;
        vs query;

        if (scanf("%d\n", &S) != 1) return 1;
        while (S--) {
            //int ret_value = scanf("%[^\n]", p);*/
            //if (scanf("%[^\n]\n", p) != 1) return 1;
            //printf("string = %s\n", p);

            /*if (fgets(p, 101, stdin) == NULL) return 1;
            printf("engine = %s\n", p);
            */
            if (fgets(p, 101, stdin) == NULL) return 1;

            engine.push_back(psi(p, 0));
        }

        if (scanf("%d\n", &Q) != 1) return 1;
        while (Q--) {
            if (scanf("%[^\n]\n", p) != 1) return 1;

            string e(p);
            for (auto el : engine) {
                if (el.first == e) {
                    el.second += 1;
                    break;
                }
            }
            query.push_back(e);
        }

        // sort by second ascending
        sort(engine.begin(), engine.end(), sortByVal);

        string curr_engine = engine[0].first;
        int c = 0;
        for (auto q : query) {
            for (auto el : engine) {
                if (el.first == q) {
                    el.second -= 1;
                    break;
                }
            }

            if (curr_engine == q) {
                c += 1;
                sort(engine.begin(), engine.end(), sortByVal);
                curr_engine = engine[0].first;
            }
        }

        printf("Case #%d: %d\n", i, c);
        i++;
    }

    return 0;
}

