class Solution {

    public void reverseString(char[] s) {

        String reversed =
            new StringBuilder(new String(s))
            .reverse()
            .toString();

        for (int i = 0; i < s.length; i++) {
            s[i] = reversed.charAt(i);
        }
    }
}