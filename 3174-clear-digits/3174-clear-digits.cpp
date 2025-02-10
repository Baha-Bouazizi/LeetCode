class Solution {
public:
    string clearDigits(string s) {
        int charIndex = 0;

        while (charIndex < s.size()) {
            if (isdigit(s[charIndex])) {
                s.erase(charIndex, 1);
                if (charIndex > 0) {
                    s.erase(charIndex - 1, 1);
                    charIndex--;
                }
            } else {
                charIndex++;
            }
        }
        return s;
    }
};