class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        
        int n = skill.size();
        long long totalSum = 0;
        
        for (int i = 0; i < n; i++) {
            totalSum += skill[i];
        }
        
        int re = totalSum / (n / 2); 
        
        
        if (totalSum % (n / 2) != 0) {
            return -1;
        }

        long long totalChemistry = 0;
        int i = 0, j = n - 1;
        
        while (i < j) {
            if (skill[i] + skill[j] != re) {
                return -1; 
            }
            
            totalChemistry += skill[i] * skill[j];
            i++;
            j--;
        }
        
        return totalChemistry; 
    }
};
