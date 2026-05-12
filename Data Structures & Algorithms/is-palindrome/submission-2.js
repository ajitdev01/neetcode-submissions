class Solution {

    isAlphaNum(ch) {

        if (
            (ch >= '0' && ch <= '9') ||
            (ch.toLowerCase() >= 'a' &&
             ch.toLowerCase() <= 'z')
        ) {
            return true;
        }

        return false;
    }

    isPalindrome(s) {

        let st = 0;
        let end = s.length - 1;

        while (st <= end) {

            if (!this.isAlphaNum(s[st])) {
                st++;
                continue;
            }

            if (!this.isAlphaNum(s[end])) {
                end--;
                continue;
            }

            if (
                s[st].toLowerCase() !==
                s[end].toLowerCase()
            ) {
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
}