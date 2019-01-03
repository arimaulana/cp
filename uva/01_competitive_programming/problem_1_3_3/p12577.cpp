#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
    char s[6];

    int i = 1;
    while (scanf("%s", s) == 1) {
        if (strcmp(s, "*") == 0) break;

        printf("Case %d: Hajj-e-%s\n", i, strcmp(s, "Hajj") == 0 ? "Akbar" : "Asghar");
        i++;
    }

    return 0;
}

