#include <cstdio>
#include <map>
#include <vector>
#include <string>

using namespace std;
typedef vector<string> vs;
typedef map<string, int> msi;
typedef pair<string, int> psi;

int main() {
    int N;

    bool newline = false;
    while (scanf("%d", &N) != EOF) {
        if (!newline)
            newline = true;
        else
            puts("");

        vs name;
        msi data;
        char p[13];

        int n = N;
        while (n--) {
            if (scanf("%s", p) != 1) return 1;

            string people(p);
            name.push_back(p);
            data.insert(psi(people, 0));
        }

        while (N--) {
            char gift[13];
            int m = 0;
            int t = 0;
            if (scanf("%s %d %d", gift, &m, &t) != 3) return 1;
            string g(gift);

            if (t) {
                int nominal = m / t;
                data[g] -= (nominal * t);

                while (t--) {
                    if (scanf("%s", p) != 1) return 1;
                    string s(p);

                    data[s] += nominal;
                }
            }
        }

        // printing data ordered by name vector
        for (auto n : name) {
            printf("%s %d\n", n.c_str(), data[n]);
        }
    }

    return 0;
}

