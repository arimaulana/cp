#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_isomorphic(char *s, char *t) {
    int n = strlen(s);
    if (n != strlen(t)) return false;

    int cs[256] = {0};
    int ct[256] = {0};

    for (int i = 0; i < n; i++) {
        if (cs[s[i]] != ct[t[i]]) return false;
        cs[s[i]] = i + 1;
        ct[t[i]] = i + 1;
    }

    return true;
}

void flush_input() {
    char c;
    while ((c = getc(stdin) != '\n' && c != EOF));
}

int main() {
    int T;

    if (scanf("%d", &T) != 1) return 1;
    flush_input();
    
    for (int tc = 1; tc <= T; tc++) {
        char s[50000];
        char t[50000];

        int n = 0;
        while (scanf("%c", &s[n]) == 1) {
            if (s[n] == '\n') {
                s[n] = '\0';
                break;
            };
            n++;
        }

        n = 0;
        while (scanf("%c", &t[n]) == 1) {
            if (t[n] == '\n') {
                t[n] = '\0';
                break;
            };
            n++;
        }

        printf("Case #%d: %s\n", tc, is_isomorphic(s, t) ? "true" : "false");

    }

    return 0;
}
