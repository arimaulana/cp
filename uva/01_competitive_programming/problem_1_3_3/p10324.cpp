#include <cstdio>
#include <cstring>

#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define REP(i, j) FOR (i, 0, j, 1)

//#define DEBUG
#ifdef DEBUG
#define PRINTF printf
#else
#define PRINTF
#endif

#define MAX 1000000
char arr[MAX + 1];

int main()
{
    int n, i, j, tc = 1;

    while (fgets(arr, MAX, stdin) != NULL) 
    {

        if (strcmp(arr, "\n") == 0) break;

        printf("Case %d:\n", tc);

        if (scanf("%d\n", &n) != 1) {puts("error reading n"); return 1;}

        PRINTF ("string = %s\tn = %d\n", arr, n);

        REP (idx, n) {
            if (scanf("%d %d\n", &i, &j) != 2) {puts("error reading i and j"); return 1;}

            if (i > j) {
                PRINTF ("i = %d\tj = %d\n", i, j);
                int tmp = i;
                i = j;
                j = tmp;
            }

            PRINTF ("i = %d\tj = %d\n", i, j);

            int min = -1;
            int max = -1;

            FOR (idx, i, j+1, 1) {

                int v = arr[idx] - '0';

                min = min == -1 || min > v ? v : min;
                max = max == -1 || max < v ? v : max;

                if (min != max) break;
            }

            PRINTF("min = %d\tmax = %d\n", min, max);
            puts(min == max ? "Yes" : "No");
        }

        tc++;
    }

    return 0;
}

