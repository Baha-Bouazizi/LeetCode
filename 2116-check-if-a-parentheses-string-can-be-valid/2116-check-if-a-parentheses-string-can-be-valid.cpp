class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();
        if (n % 2 == 1) return false;
        int b = 0, a = 0;
        for (int i = 0; i < n; i++) {
            if (locked[i] == '0' || s[i] == '(') b++;
            else b--;
            if (b < 0) return false;
            if (locked[n - i - 1] == '0' || s[n - i - 1] == ')') a++;
            else a--;
            if (a < 0) return false;
        }
        return true;
    }
};