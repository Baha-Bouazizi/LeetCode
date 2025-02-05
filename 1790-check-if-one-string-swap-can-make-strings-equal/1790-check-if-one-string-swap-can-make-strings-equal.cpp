class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
       if (s1 == s2) return true; 

    vector<int> differences;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            differences.push_back(i);
        }
    }

    return (differences.size() == 2 &&
            s1[differences[0]] == s2[differences[1]] &&
            s1[differences[1]] == s2[differences[0]]);
}

    
};