class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int len=0, lar=0;
        long long maxDiag = 0;
        for(auto &it : dimensions){
            long long diag2 = 1LL*it[0]*it[0] + 1LL*it[1]*it[1]; 
            if(diag2 > maxDiag){
                maxDiag = diag2;
                len = it[0];
                lar = it[1];
            }
            else if(diag2 == maxDiag){
                if(1LL*it[0]*it[1] > 1LL*len*lar){
                    len = it[0];
                    lar = it[1];
                }
            }
        }
        return len * lar;
    }
};
