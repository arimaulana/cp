#include <cstdio>
#include <cstring>

using namespace std;

char s[100000001];

int main() {
    int T;
    //char s[2001]; // because we aren't given the constraint limit of S digits, so assume it has max 2000 char

    scanf("%d", &T);

    while (T--) {
        scanf("%s", s);

        int len = strlen(s);

        if (strcmp(s, "1") == 0 || strcmp(s, "4") == 0 || strcmp(s, "78") == 0) printf("+\n");
        else if (len > 2 && s[len - 2] == '3' && s[len - 1] == '5') printf("-\n");
        else if (len > 2 && s[0] == '9' && s[len - 1] == '4') printf("*\n");
        else if (len > 3 && s[0] == '1' && s[1] == '9' && s[2] == '0') printf("?\n");
        else printf("+\n");
    }

    return 0;
}

