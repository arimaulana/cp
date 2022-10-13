
class Solution {
    public boolean isPalindrome(int x) {
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

    public static void main(String[] args) {
        
    }
}

