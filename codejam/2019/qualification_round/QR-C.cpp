/**
 * - Pangrams (contain all char from a to z in english alpha)
 * - Contain confidential information ?
 * 
 * - choose 26 different prime numbers, none of which is larger than some int N.
 * - sorted those primes in increasing order.
 * - assign the smallest num to A, 2nd smallest to B, and so on.
 * 
 * - send pangram
 *      - remove all spacing to form a plaintext msg
 *      - write down the prod of N(i) + N(i + 1)
 *      - the number of values (collection of product result) is one smaller than the char (its because prod Ni with Ni+1)
 * 
 * - given chipertext and the value of N that being used
 * 
 * - input T, N, L (length of the list of values in chipertext)
 * 
 * Limit
 * - 1 <= T <= 100
 * - 20 sec per test set
 * - 1 GB
 * - 25 <= L <= 100
 * - 101 <= N <= 10000
 * - 101 <= N <= 10^100
 * 
 * Quest
 * - Try to decrypt the chipertext
 * - How to decide which primes is being used based on N?
 * 
 * Problem
 * How to deal with big integers?
 * 
 * How to solve
 * A.
 *  1. From the given chipertext, we could find the range of prime numbers being used.
 *  2. Loop over chipertext given to match with prime numbers.
 */
