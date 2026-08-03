class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int n = words.size();
        int i = 0;

        while (i < n) {
            int j = i;
            int letters = 0;

            // Pack maximum possible words
            while (j < n &&
                   letters + words[j].size() + (j - i) <= maxWidth) {
                letters += words[j].size();
                j++;
            }

            int gaps = j - i - 1;
            string line;

            // Last line OR only one word
            if (j == n || gaps == 0) {
                for (int k = i; k < j; k++) {
                    if (k > i)
                        line += " ";

                    line += words[k];
                }

                line += string(maxWidth - line.size(), ' ');
            }

            // Fully justify
            else {
                int totalSpaces = maxWidth - letters;

                int spaces = totalSpaces / gaps;
                int extra = totalSpaces % gaps;

                for (int k = i; k < j; k++) {
                    line += words[k];

                    if (k < j - 1) {
                        int cnt = spaces;

                        // Left gaps get extra spaces
                        if (extra > 0) {
                            cnt++;
                            extra--;
                        }

                        line += string(cnt, ' ');
                    }
                }
            }

            ans.push_back(line);
            i = j;
        }

        return ans;
    }
};