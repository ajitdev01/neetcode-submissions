class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        // Continue as long as there are digits left or a carry remains
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) {
                sum += a[i] - '0'; // Convert char to int
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0'; // Convert char to int
                j--;
            }

            // Append the binary digit (0 or 1)
            result += (sum % 2) + '0';
            
            // Calculate new carry (1 if sum >= 2, else 0)
            carry = sum / 2;
        }

        // The result was built backwards, so reverse it
        reverse(result.begin(), result.end());
        return result;
    }
};