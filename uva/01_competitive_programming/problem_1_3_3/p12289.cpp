#include <stdio.h>

using namespace std;

int main() {
    int T;

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {
        char s[101];

        if (scanf("%s", s) != 1) return 1;

        if ((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e')) printf("1\n");
        else if ((s[0] == 't' && s[1] == 'w') || (s[0] == 't' && s[2] == 'o') || (s[1] == 'w' && s[2] == 'o'))
        printf("2\n");
        else printf("3\n");
    }

    return 0;
}

