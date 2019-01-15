#include <cstdio>

using namespace std;

int solution(int n) {

    int sum = 0;

    while (true) {
        sum += n % 10;
        n /= 10;

        if (n == 0) break;
    }

    return sum / 10 != 0 ? solution(sum) : sum;
}

int main() {
    int n;

    while (scanf("%d", &n) != EOF, n) {
        printf("%d\n", solution(n));
    }

    return 0;
}

