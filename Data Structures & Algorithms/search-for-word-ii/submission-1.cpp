class Solution {
public:
    struct TrieNode {
        TrieNode* child[26];
        string word;

        TrieNode() {
            word = "";
            for (int i = 0; i < 26; i++)
                child[i] = nullptr;
        }
    };

    TrieNode* root = new TrieNode();

    void insert(string& word) {
        TrieNode* node = root;

        for (char c : word) {
            int idx = c - 'a';
            if (!node->child[idx])
                node->child[idx] = new TrieNode();
            node = node->child[idx];
        }

        node->word = word;
    }

    void dfs(vector<vector<char>>& board, int i, int j,
             TrieNode* node, vector<string>& ans) {

        char ch = board[i][j];

        if (ch == '#' || node->child[ch - 'a'] == nullptr)
            return;

        node = node->child[ch - 'a'];

        if (!node->word.empty()) {
            ans.push_back(node->word);
            node->word = "";          // Avoid duplicates
        }

        board[i][j] = '#';

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for (int k = 0; k < 4; k++) {
            int ni = i + dx[k];
            int nj = j + dy[k];

            if (ni >= 0 && nj >= 0 &&
                ni < board.size() &&
                nj < board[0].size()) {

                dfs(board, ni, nj, node, ans);
            }
        }

        board[i][j] = ch;
    }

    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {

        for (string& word : words)
            insert(word);

        vector<string> ans;

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                dfs(board, i, j, root, ans);
            }
        }

        return ans;
    }
};