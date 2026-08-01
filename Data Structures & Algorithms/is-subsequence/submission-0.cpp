class Solution {
public:
    bool isSubsequence(string s, string t) {
        char curr {s[0]};
        int i {0};
        for (size_t c{0}; c < t.length(); c++) {
            if (t[c] == curr) {
                ++i;
                curr = s[i];
            }
        }
        if (i != s.length()) {
            return false;
        }
        return true;
    }
};