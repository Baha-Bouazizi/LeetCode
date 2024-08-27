class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        int m=edges.size();
        vector<vector<pair<int,double>>> adj(n);
        for(int i=0;i<m;i++) {
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        vector<double> dis(n);
        priority_queue<pair<double,int>> pq;
        pq.push({1,start_node});
        dis[start_node]=1;
        while(!pq.empty()) {
            int cur=pq.top().second;
            double cur_prob=pq.top().first;
            pq.pop();
            if(cur==end_node) {
                break;
            }
            for(auto t:adj[cur]) {
                int nex=t.first;
                double prob=t.second;
                if(cur_prob*prob>dis[nex]) {
                    dis[nex]=cur_prob*prob;
                    pq.push({dis[nex],nex});
                }
            }
        }
        return dis[end_node];
    }
};