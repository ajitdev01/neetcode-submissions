class Solution {
public:
    int getSum(int a, int b) {
       while (b != 0) {
            // Find carry bits and cast to unsigned to avoid overflow errors
            int carry = (unsigned int)(a & b) << 1;
            // Sum without carry
            a = a ^ b;
            // Move carry to b
            b = carry;
        }
        return a; 
    }
};