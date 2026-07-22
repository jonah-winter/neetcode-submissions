class Solution {
public:
    bool isValid(string s) {
        std::vector<char> orders {};
        char a {'('};
        char b {'{'};
        char c {'['};
        char checkLast {};
        if (s.length() % 2 != 0) {
            return false;
        }
        if (!s.length()) {
            return false;
        }
        for (char d : s) {
            if (d == a || d == b || d == c) {
                orders.push_back(d);
            }
            if (d == ']' || d == '}' || d == ')') {
                if (!orders.size()) {
                    return false;
                }
                if (orders.back() == '{') {
                    checkLast = '}';
                }
                if (orders.back() == '[') {
                    checkLast = ']';
                }
                if (orders.back() == '(') {
                    checkLast = ')';
                }
                if (d != checkLast) {
                    return false;
                }
                else {
                    orders.pop_back();
                }
            }
        }
        if (orders.size()) {
            return false;
        }
        return true;
    }
};
