#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
    int T;
    char s[101]; // because we aren't given the constraint limit of S digits, so assume it has max 100 char

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {
        if (scanf("%s", s) != 1) return 1;

        int len = strlen(s);

        if (len > 2 && s[len - 2] == '3' && s[len - 1] == '5') printf("-\n");
        else if (len > 2 && s[0] == '9' && s[len - 1] == '4') printf("*\n");
        else if (len > 3 && s[0] == '1' && s[1] == '9' && s[2] == '0') printf("?\n");
        else printf("+\n");
    }

    return 0;
}

