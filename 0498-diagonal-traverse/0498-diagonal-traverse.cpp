class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> res;
        int m = mat.size();
        int n = mat[0].size();
        res.reserve(m * n);  

        for (int d = 0; d < m + n - 1; d++) {   
            vector<int> diag;
            int i = max(0, d - (n - 1));
            int j = d - i;

            while (i < m && j >= 0) {
                diag.push_back(mat[i][j]);
                i++;
                j--;
            }

            if (d % 2 == 0) {
                reverse(diag.begin(), diag.end());
            }

            res.insert(res.end(), diag.begin(), diag.end());
        }

        return res;
    }
};
