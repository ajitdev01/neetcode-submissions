
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;

        for (const string& s : details) {
            int age = stoi(s.substr(11, 2));

            if (age > 60)
                count++;
        }

        return count;
    }
};
