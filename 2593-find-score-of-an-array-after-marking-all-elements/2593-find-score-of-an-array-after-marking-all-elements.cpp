class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();  // Get the size of the array nums
        vector<int> ord(n);  // Array to store the indices of nums
        iota(ord.begin(), ord.end(), 0);  // Initialize ord with 0, 1, 2, ..., n-1

        // Sort the indices based on the values in nums
        sort(ord.begin(), ord.end(), [&](int a, int b) {
            if (nums[a] != nums[b])
                return nums[a] < nums[b];  // Sort by value of nums
            return a < b;  // If values are the same, sort by index
        });

        vector<bool> m(n, false);  // Array to mark which elements are already processed
        long long score = 0;  // Initialize score to 0

        // Iterate over the sorted indices to calculate the score
        for (int x : ord) {
            if (m[x])  // If the element is already marked, skip it
                continue;

            score += nums[x];  // Add the value of nums[x] to the score
            m[x] = true;  // Mark the current element as processed

            // Mark the previous element as processed, if it exists
            if (x > 0)
                m[x - 1] = true;

            // Mark the next element as processed, if it exists
            if (x + 1 < n)
                m[x + 1] = true;
        }

        return score;  // Return the total score
    }
};