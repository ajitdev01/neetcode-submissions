class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    checkValidString(s) {
        let low = 0;
        let high = 0;

        for (const c of s) {
            if (c === '(') {
                low++;
                high++;
            } 
            else if (c === ')') {
                low--;
                high--;
            } 
            else {
                // '*' can be '(', ')' or ''
                low--;
                high++;
            }

            // Too many closing brackets
            if (high < 0) {
                return false;
            }

            // Minimum cannot be negative
            low = Math.max(low, 0);
        }

        return low === 0;
    }
}