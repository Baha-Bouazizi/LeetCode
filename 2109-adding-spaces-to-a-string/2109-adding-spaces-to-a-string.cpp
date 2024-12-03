class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string r = ""; 
        int prev = 0;   
        
        for (int i = 0; i < spaces.size(); i++) {
            r += s.substr(prev, spaces[i] - prev) + " ";
            prev = spaces[i];                         
        }
        
                        r += s.substr(prev);
        
        return r;
    }
};
