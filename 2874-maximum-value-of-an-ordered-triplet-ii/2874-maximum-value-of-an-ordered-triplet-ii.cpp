class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
         long long res = 0;
        long long var;
        for (int i = 0; i <= nums.size() - 3; i++) {
            for (int j = i + 1; j <= nums.size() - 2; j++) {
                for (int k = j + 1; k < nums.size(); k++) {
 
                    var = static_cast<long long>(nums[i] - nums[j]) * nums[k];
                    if (var > res) res = var;
                }
            }
        }
        return res;
    }
};