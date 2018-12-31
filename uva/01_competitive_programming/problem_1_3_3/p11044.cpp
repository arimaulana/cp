#include <stdio.h>
#include <math.h>

using namespace std;

int solution(int n, int m) {
    int total = 0;
    
    int area = (n - 1) * (m - 1);

    double power = 2;

    while (power) {
        int controlled = (int) pow(3, power);

        total += (area / controlled);

        area = area % controlled;

        if (area == 0) break;

        power--;
    }

    return total;
}

int main() {
    int N, n, m;
    
    if (scanf("%d", &N) != 1) {
        printf("Failed to read data.\n");
    }

    while (N--) {
        if (scanf("%d %d", &n, &m) != 2) {
            printf("Failed to read data.\n");
            break;
        }

        printf("%d\n", solution(n, m));
    }

    return 0;
}
