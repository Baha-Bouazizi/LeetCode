class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        // Check if it is possible to form an m x n 2D array
        if (m * n != original.size()) {
            // If not, return an empty 2D array
            return {};
        }

        // Initialize the result 2D array with m rows and n columns
        vector<vector<int>> resultArray(m, vector<int>(n));

        // Fill the 2D array with elements from the original array
        for (int i = 0; i < original.size(); i++) {
            resultArray[i / n][i % n] = original[i];
        }

        return resultArray;
    }
};