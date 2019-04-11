/**
 * - start from NW cell
 * - N x N cells
 * - finish at SE cell
 * 
 * - Two moves, one east (E) and one south (S)
 * - Can move into any cell
 * - Cannot leave the grid
 * 
 * - Not reusing lydia's move
 * 
 * - T (total cases, each case consist 2 line)
 * - N (dimensions of the maze)
 * - P of 2N - 2 characters (lydia's move)
 * 
 * - Limit
 * - 1 <= T <= 100
 * - 15 sec per test set
 * - 1 GB
 * - P contains exactly N - 1 E and N - 1 S char
 * 
 * - 2 <= N <= 10
 * - 2 <= N <= 1000
 * - at most 10 case, 2 <= N <= 50000, others is 2 <= N <= 10000
 */
 
#include <cstdio>

using namespace std;

//#define DEBUG
#ifdef DEBUG
#define PRINTF printf
#else
#define PRINTF
#endif

#define MAX 100000

main() {

    int T, N, tc = 1;

    if (scanf("%d", &T) != 1) {
        PRINTF("Error reading T input\n");
        return 1;
    }

    PRINTF("Total test case is %d\n", T);

    while (T--) {
        char P[MAX + 1];
        char c;

        if (scanf("%d\n", &N) != 1) {
            PRINTF("Error reading N input, when t: %d\n", tc);
            return 1;
        }

        int idx = 0;
        while (1) {
            if (scanf("%c", &c) != 1) {PRINTF("Error reading char\n"); return 1;}

            if (c == '\n' || c == EOF) {
                P[idx] = '\0';
                PRINTF("t case: %d\tN: %d\tP: %s\n", tc, N, P);
                break;
            }

            P[idx] = c == 'S' ? 'E' : 'S';
            idx++;
        }
        /*
        if (scanf("%s\n", P) != 1) {
            PRINTF("Error reading P input, when t: %d, N: %d\n", tc, N);
            return 1;
        }
        */

        printf("Case #%d: %s\n", tc, P);
        tc++;
    }

    return 0;
}

