#include <stdio.h>
#include <cstring>
#include <string>

using namespace std;

int main() {
    char c[15];
    char sharp[] = "#";
    int i = 1;

    while (scanf("%s", c) != 1, strcmp(c, sharp) != 0) {
        string s(c);

        printf("Case %d: ", i);
        if (s == "HELLO") printf("ENGLISH");
        else if (s == "HOLA") printf("SPANISH");
        else if (s == "HALLO") printf("GERMAN");
        else if (s == "BONJOUR") printf("FRENCH");
        else if (s == "CIAO") printf("ITALIAN");
        else if (s == "ZDRAVSTVUJTE") printf("RUSSIAN");
        else printf("UNKNOWN");
        printf("\n");

        i++;
    }

    return 0;
}

