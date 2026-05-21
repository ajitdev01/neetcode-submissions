class Solution {
    /**
     * @param {number} n
     * @return {boolean}
     */
    isPowerOfTwo(n: number): boolean {
    if (n <= 0) {
        return false;
    }

    return (n & (n - 1)) === 0;
}
    
}
