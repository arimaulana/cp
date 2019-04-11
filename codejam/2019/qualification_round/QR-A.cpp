/**
 * Info
 * - N jamcoins (integer)
 * - at least one of the digit of N is a 4
 * - 4 key is broken
 * - send two checks, positive integer A and B = N (A and B not contain digit 4)
 * - A and B could be same
 * - 1 < N < 10^5
 * - 1 < N < 10^9
 * - 1 < N < 10^100 (bigint?)
 * 
 * - 1 <= T <= 100
 * - 10 sec per test set
 * - 1 GB limit
 * - at least one digits of N is a 4
 */

#include <cstdio>

using namespace std;

//#define DEBUG
#ifdef DEBUG
#define PRINTF printf
#else
#define PRINTF
#endif

void solution(int N, int &A, int &B) {
    int n = N;
    A = 0;
    B = 0;
    int m = 1;
    while (n > 0) {
        int x = n % 10;
        
        PRINTF("n: %d, x: %d\n", n, x);

        if (x == 4) {
            A = (m * 3) + A;
            B = (m * 1) + B;
        } else {
            A = (m * x) + A;
            //B = (m * 0) + B;
        }

        n /= 10;
        m *= 10;
    }
}

int main() {
    int T, N, A, B, tc = 1;
    if (scanf("%d", &T) != 1) {
        PRINTF("error reading T\n");
        return 1;
    }
    
    PRINTF("Total test case is %d\n", T);
    
    while (T--) {
        if (scanf("%d", &N) != 1) {
            PRINTF("Error reading N, when at tc = %d", tc);
            return 1;
        }
        
        solution(N, A, B);

        printf("Case #%d: %d %d\n", tc, A, B);
        tc++;
    }
    
    return 0;
}

