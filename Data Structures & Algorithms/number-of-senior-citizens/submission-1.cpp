class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;

        for (string passenger : details) {
            int age = (passenger[11] - '0') * 10 
                    + (passenger[12] - '0');

            if (age > 60) {
                count++;
            }
        }

        return count;
    }
};