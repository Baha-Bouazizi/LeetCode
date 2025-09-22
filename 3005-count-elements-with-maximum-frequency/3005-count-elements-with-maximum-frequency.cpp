class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int res = 0;
        map<int,int> mp;

        for(auto it : nums) {
            mp[it]++;
        }

        int maxFreq = 0;
        for(auto &pair : mp) {
            if(pair.second > maxFreq) {
                maxFreq = pair.second;
            }
        }

        for(auto &pair : mp) {
            if(pair.second == maxFreq) {
                res += pair.second; 
            }
        }

        return res;
    }
};
