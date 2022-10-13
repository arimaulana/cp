import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Solution {
    public static boolean isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;
        if (x % 10 == 0) return false;

        int val = 0;
        int c = x;
        while (c > 0) {
            val *= 10;
            val += c % 10;
            c /= 10;
        }

        return val == x;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(buf.readLine());
        for (int tc = 1; tc <= T; tc++) {
            int x = Integer.parseInt(buf.readLine());

            System.out.printf("Case #%d:\n", tc);
            System.out.println(isPalindrome(x));
        }
    }
}

