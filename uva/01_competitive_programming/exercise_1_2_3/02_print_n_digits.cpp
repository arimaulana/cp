#include <stdio.h>
#include <math.h>

int main() {
    int decimal;

    printf("Please input decimal precision: ");
    scanf("%d", &decimal);
    printf("%.*f\n", decimal, M_PI);

    return 0;
}