class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isValid(s) {
        const stack = [];

        const pairs = {
            ')': '(',
            ']': '[',
            '}': '{'
        };

        for (const char of s) {
            if (char === '(' || char === '[' || char === '{') {
                stack.push(char);
            } else {
                if (stack.length === 0 || stack.pop() !== pairs[char]) {
                    return false;
                }
            }
        }

        return stack.length === 0;
    }
}