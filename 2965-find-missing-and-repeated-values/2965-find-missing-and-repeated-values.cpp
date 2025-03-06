class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n * n;
        vector<int> freq(N + 1, 0);  
        int a = -1, b = -1;
        long long sumReal = 0;  
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = grid[i][j];
                sumReal += val;
                freq[val]++;
                if (freq[val] == 2) {
                    a = val;  
                }
            }
        }
        
        long long sumTheorique = (N * (N + 1)) / 2;

        b = sumTheorique - (sumReal - a);

        return {a, b};
    }
};
