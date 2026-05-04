class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; // Use long long to handle INT_MIN edge case
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1.0;
        double current_product = x;

        while (N > 0) {
            // If the exponent is odd, multiply the result by current_product
            if (N % 2 == 1) {
                result *= current_product;
            }
            // Square the base and halve the exponent
            current_product *= current_product;
            N /= 2;
        }

        return result;
    }
};