#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

/*
 * Requirement
 * - replace exactly one character with any lowercase English letter so that the result is not a palindrome
 * - if there is no way to make it not a palindrome, return empty string
 *   "a", has no way to make it not a palindrome
 * - if result have many ways to make it not a palindrome, return only the smallest lexicographical order
 *   - "abcba" -> "bbcba", "aacba", "abcaa", "abcbb"
 *      Of all the ways, "aacba" is the lexicographically smallest
 *   - "aaa" -> "baa", "aba", "aab" -> "aba" is the smallest one
 *   - "aa" -> "ba", "ab" -> "ab" is the smallest one
 *
 */
char *break_palindrome(char *p) {

    int n = 0;
    while (*(p + n++) != '\0');
    n--;

    if (n == 1) return "";

    int mid = n >> 1;
    for (int i = 0; i < mid; i++) {
        if (p[i] == 'a') continue;
        p[i] = 'a';
        return p;
    }

    p[n - 1] = 'b';
    return p;
}

int main() {
    int T, tc = 1;

    if (scanf("%d", &T) != 1) return 1;

    while (T--) {

        char *p = malloc(sizeof(char) * (MAX + 1));
        if (scanf("%s", p) != 1) return 1;

        p = break_palindrome(p);

        printf("Case #%d:\n", tc++);
        printf("%s\n", p);

    }

    return 0;
}
