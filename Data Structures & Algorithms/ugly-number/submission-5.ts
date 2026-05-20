class Solution {
    isUgly(n: number): boolean {

        // Base case
        if (n <= 0) {
            return false;
        }

        // Divide by 2
        while (n % 2 === 0) {
            n = Math.floor(n / 2);
        }

        // Divide by 3
        while (n % 3 === 0) {
            n = Math.floor(n / 3);
        }

        // Divide by 5
        while (n % 5 === 0) {
            n = Math.floor(n / 5);
        }

        // Check result
        return n === 1;
    }
}