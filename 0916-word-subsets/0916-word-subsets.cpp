class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;

        for (int i = 0; i < words2.size(); i++) {
            sort(words2[i].begin(), words2[i].end());
        }

        for (int j = 0; j < words1.size(); j++) {
            string sortedWord1 = words1[j];
            sort(sortedWord1.begin(), sortedWord1.end());
            bool isUniversal = true;

            for (int i = 0; i < words2.size(); i++) {
                string sortedWord2 = words2[i];

 
                if (!isSubset(sortedWord1, sortedWord2)) {
                    isUniversal = false;
                    break;
                }
            }

            if (isUniversal) {
                res.push_back(words1[j]);
            }
        }

        return res;
    }

    bool isSubset(string& word1, string& word2) {
        int i = 0, j = 0;
        while (i < word1.size() && j < word2.size()) {
            if (word1[i] == word2[j]) {
                j++;
            }
            i++;
        }
        return j == word2.size();
    }
};
