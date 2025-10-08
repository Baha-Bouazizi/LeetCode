class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> vr;
        sort(potions.begin(), potions.end());
        int m = potions.size();

        for(int spell : spells) {
            long long left = 0, right = m - 1;
            int idx = m; // position de la première potion qui fonctionne
            while(left <= right) {
                int mid = left + (right - left) / 2;
                long long prod = (long long)spell * potions[mid];
                if(prod >= success) {
                    idx = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            vr.push_back(m - idx); // toutes les potions à partir de idx
        }
        return vr;
    }
};
