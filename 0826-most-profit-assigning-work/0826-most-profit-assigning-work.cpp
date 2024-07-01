class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
    
        vector<pair<int, int>> jobs;
        for (int i = 0; i < difficulty.size(); i++) {
            jobs.push_back({difficulty[i], profit[i]});
        }

        
        sort(jobs.begin(), jobs.end());

        
        sort(worker.begin(), worker.end());

        int maxProfit = 0, i = 0, best = 0;

    
        for (int ability : worker) {
           
            while (i < jobs.size() && ability >= jobs[i].first) {
                best = max(best, jobs[i].second);
                i++;
            }
            
            maxProfit += best;
        }

        return maxProfit;
    }
};
