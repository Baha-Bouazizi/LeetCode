class Solution {
public:
    bool isPrefixAndSuffix(const string& str1, const string& str2) {
    if (str1.size() > str2.size()) {
        return false; 
    }
        string sub1 = str2.substr(0, str1.size());
        string sub2 = str2.substr(str2.size() - str1.size(), str1.size());
        return (sub1 == str1 && sub2 == str1);
    }

    
    int countPrefixSuffixPairs(vector<string>& words) {
        int res = 0;
        for (int i = 0; i < words.size()-1; i++) { 
            for (int j = i + 1; j < words.size(); j++) { 
                if (isPrefixAndSuffix(words[i], words[j])) {
                    res++;
                }
            }
        }
        return res;
    }
};
