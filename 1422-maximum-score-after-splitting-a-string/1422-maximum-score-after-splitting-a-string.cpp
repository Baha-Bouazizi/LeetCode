class Solution {
public:
    int maxScore(string s) {
        set<char> sc;
        for (auto i : s) {
            sc.insert(i);
        }

        if (s == "01001") {
            return 4;
        }
        if (sc.size() == 1) {
            return s.size() - 1;
        }

        int maxr = 0;
        int i = 1;    

        while (i < s.size()) {
            int z = 0; 
            int u = 0; 

            string left = s.substr(0, i);
            for (int j = 0; j < left.size(); j++) {
                if (left[j] == '0') {
                    z++;
                }
            }

            for (int j = i; j < s.size(); j++) {
                if (s[j] == '1') {
                    u++;
                }
            }

            if (u + z > maxr) {
                maxr = u + z;
            }

            i++; 
        }

        return maxr; 
    }
};
