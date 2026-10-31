class Solution {
public:
    string countOfAtoms(string formula) {
        stack<map<string, int>> st;
        st.push({});

        int n = formula.size();
        int i = 0;

        while (i < n) {
            if (formula[i] == '(') {
                st.push({});
                i++;
            }
            else if (formula[i] == ')') {
                i++;

                int multiplier = 0;

                while (i < n && isdigit(formula[i])) {
                    multiplier = multiplier * 10 + (formula[i] - '0');
                    i++;
                }

                if (multiplier == 0) multiplier = 1;

                auto top = st.top();
                st.pop();

                for (auto& [atom, count] : top) {
                    st.top()[atom] += count * multiplier;
                }
            }
            else {
                // Parse atom name
                string atom;
                atom += formula[i++];

                while (i < n && islower(formula[i])) {
                    atom += formula[i++];
                }

                // Parse atom count
                int count = 0;

                while (i < n && isdigit(formula[i])) {
                    count = count * 10 + (formula[i] - '0');
                    i++;
                }

                st.top()[atom] += (count == 0 ? 1 : count);
            }
        }

        // Build sorted result
        string ans;

        for (auto& [atom, count] : st.top()) {
            ans += atom;

            if (count > 1) {
                ans += to_string(count);
            }
        }

        return ans;
    }
};