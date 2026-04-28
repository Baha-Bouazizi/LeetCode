class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> nums;

        // Flatten the grid
        for (auto &row : grid) {
            for (int num : row) {
                nums.push_back(num);
            }
        }

        // Check feasibility
        int base = nums[0];
        for (int num : nums) {
            if ((num - base) % x != 0) {
                return -1;
            }
        }

        // Normalize values (convert to steps)
        for (int &num : nums) {
            num = (num - base) / x;
        }

        // Sort and find median
        sort(nums.begin(), nums.end());
        int median = nums[nums.size() / 2];

        // Count operations
        int operations = 0;
        for (int num : nums) {
            operations += abs(num - median);
        }

        return operations;
    }
};