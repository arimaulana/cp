#include <cstdio>

using namespace std;

int main() {
    int a, b;

    while (scanf("%d %d", &a, &b) == 2, (a != -1 && b != -1)) {
        int n1 = a < b ? 100 + a - b : a - b;
        int n2 = b < a ? 100 + b - a : b - a;
        printf("%d\n", n1 > n2 ? n2 : n1);
    }

    return 0;
}

