class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum = 0;
        
      
        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                sum += customers[i];
            }
        }
        
        int max_un = 0;   
        for (int i = 0; i <= customers.size() - minutes; i++) {
            int un = 0;
            for (int j = i; j < i + minutes; j++) {
                if (grumpy[j] == 1) {
                    un += customers[j];
                }
            }
            if (un > max_un) {
                max_un = un;
            }
        }
        
        return sum + max_un;
    }
};
