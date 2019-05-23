/**
 * - R x C
 * - row numbered from 1 to R (top to bot)
 * - col numbered from 1 to C (left to right)
 * 
 * - continue jump until all cell alr visited exactly once.
 * - each jump doesnt share a row, col, or diagonal with curr cell
 * 
 * 
 * - invalid jump if and only if 
 * r = r' (share row)
 * c = c' (share col)
 * r - c = r' - c' (dr = dc, which is diagonal)
 * r + c = r' + c' (dr = dc, which is diagonal)
 * 
 * 
 * Limit
 * - 20 sec per test set
 * - 1 GB
 * 
 * set 1
 * - T = 16
 * - 2 <= R <= 5
 * - 2 <= C <= 5
 * 
 * set 2
 * 1 <= T <= 100
 * 2 <= R <= 20
 * 2 <= C <= 20
 */
