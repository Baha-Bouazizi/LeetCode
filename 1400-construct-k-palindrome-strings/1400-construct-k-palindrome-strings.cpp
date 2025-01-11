class Solution {
public:
    bool canConstruct(string s, int k) {
        if (k > s.length()) return false;

        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        int countimp = 0;
        for (auto it : mp) {
            if (it.second % 2 != 0) {
                countimp++;
            }
        }

        return countimp <= k;
    }
};
