#include <stdio.h>

int main() {
    bool is_open = false;

    char c;

    while (scanf("%c", &c) != EOF) {
        if (c == '\"') {
            is_open ? printf("''") : printf("``");
            is_open = !is_open;
        } else {
            printf("%c", c);
        }
    }

    return 0;
}
