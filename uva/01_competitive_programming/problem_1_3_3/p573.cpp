#include <cstdio>

using namespace std;

int main() {
    int H, U, D, F;

    while (scanf("%d %d %d %d", &H, &U, &D, &F) != EOF, H) {

        float y = 0;
        float uf = U * ((float) F / 100);
        float up = (float) U;
        int day = 1;

        bool done = false;

        while (!done) {
            y += up;
            done = y > H ? true : false;
            if (done) continue;

            y -= D;
            done = y < 0 ? true : false;

            up -= uf;
            up = up <= 0 ? 0 : up;
            if (!done) day++;
        }

        printf("%s on day %d\n", y >= H ? "success" : "failure", day);
    }

    return 0;
}

