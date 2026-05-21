class Solution {
    /**
     * @param {number} n
     * @return {boolean}
     */
    isPowerOfTwo(n) {
        
    if (n <= 0) {
        return false;
    }

    return (n & (n - 1)) === 0;
};
    }

