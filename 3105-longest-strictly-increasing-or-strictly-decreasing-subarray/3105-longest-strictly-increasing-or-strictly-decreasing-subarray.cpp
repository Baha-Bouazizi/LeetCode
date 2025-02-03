class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1, dec = 1, maxLen = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                inc += 1;
                dec = 1;  
            } 
            else if (nums[i] < nums[i - 1]) {
                dec += 1;
                inc = 1;  
            } 
            else {
                inc = 1;
                dec = 1;
            }

            maxLen = max(maxLen, max(inc, dec));
        }
        return maxLen;
    }
};
