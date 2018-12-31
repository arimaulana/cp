#include <stdio.h>

using namespace std;

int main() {
    int a, b, c, d;

    while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF, (a || b || c || d)) {
        int total = 1080; // from 3 full turn

        int first_pass = ((a - b < 0 ? a + 40 : a) - b) * 9;
        int second_pass = ((c - b < 0 ? c + 40 : c) - b) * 9;
        int third_pass = ((c - d < 0 ? c + 40 : c) - d) * 9;

        total = total + first_pass + second_pass + third_pass;
        printf("%d\n", total);
    }

    return 0;
}

